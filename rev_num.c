#include<stdio.h>
int rev_number(int num)
{
  static int rev=0;
  if(num)
  {
      rev=rev*10+num%10;
      rev_number(num/10);
  }
  else
  {
    return rev;
  }
}
int main()
{
  int num;
  printf("Enter number:\n");
  scanf("%d",&num);
  int res=rev_number(num);
  printf("Reverse number is %d\n",res);
  return 0;
}
