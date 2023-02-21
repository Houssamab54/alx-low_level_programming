#include <stdio.h>
#include "main.h"

/**                                                                                                                                                                            
 * main - Entry point                                                                                                                                                          
 *                                                                                                                                                                             
 * Description: This function prints "_putchar" followed by a new line.                                                                                                        
 *                                                                                                                                                                             
 * Return: Always 0 (Success)                                                                                                                                                  
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
return last_digit;
}
