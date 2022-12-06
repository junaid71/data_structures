# include<stdio.h>
int main()
{
	int num[5],i;
	printf( " Enter elements of array you want to print \n");
	for ( i= 0; i<5;i++){
		scanf("%d",&num[i]);}
		printf( " your printed Elements are \n ");
		for ( i= 0; i<5;i++){
			printf("%d\n",num[i]);}
		return 0;}
