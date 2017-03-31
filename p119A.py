import sys
sys.setrecursionlimit(10000)
n, a, b, c = map(int, raw_input().split(' '))
dp = [-1]*(n+1)
dp[0] = 0

def solve(len) :
	global a,b,c,dp
	if len < 0 :
		return -1000000
	if len == 0 :
		return 0
	
	if dp[len] != -1 :
		return dp[len]

	maxCount = -1000000
	maxCount = max(maxCount, solve(len-a)+1, solve(len-b)+1, solve(len-c)+1)
	dp[len] = maxCount
	return maxCount

print(solve(n))