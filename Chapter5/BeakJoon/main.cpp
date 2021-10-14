#include <bits/stdc++.h>

using namespace std;

int n, m;
int graph[1000, 1000];

bool dfs(int x, int y){
    if(x <= 1 || x >= n || y <= -1 || y >= m){
        return false;
    }

    if(graph[x][y] == 0){
        graph[x][y] = 1;
        dfs(x-1, y);
        dfs(x, y-1)
        dfs(x+1, y);
        dfs(x, y+1);
        return true;
    }
    return false;
}

int main(){
    cin >> n >> m;
    for()
}