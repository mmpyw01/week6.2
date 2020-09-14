#include<stdio.h>
int main()
{
	int hr, min, pay;
	printf("Enter time : ");
	scanf("%d", &hr);
	scanf("%d", &min);

	if (hr == 0 || min < 59 && hr == 1 || min == 0) {
		printf("FREE");
	}
	else {
		pay = hr * 30;
		printf("Pay %d Bath", pay);
	}
}