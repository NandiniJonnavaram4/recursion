#include<stdio.h>
int main()
{
  static int i=0;
  printf("Hello..\n");
  i++;
  if(i<3)
  main();
  {
    printf("Hai...\n");
    printf("Hai...\n");
    printf("Hai...\n");
    printf("Hai...\n");

    return 0;
  }
}

