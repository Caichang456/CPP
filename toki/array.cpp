#include <cstdio>
 
int bil, temp;
int arr[101];
 
int main ()
{
    temp = 0;
 
    while (scanf ("%d", &bil) != EOF)
    {
        temp += 1;
        arr[temp] = bil;
    }
 
    for (int i=temp; i>=1; i--)
    {
        printf ("%d\n", arr[i]);
    }
 
    return 0;
}
