#include<stdio.h>
void main(){
	int num,r,count = 0;
	printf("\n Enter any number: ");
	scanf("%d",&num);
	while(num>0){
		r = num % 10;
		count++;
		num/=10;
	}
	printf("\n There are %d number of digit in that number.",count);
}
