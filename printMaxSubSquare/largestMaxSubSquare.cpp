/*
    
*/
#include<bits/stdc++.h>
using namespace std;

#define R 6
#define C 5
int printMaxSubMatrrixSquare(int M[R][C]){
   int sum = 0;
   for(int i =1;i<R;i++){
       for(int j = 1;j<C;j++){
           if(M[i][j]) M[i][j] = min(min(M[i][j-1],M[i-1][j]),M[i-1][j-1]) + 1;
          
       }
   }

    
   for(int i =0;i<R;i++){
       for(int j = 0; j<C ; j++){
           if(sum < M[i][j])
                sum = M[i][j];
       }
   }
   return sum;
}


int main(){
    int M[R][C] =  {{0, 1, 1, 0, 1}, 
                    {1, 1, 0, 1, 0}, 
                    {0, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 1},
                    {0, 0, 0, 0, 0}};
   
    cout<< printMaxSubMatrrixSquare(M)<<endl;
}