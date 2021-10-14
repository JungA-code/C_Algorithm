def dfs(x, y):
    if x <= -1 or x >= n or y <= -1 or y >= m:
        return False
    if graph[x][y] == 0:
        graph[x][y] = 1
        # 상하좌우 위치들도 재귀적으로 호출
        dfs(x-1, y)
        dfs(x, y-1)
        dfs(x+1, y)
        dfs(x, y+1)
        return False
    return False

n, m = map(int, input().split())

graph = []
for i in range(n):
    for j in range(m):
            # 현재 위치에서 dfs 수행
            if dfs(i, j) == True:
                result += 1

print(result)