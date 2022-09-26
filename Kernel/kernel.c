#include <include/textmode.h>
#include <include/GDT/gdt.h>

void _start(){
InitGdt();
TerminalClear();
TerminalSetColor(0x0E);
TerminalWrite("Hello, World! This project Is on Pre-Alpha... IDT Is not Install... Wait for IDT... Thanks ! ");
}