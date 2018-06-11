//8
#include<stdio.h>
 double f(double a[],int n)
 {
 	double max,min;
 	int i;
	 max=a[0];
	 min=a[0];
	 for(i=1;i<n;i++)
	{
	  if(a[i]>max)
	 max=a[i];
	 
	 if(a[i]<min)
	 min=a[i];
	}
	double sum;
	sum=0;
	for(i=0;i<n;i++)
	{
	sum+=a[i];
	}
	sum=sum-max-min;
	return sum/8;
}

int main(){
	int i,j;
	double a[10];
	printf("输入十个评委的打分:\n");
	for(i=0;i<10;i++)
	scanf("%lf",&(a[i]));
	printf("输出均分:\n");
	printf("%d",f(a,10)); 
}		
//7
#include<stdio.h>
 double f(int n)
 {
 	double
	  d=0;
 	int i;

 	for(i=1;i<=n;i++){
	 if(i%3==0||i%5==0)
	 d+=1/(double)i;
	}
	return d;
}

int main(){
	int  n;
	printf("输入n:\n");
	scanf("%d",&n);
	printf("%lf",f(n));
	
}		
//6
#include<stdio.h>

int main(){
	int  i;
	for(i=200;i<=500;i++)
	if(i%7==0||i%11==0)	
	printf("%d\n",i);
	
}		
//5 
#include<stdio.h>
void insert(int array[], int n, int new_value){
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
	if(new_value>array[i])
	{
		continue;
	}
	for(k=n;k>i;k--){
	array[k]=array[k-1];
	}
	array[i]=new_value;
	break;
}
}
int main(){
	int  i;
	int array[20]={1,3,4,5,6,7};
	insert(array,6,4);
	for(i=0;i<7;i++)
	printf("%d",array[i]);
	
}		