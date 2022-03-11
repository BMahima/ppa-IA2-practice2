#include <stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array: \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the elements of the array: \n");
  for (int i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
  int i;
  for(int i=1;i<n;i++)
    {
      if (n%i==0)
      {
      a[i]=a[i]+1;
      }
    }
  return a[i];
}
void output(int sum)
{
  printf("the sum of all the composite numbers is %d \n",sum);
}
int main()
{
  int x,sum;
  x=input_array_size();
  int a[x];
  input_array(x,a);
  sum=sum_composite_numbers(x,a);
  output(sum);
  return 0;
}
