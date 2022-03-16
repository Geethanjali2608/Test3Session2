#include<stdio.h>
#include<math.h>
int input_degree()
{
  int n;
  printf("enter degree:\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter value of x:\n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  for(int i=1;i<=n+1;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  int result=0;
  for(int i=1;i<=n+1;i++)
    {
      for(int n=x;n>0;n--)
        {
           result=result+a[i]*pow(x,n);
          break;
        }  
    }
  return result;
}
void out_put(int n,float a[n],float x,float result)
{
  printf("%f\n",result);
}
int main()
{
  int n;
  float x;
  n=input_degree();
  x=input_x();
  float a[n],result;
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  out_put(n,a,x,result);
}

