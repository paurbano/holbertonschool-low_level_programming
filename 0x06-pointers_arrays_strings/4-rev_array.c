/**
 * reverse_array - reverse an array
 * @a: array of integers
 * @n: Integer
 * Description:  function is similar to the strncpy function,
 * Return: pointer to the resulting string dest
 */
void reverse_array(int *a, int n)
{
int izq, der, aux;

for (izq = 0, der = n - 1 ; izq < n / 2 ; izq++, der--)
{
aux = a[izq];
a[izq] = a[der];
a[der] = aux;
}
}
