/*
        문자열 압축 문제 

        Run Length Encoding 
        압축 기법 : 문자열의 특정 패턴이 반복될 경우, 이를 이용하여 문자열을 좀더 짧게 나타내는 기법
        RLE : 가장 기초적인 압축 방식으로 문자와 반복횟수를 저장하느 방식
        예시 ))
        입력 : abbcccdddd, 출력 : 1a2b3c4d

        압축할 문자열 5개가 매개변수로 주어질 때, 1개 이상 문자열을 잘라 압축하여 
        표현한 문자열 중 가장 짧은 것의 길이를 구하시오. 
        문자열은 제일 앞부터 정해진 길이만큼 잘라야한다.
        INPUT => aabbaccc OUTPUT => 7
        INPUT => ababcdcdababcdcd OUTPUT => 9
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    int count = 0;
    char arr[255];
    scanf("%s", arr);
    len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        count++;
        if (arr[i] != arr[i + 1])
        {
            printf("%c%d", arr[i], count);
            count = 0;
        }
    }

}