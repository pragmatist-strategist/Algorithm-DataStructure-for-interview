//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// A Maze is given as N*N binary matrix of blocks where source block is the upper left most block i.e., maze[0][0] and destination block is lower rightmost block i.e., maze[N-1][N-1].
// A rat starts from source and has to reach the destination. The rat can move only in two directions: forward and down.
// In the maze matrix, 0 means the block is a dead end and 1 means the block can be used in the path from source to destination. Note that this is a simple version of the typical Maze problem. 
//For example, a more complex version can be that the rat can move in 4 directions and a more complex version can be with a limited number of moves.
#include <iostream>
#include <conio.h>
using namespace std;
bool ratInMaze(char maze[10][10],int sol[][10],int i,int j,int m,int n){
	if(i==m && j==n){
		sol[i][j]=1;
		// Print the path available
		for (int x=0;x<=m ;x++)
		{
			for (int y = 0; y < n; y++)
			{
				cout<<sol[x][y]<<" ";
				/* code */
			}
			cout<<endl;
			return true;
		}
		cout<<endl;
			/* code */
	}
	if(i>m||j>n){
		return false;
	}
	if(maze[i][j]=='X'){
		return false;
	}
	//Assumption
	sol[i][j]=1;

	bool rightSuccess =ratInMaze(maze, sol, i+1,j,m,n);
	bool downSuccess=ratInMaze(maze, sol, i,j+1,m,n);

	sol[i][j]=0;
	if(rightSuccess||downSuccess){
		return true;
	}
	return false;
}

int main(){

	char maze[10][10]={"0000",
	"00X0",
	"000X",
	"0X00",
};
int soln[10][10]={0};
bool ans=ratInMaze(maze, soln,0,0,3,3);
if(ans==false){
	cout<<"Not possible since no such path exists ! ";
}
//Your code comes here.
getch();
return 0;
}