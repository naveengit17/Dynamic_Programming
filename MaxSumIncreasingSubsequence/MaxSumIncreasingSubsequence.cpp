/*
    In bruteforce approach find the all subsequence and check which is in increasing 
    and having maximum sum

*/
#include<bits/stdc++.h>
using namespace std;

int MaxSumIncreasingSubsequence(int name[],int n){
    int ans[n];
    for(int i=0; i < n;i ++) ans[i] = name[i];
    for(int i = 0; i<n;i++){
        for(int j=0;j<i;j++){
            if(name[j] < name[i] && ans[j] + name[i] > ans[i])
                ans[i] = ans[j] + name[i];
        }
    }
    int maximum = 0;
    for(int i =0;i<n;i++){
        maximum = max(ans[i],maximum);
    }
    return maximum;
}


int main(){
    int  name[] = {21,-20,34,-23,23,-45};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<MaxSumIncreasingSubsequence(name,size);
    cout<<endl;
}