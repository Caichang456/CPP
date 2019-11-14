#include <cstdio>
 
int main()
{
  int n, batas;
 
  scanf ("%d", &n);
 
  batas = n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j < batas)
        printf (" ");
      else
        printf ("*");
    }
    printf ("\n");
    batas--;
  }
}
