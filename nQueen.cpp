//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Problem Statement-The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other.
#include <iostream>
#include <conio.h>
using namespace std;

bool lt[30]={0};
bool rt[30]={0};
bool col[30]={0};

int ans=0;
void nQueenWays(int i, int n, int Board[10][10]){
	// base case
	if(i==n){ 
		ans++;
//Print the board
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y <n ; y++)
			{
				cout<<Board[x][y]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}
//Recursion case
	//trying to place Queen in all possible position in current row.
	for (int c = 0; c < n; c++)
	{
		/* code */
		if(!col[c] && !lt[i-c+n-1] && !rt[i+c]){
			col[c]= lt[i-c+n-1]=rt[i+c]=Board[i][c]=1;
			nQueenWays(i+1, n, Board);

			//backtracking !
			Board[i][c]=0;
			col[c]=lt[i-c+n-1]=rt[i+c]=Board[i][c]=0;
		}
	}

}
int main(){
//Your code comes here.

	int n;
	cin>>n;
	int Board[10][10]={0};
	nQueenWays(0, n, Board);
	cout<< ans<<endl;
	getch();
	return 0;
}