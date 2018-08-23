/*
    In bruteforce approach find the all subsequence and check which is in increasing 
    and having maximum sum

*/
#include<bits/stdc++.h>
using namespace std;

#define N 1000000

int logestConsecutiveIncreasingSubsequence(int name[],int n){
    int maximum = 1;
    // sort the array and return maximum length of the substring having difference is 1
    int hash[N]={0};
    for(int i =0 ;i<n;i++){
        hash[name[i]]++;
    }
    int sum = 1;
    for(int i =1;i<N;i++){
        if(hash[i] == hash[i-1]  && hash[i-1] == 1){
            sum++;
        }
        else{
            maximum = max(maximum,sum);
            sum = 1;
        }
    }
    return maximum;
}


int main(){
    int  name[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<logestConsecutiveIncreasingSubsequence(name,size);
    cout<<endl;
}

// time comlexity o(N)