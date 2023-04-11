#include "main.h"

/**
* get_endianness - checks if a machine is little or big endian
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
unsigned int c = 1;
char *o = (char *) &c;
return (*o);
}

