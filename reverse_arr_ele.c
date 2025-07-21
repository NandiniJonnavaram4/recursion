#include<stdio.h>
void rec_fun_rev(int *p, int *q)
{
  static int temp=0;
  if(p<q)
  {
    temp=*p;
    *p=*q;
    *q=temp;
    rec_fun_rev(++p,--q);
  }
}

int main()
{
  int arr[5]={10,20,30,40,50};
  int ele=sizeof(arr)/sizeof(arr[0]);
  printf("Original Array:\n");
  for(int i=0;i<ele;i++)
  {
    printf("%d ",arr[i]); 
  }
  printf("\n");
  rec_fun_rev(arr,arr+ele-1);
  printf("Reversed array:\n");
  for(int i=0;i<ele;i++)
  {
    printf("%d",arr[i]);
  }
  printf("\n");
  return 0;
}

  
