#include<stdio.h>
int main()
{
  int array[10],i,sum=0;
  printf(" please input 10 numbers\n");
  for(i=0;i<=9;i++)
  {
    scanf("%d",&array[i]);
  }
  printf(" sum on array input:\n");
  printf("between 2 number:\n");
  for(i=0;i<=9;i++)
  {
sum=sum+array[i];
  printf(" %d\n",sum);
  }
printf("total sum= %d",sum);

  return 0;
}
