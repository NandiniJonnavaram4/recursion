#include<stdio.h>
int rec_even_sum(int num)
{
  static int i=0;
  static int r=0;
  if(num)
  {
    r=num%10;
    if(r%2==0)
    {
      i=i+r;
    }
    rec_even_sum(num/10);
  }
else
{
return  i;
}
}

int main()
{
  int n;
  scanf("%d",&n);
  int sum=rec_even_sum(n);
  printf("sum=%d\n",sum);
  return 0;
}
