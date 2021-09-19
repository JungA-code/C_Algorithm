/*
    어떠한 수  N이 1이 될때까지 다음의 두 과정을 반복할 수 있다. 
    단, 두번째 연산은 N이 K로 나누어질때만 선택이 가능하다. 
        - 1) N에서 1을 뺀다.    
        - 2) N을 K로 나눈다. 
    N과 K가 주어질 때 N이 1이 될 때까지 1번 혹은 2번의 과정을 수행하야하는 최소 갯수를 구해라. 
        
        example ) INPUT = 25 5, OUTPUT = 2
*/
#include <stdio.h>

    int cnt;

void main(){
    int n=25, k=4;

    while(1){
        if(n == 1){
            break;
        }else{
            if(n%k != 0){
                n = n-1;
                cnt++;
            }else{
                n = n/k;
                cnt++;
            }
        }
    }
    printf("%d cnt\n",cnt);

    return;
}
