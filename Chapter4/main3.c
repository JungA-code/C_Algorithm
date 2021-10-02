/*
문제3. 왕실의 나이트
행복 왕국의 왕실 정원은 체스판과 같은 8 × 8 좌표 평면이다. 왕실 정원의 특정한 한 칸에 나이트가 서있다.
나이트는 매우 충성스러운 신하로서 매일 무술을 연마한다
나이트는 말을 타고 있기 때문에 이동을 할 때는 L자 형태로만 이동할 수 있으며 정원 밖으로는 나갈 수 없다
나이트는 특정 위치에서 다음과 같은 2가지 경우로 이동할 수 있다

수평으로 두 칸 이동한 뒤에 수직으로 한 칸 이동하기
수직으로 두 칸 이동한 뒤에 수평으로 한 칸 이동하기
이처럼 8 × 8 좌표 평면상에서 나이트의 위치가 주어졌을 때 나이트가 이동할 수 있는 경우의 수를 출력하는
프로그램을 작성하라. 왕실의 정원에서 행 위치를 표현할 때는 1부터 8로 표현하며, 열 위치를 표현할 때는
a 부터 h로 표현한다

c2에 있을 때 이동할 수 있는 경우의 수는 6가지이다
a1에 있을 때 이동할 수 있는 경우의 수는 2가지이다

출력
첫째 줄에 나이트가 이동할 수 있는 경우의 수를 출력하시오.

입력 예시
a1

출력 예시
2
*/
#include<stdio.h>
#include<stdlib.h>

int chess[13][13] = {0, };
int move1[8] = {-2, -1, 1, 2, 2, 1, -1, -2}; //수평
int move2[8] = {-1, -2, -2, -1, 1 , 2 , 2 ,1}; //수직
int i,j;
char inputuser[3] = {0, }; 
char user1[2] = {0, };
int user2[2] = {0, };
int user1changed[1] = {0,};
int user2changed[1] = {0,};
int count;
int num99change();
int changeinputuser1();
int changeinputuser2();
int counting();

void main(){
    scanf("%s", inputuser);
    num99change();
    changeinputuser1();
    changeinputuser2();
    counting();
    printf("%c %d\n", user1[0], user2changed[0]);
    printf("%d %d\n", user1changed[0], user2changed[0]);

    printf("%d", count);
    return;
}

int num99change(){
    for(i = 1; i <9;i++)
        for(j=1;j<9;j++) chess[i][j] = 9;
    for(i=1; i<12; i++){
        for(j=1;j<12;j++)
            printf("%d", chess[i][j]);
        printf("\n");
    }
}

int changeinputuser1(){
    for(i=0;i<2;i++){
        if(i == 0){
            user1[i] = inputuser[i];
        }
        if(i==1){
            user2[i-1] = inputuser[i];
        }
    }
    user2changed[0] = atoi(user2);
    printf("\n");
}

int changeinputuser2(){
    if(user1[0] == 'a') user1changed[0] = 1;
    else if(user1[0] == 'b') user1changed[0] = 2;
    else if(user1[0] == 'c') user1changed[0] =  3 ;
    else if(user1[0] == 'd') user1changed[0] =  4 ;
    else if(user1[0] == 'e') user1changed[0] =  5 ;
    else if(user1[0] == 'f') user1changed[0] =  6 ;
    else if(user1[0] == 'g') user1changed[0] =  7;
    else if(user1[0] == 'h') user1changed[0] =  8 ;

}

int counting(){
    count = 0;
    for(i=0;i<8;i++){
        if(chess[user1changed[0] + move1[i] -1][user2changed[0] + move2[i] - 1] == 9) count++;
        else if(chess[user1changed[0] + move1[i] - 1][user2changed[0] + move2 - 1] != 9) continue;
    }
}