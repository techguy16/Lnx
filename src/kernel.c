#include "source.h"
#include "keyboard.h"
void main(void)
{
terminal_buffer = (unsigned short*)VGA_ADDRESS;
    vga_index = 0;
    clear_screen();
    print_string("LNX", WHITE);
    vga_index = 80;
    print_string("VERSION 0.01", RED);
    vga_index = 160;
    print_string('BLAH BLAH', WHITE);
    vga_index = 240;
    while (1) {
       keyboard_handler();
    }
return;
}
