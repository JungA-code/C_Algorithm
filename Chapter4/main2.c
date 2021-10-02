/*
문제 2. 시각 
[완전 탐색 (Brute Forcing) 알고리즘]
정수 N이 입력되면 00시 00분 00초부터 N시 59분 59초까지의 시각중에서
3이 하나라도 포함되는 모든 경우의 수를 구하는 프로그램을 작성하세요

입력 예시 : 5
출력 에시  : 11475

*/
#include <stdio.h>
#include <stdbool.h>

// 시, 분, 초의 곱
int time = 24*60*60;
int hour;
long int cnt=0;

_Bool check(int hour, int min, int sec){
    if(hour % 10 ==  3|| hour / 10 == 3||  min / 10 == 3 || min % 10 == 3 || sec / 10 == 3 || sec % 10 == 3){
        return true;
    }
    return false;
}
void main(){
    scanf("%d", &hour);

    for(int i = 1; i <= hour; i++){
        for(int j = 0; j < 60; j++){
            for(int k = 0; k < 60; k++){
                if(check(i,j,k)) cnt++;
            }
        }
    }

    printf("%d시 %d분 %d초 : %ld 개\n", hour, 59, 59, cnt);
    return;
}