#include<bits/stdc++.h>
using namespace std;

int  subarraysumMax(int name[],int n){
    int max = INT_MIN;
    for(int i = 0; i< n;i++){
        int sum = name[i];
        for(int j = i+1;j<n;j++){
        sum += name[j];
        max = (max > sum) ? max : sum;
        }
    }
    return max;
}

int main(){
    int  name[] = {21,-20,34,-23,23,-45};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<subarraysumMax(name,size);
    cout<<endl;
}