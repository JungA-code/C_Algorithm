/* 비트 연산을 통해 짝수, 홀수 판별하기 
    - 정수 N 값이 주어지면, bitwise 연산을 이용하여 홀수인지 짝수인지 검사하시오 
    - INPUT : N = 17
*/
#include <stdio.h>
#include <string.h>

int isEven(int n) {
    return (n & 1);
}

void main(){
    int n = 17;

    if(isEven(n) == 1){
        printf("EVEN\n");
    }else {
        printf("ODD\n");
    }

    return;
}