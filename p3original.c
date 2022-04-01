#include <stdio.h>
int input_number()
{
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int composite=0;
  for(int i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      composite =composite + 1;
    }
  }
  return composite;
} 
void output(int n,int composite)
{
  if(composite>1)
  {
    printf("%d is a composite",n);
  }
  else {
    printf("%d is not a composite",n);
  }
} 
int main()
{
  int n,a;
  n=input_number();
  a=is_composite(n);
  output( n, a);
  return 0;
}