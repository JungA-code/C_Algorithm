/*
문제 1. 상하좌우 
    여행가 A는 NxN 크기의 정사각형 공간 위에 서 있다. 
    이 공간은 1x1 크기의 정사각형으로 나누어져있다.
    가장 왼쪽 위 좌표는 (1, 1)이며, 가장 오른쪽 아래 좌표는 (N, N)에 해당합니다. 
    여행가는 A는 상,하,좌,우 방향으로 이동할 수 있으며, 시작 좌표는 항상 (1,1)입니다.
    우리 앞에는 A가 이동할 계획이 적힌 계획서가 놓여있습니다. 

    - 계획서에는 하나의 줄에 띄어쓰기를 기준으로 하여 L,R,U,D 중 하나의 문자가 반복적으로 적혀 있습니다.
        각 문자의 의미는 다음과 같다. 
        -> L : 왼쪽으로 한 칸 이동
        -> R : 오른쪽으로 한 칸 이동
        -> U : 위로 한 칸 이동
        -> D : 아래로 한 칸 이동
    
    - 이때 여행가 A가 NxN 크기의 정사각형 공간을 벗어나는 움직임은 무시된다. 예를들어 (1, 1)의 위치에서 
    L 혹은 U를 만나면 무시된다. 
*/
#include <stdio.h>
#include <string.h>

int n; 
int x=1,y=1;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};
char str[100];
char plans[100];

void main(){
    scanf("%d", &n);
    int count=0, cnt=0;
    scanf("%[^n]s", str);
    
    while(1) {
        count++;
        if(str[count] == '\n' || '\0') break;
        if(str[count] == ' ') continue;
        plans[cnt] = str[count];
        char plan = plans[cnt];
        int nx = -1, ny = -1;
        for(int j=0;j<4;j++){
            if(plan == moveTypes[j]){
                nx = x + dx[j];
                ny = y + dy[j];
            }
        } 

        if(nx < 1 || ny < 1 || nx > n || ny > n) continue;
        x=ny;
        y=ny;
        cnt++;
    }
    printf("%d %d \n",x,y);
    return;
}