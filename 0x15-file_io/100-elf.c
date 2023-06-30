#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check(unsigned char *e_id)
{
	unsigned int i;

	for (i = 0; i < 4; i++)
	{
		if (e_id[i] != '127' &&
			e_id[i] != 'E' &&
			e_id[i] != 'L' &&
			e_id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void print_magic(unsigned char *e_id)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_id[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf("\n");
	}
}

void print_class(unsigned char *e_id)
{
	printf("  Class:                             ");

	switch (e_id[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
                        printf("ELF32\n");
                        break;
		case ELFCLASS64:
                        printf("ELF64\n");
                        break;
		default:
			printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

void print_data(unsigned char *e_id)
{
	printf("  Data:                             ");

	switch (e_id[EI_DATA])
	{
		case ELFDATANONE:
                        printf("none\n");
                        break;
                case ELFDATA2LSB:
                        printf("2's complement, little endian\n");
                        break;
                case ELFDATA2MBS:
                        printf("2's complement, big endian\n");
                        break;
                default:
                        printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

void print_version(unsigned char *e_id)
{
	printf("  Version:                             %d", e_id[EI_VERSION]);
	switch (e_id[EI_VERSION])
        {
                case EV_CURRENT:
                        printf("( current)\n");
                        break;
                default:
                        printf("\n");
			break;
	}
}

void print_osabi(unsigned char *e_id)
{
	printf("   OS/ABI:                             ");

        switch (e_id[EI_OSABI])
        {
                case ELFOSABI_NONE:
                        printf("UNIX - System V\n");
                        break;
		case ELFOSABI_HPUX:
                        printf("UNIX - HP-UX\n");
                        break;
		case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
		case ELFOSABI_LINUX:
                        printf("UNIX - Linux\n");
                        break;
		case ELFOSABI_SOLARIS:
                        printf("UNIX - Solaris\n");
                        break;
		case ELFOSABI_IRIX:
                        printf("UNIX - IRIX\n");
                        break;
		case ELFOSABI_FREEBDS:
                        printf("UNIX - FreeBDS\n");
                        break;
		case ELFOSABI_TRU64:
                        printf("UNIX - TRU64\n");
                        break;
		case ELFOSABI_ARM:
                        printf("ARM\n");
                        break;
		case ELFOSABI_STANDALONE:
                        printf("Standalone App\n");
                        break;
		default:
			printf("<unknown: %x>\n", e_id[EI_OSABI]);
	}
}

void print_abi(unsigned char *e_id)
{
	printf("   ABI Version:                        %d", e_id[EI_ABIVERSION]);
}

void print_type(unsigned int e_type, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("   Type:                             ");

        switch (e_type)
        {
                case ET_NONE:
                        printf("NONE (None)\n");
                        break;
                case ET_REL:
                        printf("REL (Relocatable file)\n");
                        break;
                case ET_EXEC:
                        printf("EXEC (Executable file)\n");
                        break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
                        printf("CORE (Core file)\n");
			break;
		default:
                        printf("<unknown: %x>\n", e_type);
	}
}

void print_entry(unsigned long int e_entry, unsigned char *e_id)
{
	printf("  Entry point address:               ");

	if (e_id[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Erorr: Can't close fd %d\n", elf)
			exit(98);
	}
}

int main (int argc, char **argv)
{
	Elf64_Ehdr *header;
	int on, rd;

	(void)argc;

	on = open(argv[1], O_RDONLY);
	if (on == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(on);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	rd = read(on, header, sizeof(Elf_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(on);
		dprintf(STDERR_FILENO, "Error: No such file\n", argv[1]);
		exit(98);
	}

	check(header->e_id);
	printf("ELF Header:\n");
	print_magic(header->e_id);
	print_class(header->e_id);
	print_data(header->e_id);
	print_version(header->e_id);
	print_osabi(header->e_id);
	print_abi(header->e_id);
	print_type(header->e_type, header->e_id);
	print_entry(header->e_entry, header->e_id);

	free(header);
	close_elf(on);
	return (0);
}
