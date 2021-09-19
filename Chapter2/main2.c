/*
   각 자리가 숫자(0부터 9)로만 이루어진 문자열 S가 주어졌을 때, 왼쪽부터 오른쪽으로 하나씩 모든 숫자를 확인하며 
   숫자 사이에 'x' 또는 '+' 연산자를 넣어 결과적으로 만들어질 수 있는 가장 큰 수를 구하는 프로그램을 쓰시오.
   단, +보다 x를 먼저 계산하는 일반적인 방식과 달리 모든 연산은 왼쪽에서부터 순서대로 이루어진다. 

   example) 02984라는 문자열로 만들 수 있는 가장 큰 수를 구해라 ! 
*/
#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
   scanf("%s", str);
   int reslut = str[0] - '0';

   for(int i = 1; i< strlen(str); i++){
       // 두 수중에서 하나라도 0이나 1이면 +로 실행
       int num = str[i] - '0';
       if(num == 1 || num == 0 || reslut == 0) {
           reslut += num;
        }else{
            reslut *= num;
        }
   }

   printf("%d\n", reslut);
}