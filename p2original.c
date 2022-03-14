#include<stdio.h>
int input_side()
{
  int n;
  printf("enter a sides of triangle\n");
  scanf("%d",&n);
  return n;
}
  int check_scalene(inta,intb,intc)
{
  if(a!=b&&a!=c&&b!=c)
  {
    return 1;
  }
   return 0;
}
void output(inta,intb,intc,int is scalene);
{
  if(is scalene==0)
  {
    printf("the triangle with sides %d,%d and %d scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d,%d and %d is not scalene\n",a,b,c);
  
  }
}

int main()
{
  int a,b,c, isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
  }