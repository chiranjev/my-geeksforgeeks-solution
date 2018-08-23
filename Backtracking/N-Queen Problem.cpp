#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;
int flag = 0;
bool isSafe(int board[][15],int x,int y,int n){
    // check along colum
    for(int i=0;i<x;i++){
        if(board[i][y]==1){
            return false;
        }
    }
    //check along left upper diagonal
    int xx = x-1;
    int yy = y-1;
    while(xx>=0&&yy>=0){
        if(board[xx][yy]==1){
            return false;
        }
        xx--;
        yy--;
    }
    //check along right upper diagonal
    xx = x-1;
    yy = y+1;
    while(xx>=0&&yy<n){
        if(board[xx][yy]==1){
            return false;
        }
        xx--;
        yy++;
    }
    return true;

}

bool nqueen(int board[][15],int row,int n){
    if(row == n){
        // all queens placed
        flag = 1;
        cout << "[";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout << j+1 << " ";
                }
            }
        }
        cout << "] ";
        return false;
    }else{
        for(int i=0;i<n;i++){
            if(isSafe(board,row,i,n)){
                board[row][i]=1;
                if(nqueen(board,row+1,n)){
                    return true;
                }
                board[row][i]=0;
            }
        }
    }
    return false;
}

int main()
{
	int t=1;

 	cin >> t;

	while(t--){
        int n;
        cin >> n;
        flag = 0;
        int board[15][15]={0};
        nqueen(board,0,n);
        if(flag == 0){
            cout << "-1";
        }
        cout << endl;
	}


	return 0;
}
