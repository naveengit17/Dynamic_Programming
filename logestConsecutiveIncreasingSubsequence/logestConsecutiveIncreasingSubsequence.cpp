/*
    In bruteforce approach find the all subsequence and check which is in increasing 
    and having maximum sum

*/
#include<bits/stdc++.h>
using namespace std;

int logestConsecutiveIncreasingSubsequence(int name[],int n){
    int maximum = 1;
    // sort the array and return maximum length of the substring having difference is 1
    sort(name,name+n);
    for(int i =0;i < n;i++){
        int sum = 1;
        int j;
        for(j = i+1;j<n && name[j-1] + 1 == name[j];j++) 
            sum++;
        i = j-1;
        maximum = max(maximum,sum);

    }
    return maximum;
}


int main(){
    int  name[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<logestConsecutiveIncreasingSubsequence(name,size);
    cout<<endl;
}