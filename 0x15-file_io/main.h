#ifndef MAIN_H
#define MAIN_H

/************ HEADER FILES *************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

/************ FUNCTION PROTOTYPES **************/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/*void print_elf_header(Elf64_Ehdr *hdr);*/

/*************** STRUCTURES ********************/
/**
* struct elf_hdr - header file sections
* @e_ident: magic number and other info
* @e_type: object file type
* @e_machine: machine type
* @e_version: object file version
* @e_entry: entry point address
* @e_phoff: program header table file offset
* @e_shoff: section header table file offset
* @e_flags: processor-specific flags
* @e_ehsize: elf header size
* @e_phentsize: program header table entry size
* @e_phnum: number of program header table entries
* @e_shentsize: section header table entry size
* @e_shnum: number of section header table entries
* @e_shstrndx: section header string table index
* Description: elf file information
*/
struct elf_hdr
{
unsigned char e_ident[16];
Elf64_Half e_type;
Elf64_Half e_machine;
Elf64_Word e_version;
Elf64_Addr e_entry;
Elf64_Off e_phoff;
Elf64_Off e_shoff;
Elf64_Word e_flags;
Elf64_Half e_ehsize;
Elf64_Half e_phentsize;
Elf64_Half e_phnum;
Elf64_Half e_shentsize;
Elf64_Half e_shnum;
Elf64_Word e_shstrndx;
};

#endif
