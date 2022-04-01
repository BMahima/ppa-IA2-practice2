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
int is_composite(int n,int a[n])
{
  int sum=0;
  for(int i=2;i<=n/2;i++)
    {
      if (n%i==0)
      {
        sum=sum+a[i];
      }
    }
  return sum;
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
  sum=is_composite(x,a);
  output(sum);
  return 0;
}
