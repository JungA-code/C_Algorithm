/*
	created by "이정아"

	[문제 상황]
	손님이 1260원을 냈을 때 500,100,50,10 원만으로 거슬러줘야한다면 가장 적은 동전으로 줄 수 있는 방법은 ?
*/

#include <stdio.h>


void main(){
	int money = 1260;
    int cnt;
    int arr[4] = {500,100,50,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if((money / arr[i]) > 0){ 
            printf("거스름돈 : %d원, %d개\n", arr[i], money / arr[i]); 
            money = money % arr[i];
        }
    }
}