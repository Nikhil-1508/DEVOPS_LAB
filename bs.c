#include<stdio.h>
int main()
{
	int i,n,value;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values:\n");
	for(i=0;i<n;i++){
		scanf("%d",a[i]);
	}
	printf("Enter the value:\n");
	scanf("%d",&value);
	for(int i=0;i<n;i++){
		if(a[i]==value){
			printf("Key value %d found at %d position\n",value,i);
			exit(0);
		}
	}
	print("Key value %d not found \n",value);
	return 0;
}
