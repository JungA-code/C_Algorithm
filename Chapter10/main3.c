/**
    가장 오른쪽의 0의 값의 비트를 1로 바꾼 값 찾기
    양의 정수에 대해 가장 오른쪽 0값의 비트를 1로 바꾼다. 만약 그런 0값이 없으면 원래 점수를 반환한다. 
    ex ) INPUT 6 -> 1100
         OUTPUT ===> 1101
*/
#include <stdio.h>
#include <math.h>

int getPostOfRightmostSetBit(int n){
    return log2(~n&(n+1)) + 1;
}

int setRightmostUnsetBit(int n){
    if(n == 0){ return 1; }
    
    if((n & (n+1)) == 0){ return n; }

    int pos = getPostOfRightmostSetBit(n);
    return ((1 << (pos -1)) | n);
}

void main(){

    int n = 21;
    printf("%d\n", setRightmostUnsetBit(n));
    
    return; 
}