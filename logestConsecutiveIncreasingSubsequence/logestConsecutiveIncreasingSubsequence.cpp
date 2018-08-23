/*
    In bruteforce approach find the all subsequence and check which is in increasing 
    and having maximum sum

*/
#include<bits/stdc++.h>
using namespace std;

int logestConsecutiveIncreasingSubsequence(int name[],int n){
    int ans[n];
    for(int i=0; i < n;i ++) ans[i] = 1;
    for(int i = 0; i<n;i++){
        for(int j=0;j<i;j++){
            if(name[j]+1 == name[i] || name[j]-1 == name[i])
                ans[i] = max(ans[i], ans[j]+1);
        }
    }
    for(int i =0 ;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    int maximum = 0;
    for(int i =0;i<n;i++){
        maximum = max(ans[i],maximum);
    }
    return maximum;
}


int main(){
    int  name[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<logestConsecutiveIncreasingSubsequence(name,size);
    cout<<endl;
}