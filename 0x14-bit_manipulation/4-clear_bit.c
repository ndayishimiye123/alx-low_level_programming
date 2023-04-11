#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @c: pointer to the number to change
* @index: index of the bit to clear
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *c, unsigned int index)
{
if (index > 63)
return (-1);
*c = (~(1UL << index) & *c);
return (1);
}
