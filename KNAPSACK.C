#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,object[7]={1,2,3,4,5,6,7};
  float profit[7]={5,10,15,7,8,9,4};
  float weight[7]={1,3,5,4,1,3,1};
  float ratiop[7]={5,3.3,3,1.75,8,3,4},temp=0;
  int bagsize=17,sums=0;
  
  printf("object\tprofit\tweight\tprofit\n");
  for(i=0;i<7;i++)
    printf("%d\t%.1f\t%.1f\t%.1f\n",object[i],profit[i],weight[i],ratiop[i]);
  for(i=0;i<7;i++)
  {
    for(j=i+1;j<7;j++)
    {
      if(ratiop[i]<ratiop[j])
      {
	temp=ratiop[i];
	ratiop[i]=ratiop[j];
	ratiop[j]=temp;

	//for swap of weight value..
	temp=weight[i];
	weight[i]=weight[j];
	weight[j]=temp;

	//for swap of profit value..
	temp=profit[i];
	profit[i]=profit[j];
	profit[j]=temp;
	//for object swaping ........
	temp=object[i];
	object[i]=object[j];
	object[j]=temp;
      }
    }
  }
printf("\nobject\tprofit\tweight\tprofit\n");
  for(i=0;i<7;i++)
    printf("%d\t%.1f\t%.1f\t%.1f\n",object[i],profit[i],weight[i],ratiop[i]);
//taking object according to profit............
for(i=0;i<7;i++)
{
    
        if (bagsize<weight[i])
        {
            sums=sums+ratiop[i]*bagsize;
            break;
            
        }
        printf("totalbag %d",bagsize);
        bagsize=bagsize-weight[i];
        sums=sums+profit[i];

    
}
printf("total profit=%d bagsize-weight=%d ",sums,bagsize);


  return 0;


}