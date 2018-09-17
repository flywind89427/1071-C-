#include<stdio.h>

int main(){
	float C ,F;
	printf("Enter the tempture F:");
    scanf("%f",&F);
		C = (F-32)*5/9 ;
	printf("%.1f F = %.1f C", F,C);
}
