#include "main.h"
/**
 * _memcpy - Function that copies n bytes from memory area src
 *
 * Description: This function copies n bytes from memory area src to
 * memory area dest
 *@dest: The memory area
 *@src: A memory area to copy from
 *@n: n bytes of the memory area
 *
 * Return: A pointer to the memory area s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
