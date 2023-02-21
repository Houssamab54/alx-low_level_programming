#include <stdio.h>
#include "main.h"

/**                                                                                                                                                                            
 * main - Entry point                                                                                                                                                          
 *                                                                                                                                                                             
 * Description: This function prints "_putchar" followed by a new line.                                                                                                        
 *                                                                                                                                                                             
 * Return: Always 0 (Success)                                                                                                                                                  
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
