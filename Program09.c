#include <stdio.h>
int main () {
	int a, b;
	printf("Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	if (a<b){
		printf("The Smallest Number is %d",a);
	}
	else {
		printf("The Smallest Number is %d",b);
	}
	return 0;
}
