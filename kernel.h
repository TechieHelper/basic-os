#ifndef KERNEL_H
#define KERNEL_H
#endif 

void terminal_initialize(void);
void internal_terminal_putchar(char c);
uint8_t terminal_putchar(char c, uint8_t input_index);
void terminal_update_cursor(int x, int y);
void terminal_writestring(const char* data);

static const char SCANCODE_SET_1[] = {' ', '\x1b', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '\b', '\t',
						'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\n',
						'\0', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '`',
						'\0', '\\', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '\0',
						'*', '\0', ' ', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
						'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
						'\0', '\0', '\0', '\0', '\0', '\0', '\0', '7', '8', '9', '-', '\0', '4',
						'5', '6', '+', '1', '2', '3', '0', '.', '\0', '\0', '\0', '\0', '\0',
						'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
						'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
						'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
						'\0', '\0', '\0', '\0', '\0', '\0', '\0'};
