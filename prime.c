#include<stdio.h>
int rec_fun_prime(int num)
{
  if(num<2)
    return 0;
  static int i=2;
  if(i<num)
  {
      if(num%i==0)
      {
          return 0;
      }
      i++;
      rec_fun_prime(num/10);
  }
else
{
  return 1;
}
}

  
int main()
{
  int num;
  printf("Enter the number:\n");
  scanf("%d",&num);
  int res=rec_fun_prime(num);
  if(res)
  {
    printf("Yes Prime:\n");
  }
 else
 {
  printf("Not a Prime:\n");
 }
return 0;
}
