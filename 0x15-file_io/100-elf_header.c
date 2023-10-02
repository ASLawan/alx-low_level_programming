#include "main.h"

/**
 * print_hdr - prints elf header
 * @hdr: elf file
 * Return: nothing
 */
void print_hdr(struct elf_hdr *hdr)
{
printf("ELF header information:\n");
printf("Magic: %02x %02x %02x %02x\n", hdr->e_ident[EI_MAG0], hdr->e_ident[EI_MAG1], hdr->e_ident[EI_MAG2], hdr->e_ident[EI_MAG3]);
printf("Class: ");
switch (hdr->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Unknown\n");
break;
}
printf("Data: ");
switch (hdr->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("Little-endian\n");
break;
case ELFDATA2MSB:
printf("Big-endian\n");
break;
default:
printf("Unknown\n");
break;
}
printf("Version: %u\n", hdr->e_version);
printf("OS/ABI: %u\n", hdr->e_ident[EI_OSABI]);
printf("ABI Version: %u\n", hdr->e_ident[EI_ABIVERSION]);
printf("Type: ");
switch (hdr->e_type)
{
case ET_EXEC:
printf("Executable file\n");
break;
case ET_DYN:
printf("Shared object file\n");
break;
case ET_REL:
printf("Relocatable file\n");
break;
default:
printf("Unknown\n");
break;
}
printf("Entry point address: 0x%016lx\n", hdr->e_entry);
}
/**
 * main - entry ppoint
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, always success
 */
int main(int argc, char **argv)
{
FILE *file;
struct elf_hdr hdr;
if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
return (1);
}

file = fopen(argv[1], "rb");
if (file == NULL)
{
fprintf(stderr, "Error opening file: %s\n", argv[1]);
return (1);
}

fseek(file, 0, SEEK_SET);
fread(&hdr, sizeof(hdr), 1, file);
fclose(file);

if (memcmp(hdr.e_ident, ELFMAG, SELFMAG) != 0)
{
fprintf(stderr, "Error: File is not an ELF file.\n");
return (98);
}

print_hdr(&hdr);

return (0);
}
