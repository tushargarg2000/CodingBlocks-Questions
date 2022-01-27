#include<bits/stdc++.h>
using namespace std;

bool isSafeToPut(int board[][9],int i,int j,int n,int no){

	for(int k=0;k<n;k++){ //columns

		if(board[k][j]==no)
			return false;
	}
	for(int k=0;k<n;k++)
		if(board[i][k]==no)
			return false;

	//int si = i - i%3;
	//int sj = j-j%3;
    
    int si = (i/3)*3;
    int sj = (j/3)*3;
	for(int k=si;k<si+3;k++){

		for(int l=sj;l<sj+3;l++){

			if(board[k][l]==no)
				return false;
		}
	}
	return true;
}
bool sudokuSolver(int board[][9],int i,int j,int n){

	//base case
	if(i==n){
    
        cout<<"hurrah"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;

		}
		return true;
	}
	
	//cout<<i<<" "<<j<<endl;

	if(j==n){
		return sudokuSolver(board,i+1,0,n);
	}

	if(board[i][j]!=0){
		return sudokuSolver(board,i,j+1,n);
	}
	////if board[i][j]==0

	//recursive case
	for(int num = 1;num<=n;num++){

			if(isSafeToPut(board,i,j,n,num)){
        
                cout<<i<<" "<<j<<endl;
				board[i][j] = num;

				bool kyaBaakiSolveHogya = sudokuSolver(board,i,j+1,n);
				if(kyaBaakiSolveHogya){
					return true;
				}
				board[i][j] = 0; 
			}
	}
	return false;	
}

int main(){
		
	int mat[9][9] =
	{ {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };

	bool ans = sudokuSolver(mat,0,0,9);
	
	cout<<ans<<endl;

	
}