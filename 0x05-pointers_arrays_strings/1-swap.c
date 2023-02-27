/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to an integer.
 * @b: a pointer to an integer.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
