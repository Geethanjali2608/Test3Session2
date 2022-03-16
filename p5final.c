#include<stdio.h>
int input_size()
{
  int n;
  printf("no. of inputs(n value):\n");
  scanf("%d",&n);
  return n;
}
void input_coefficients(int n,float a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("enter value:\n");
      scanf("%f",&a[i]);
    }
}
int find_largest(int n,float a[n])
{
int largest=a[0];
  for(int i=0;i<=n;i++)
    {
      if(a[i]>largest)
      {
        largest=a[i];
        int c=i;
      }
    }
 return largest;
}
void out_put(int n,float a[n], int largest)
{
  int c;
  printf(" largest is %d and its index is %d \n",largest,c+1);
}
int main()
{
  int n,largest;
  n=input_size();
  float a[n];
  input_coefficients(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}

