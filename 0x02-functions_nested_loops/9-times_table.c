#include <stdio.h>
#include "main.h"

/**                                                                                                                                                                            
 * main - Entry point                                                                                                                                                          
 *                                                                                                                                                                             
 * Description: This function prints "_putchar" followed by a new line.                                                                                                        
 *                                                                                                                                                                             
 * Return: Always 0 (Success)                                                                                                                                                  
 */

void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if(k < 9)
{
putchar('0'+k);
}
else
{
putchar('0' + k / 10);
putchar('0' + k % 10);
}
if (j != 9)
{
putchar(',');
putchar(' ');
}
else 
{
putchar('$');
putchar('\n');
}
}
}
}
