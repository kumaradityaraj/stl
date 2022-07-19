#include <stdio.h>

void
main ()
{
  int a, b, c, c1, c2, c3;
  do
    {
      printf ("Enter the three sides of a triangle \n");
      scanf ("%d %d %d", &a, &b, &c);
      c1 = (a >= 1 && a <= 10);
      c2 = (b >= 1 && b <= 10);
      c3 = (c >= 1 && c <= 10);
      if (!c1)
	printf ("a is out of range \n");
      if (!c2)
	printf ("b is out of range \n");
      if (!c3)
	printf ("c is out of range \n");
    }
  while (!(c1 && c2 && c3));
  if ((a < b + c) && (b < c + a) && (c < a + b))
    {
      if ((a == b) && (b == c))
	printf ("Equilateral Triangle");
      else if ((a == b) || (b == c) || (c == a))
	printf ("Isosceles Triangle");
      else
	printf ("Scalene Triangle");
    }
  else
    {
      printf ("Triangle cannot be formed \n");
    }
}
