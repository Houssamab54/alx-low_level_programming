#include <stdio.h>
#include "main.h"

/**                                                                                                                                                                            
 * main - Entry point                                                                                                                                                          
 *                                                                                                                                                                             
 * Description: This function prints "_putchar" followed by a new line.                                                                                                        
 *                                                                                                                                                                             
 * Return: Always 0 (Success)                                                                                                                                                  
 */

void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar('0' + hour / 10);
_putchar('0' + hour % 10);
_putchar(':');
_putchar('0' + minute / 10);
_putchar('0' + minute % 10);
_putchar('\n');
}
}
}
