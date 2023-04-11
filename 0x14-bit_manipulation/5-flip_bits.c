#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @e: first number
* @f: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int e, unsigned long int f)
{
int o, count = 0;
unsigned long int current;
unsigned long int exclusive = e ^ f;
for (o = 63; o >= 0; o--)
{
current = exclusive >> o;
if (current & 1)
count++;
}
return (count);
}

