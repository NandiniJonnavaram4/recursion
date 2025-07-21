#include<stdio.h>
int rec_fun_count(int num)
{
  static int i=0;
  static int r=0;
  if(num)
  {
    r=num%10;
    if(r<6)
    {
      i++;
    }
    rec_fun_count(num/10);
  }
  else
  {
    return i;
  }
}

int main()
{
  int num;
  printf("Enter number:\n");
  scanf("%d",&num);
  int count=rec_fun_count(num);
  printf("count=%d",count);
  return 0;
}
