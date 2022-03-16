#include <stdio.h>
int input_n_and_r(int *n,int *r)
{
  printf("Enter n value\n");
  scanf("%d",n);
  printf("Enter r value\n");
  scanf("%d",r);
  return 0;
}

int ncr(int n,int r)
{ 
  int a=n-r;
  int a1=1, n1=1, r1=1;
  for(i=1;i<=a;i++)
    {
      a1=a1*i;
    }
  for(i=1;i<=n;i++)
    {
      n1=n1*i;
    }
  for(i=1;i<=r;i++)
    {
      r1=r1*i;
    }
  
  int result=n1/(r1*a1);
  return result;
}
void output(int n,int r,int result)
{
    printf("%d",result);
}

int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result); 
  return 0;
}