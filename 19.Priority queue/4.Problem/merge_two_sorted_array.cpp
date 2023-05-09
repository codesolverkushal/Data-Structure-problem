
#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int B[], int N, int M)
{

	
    int size = N+M;
	int ans[size];
	
	priority_queue<int, vector<int>, greater<int> > pq;

	
	for (int i = 0; i < N; i++)
	{
		pq.push(A[i]);
	}
	for (int i = 0; i < M; i++)
	{
		pq.push(B[i]);
	}
	
	int j = 0;

    while (!pq.empty())
	{
		ans[j] = pq.top();
		pq.pop();
		j++;
	}
	
	for (int i = 0; i < size; i++)
	{
		cout<<ans[i]<<" ";
	}
	


}
int main()
{

	
	int A[] = { 5, 6, 8 };
	int B[] = { 4, 7, 8 };

	int N = sizeof(A) / sizeof(A[0]);
	int M = sizeof(B) / sizeof(B[0]);


	merge(A, B, N, M);

	return 0;
}
