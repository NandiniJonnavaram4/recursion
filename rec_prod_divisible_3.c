#include<stdio.h>
int rev_prod(int num)
{
  static int r=0,p=1;
  if(num)
  {
    r=num%10;
    if(r%3==0)
    {
      p=p*r;
    }
    rev_prod(num/10);
  }
else
{
  return p;
}
}


int main()
{
  int n;
  printf("Enter n:\n");
  scanf("%d",&n);
  printf("Product=%d\n",rev_prod);
}
