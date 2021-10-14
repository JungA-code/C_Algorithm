/*
    BFS : 너비 우선 탐색이라고도 부르며, 그래프에서 가까운 노드부터 우선적으로 탐색하는 알고리즘
            큐 자료구조를 이용하며, 다음과 같은 처리를 한다. 
            1) 탐색 시작 노드를 큐에 삽입하고 방문처리를 함
            2) 큐에서 노드를 꺼낸 뒤에 해당 노드의 인접 노드붕에서 방문하지 않은 노드를 모두 큐에 삽입하고 방문처리함 
            3) 더 이상 2번의 과정을 수행할 수 없을 때까지 반복
*/
#include <stdio.h>


// 각 node가 연결된 정보를 표현 (2차원 list)
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};


void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty){
        int x = q.fornt();
        q.pop();
        cout << x << ' ';
        for(int node : graph[x]){
            if(!visited[node]){
                q.push(node);
                visited[node] = true;
            }
        }

    }
}

void main(){
    bfs(1);
    return;
}