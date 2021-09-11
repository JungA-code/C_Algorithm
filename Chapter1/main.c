/*
	created by "이정아"

	[문제 상황]
	손님이 1260원을 냈을 때 500,100,50,10 원만으로 거슬러줘야한다면 가장 적은 동전으로 줄 수 있는 방법은 ?
*/
#include <stdio.h>


void main(){
	int money = 1260;
	int n_500, n_100, n_50, n_10;

	printf("money = %d\n", money);
	
	if((money / 500) > 0){
		n_500 = money / 500;
		money = money - (500 * n_500);
		printf("n_500 = %d\n", n_500);
	}

	if((money / 100) > 0){
		n_100 = money / 100;
		money = money - (100 * n_100);
		printf("n_100 = %d\n", n_100);
	}

	if((money / 50) > 0){
		n_50 = money / 50;
		money = money - (50 * n_50);
		printf("n_50 = %d\n", n_50);
	}

	if((money / 10) > 0){
		n_10 = money / 10;
		money = money - (10 * n_10);
		printf("n_10 = %d\n", n_10);
	}


	return;
	
}