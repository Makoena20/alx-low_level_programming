#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable arguments
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
  unsigned int i;
  va_list ag;
  int sum = 0;

  va_start(ag, n);
  for (i = 0; i < n; i++)
  {
    sum += va_arg(ag, int);
  }
  va_end(ag);

  return (sum);
}
