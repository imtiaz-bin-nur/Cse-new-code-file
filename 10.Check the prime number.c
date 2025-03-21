#include <stdio.h >
int main()
{
int n, count=0,i;
printf ("Enter any number: ");
scanf ("%d", &n);
For (i=1;i<=n ;i++)
If(n%i ==0)
{
 count++;
}
If(count==2)
printf ("prime number");
else
printf  ("not prime");
return 0;
}
