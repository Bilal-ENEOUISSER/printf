#include "main.h"
/**
 * handle_print - search for match and execute for the associate function
 * @next: the character to match
 * @position: the position of next
 * Return: function where it matches and if there is no match
 **/
int (*handle_print(const char *next, int position))(va_list)
{
int i;
hd_p prm[] = {
{"s", _print_s},
{"c", _print_c},
{"d", _print_i},
{"i", _print_i},
{"b", _print_bin},
{'\0', NULL}
};
for (i = 0; prm[i].m != NULL; i++)
if (prm[i].m[0] == next[position])
return (prm[i].func);
return (NULL);
}
