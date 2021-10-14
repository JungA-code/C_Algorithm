#include <stdio.h>


// 각 node가 연결된 정보를 표현 (2차원 list)
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};
_Bool visitied;

void dfs(int x){
    visitied[x] = true;
    printf("%d", x);
    for(int i = 0; i < graph[x];i++){
        if(!visitied[i]){
            dfs(i);
        }
    }
}


void main(){
    dfs(1);
}