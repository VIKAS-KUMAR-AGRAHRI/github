#include<stdio.h>
#include<conio.h>
int selectionsort(int a[7],int i)
{
 int temp,j;
  if(i>7)
  {
    for(j=i+1;j<7;j++)
    {
      if(a[i]>a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
    i++;
    return selectionsort(a,i);
  }
/*  else
  {
   return a;
  }*/
}

 void main()
 {
  int a[7],*p,i;
  clrscr();
  printf("Enter the array value\n");
  for(i=0;i<7;i++)
  {
   scanf("%d",&a[i]);
  }
  //Before the sorting....
  printf("Before the sorting ..\n");
  for(i=0;i<7;i++)
  {
   pritnf("%d",a[i]);
  }
  printf("After the sorting apply....\n");
  p=selectionsort(a,i=0);
  for(i=0;i<7;i++)
  {
   pritnf("%d",p[i]);
  }
  getch();
 }