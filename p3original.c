#include<stdio.h>
int input_number()
{
  int n;
  printf ("enter the value of n");
  scanf ("%d",&n);
  return n ;
}

int is_composite(int n)
{
  for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
    return 0;
    else 
    return 1;
  }
}

void output(int n , int is_composite)
{
  if(is_composite==0)
  printf ("%d is a composite number", n);
  else
  printf ("%d is not a composite number",n);
}

int main()
{
  int i, n ;
  n=input_number();
  i=is_composite(n);
  output(n,i);
  return 0;
}