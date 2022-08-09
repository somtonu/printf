#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
#endif /* MAIN_H */
