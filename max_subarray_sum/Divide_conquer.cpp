#include<bits/stdc++.h>
using namespace std;

int subarraysumMax(int name[],int start,int mid,int end){
    int maxLeft = INT_MIN,maxRight = INT_MIN;
    int sum = 0;
    for(int i = mid - 1; i >= start; i-- ){
        sum += name[i];
        maxLeft = max(sum,maxLeft);
    }
    sum = 0;
    for(int i = mid; i <= end; i++ ){
        sum += name[i];
        maxRight = max(sum,maxRight);
    }
    return maxLeft + maxRight;
}

int  subarraysumMaxUtil(int name[],int start,int end){
    if(start < end){
        int mid = (start + end)/2;
        return max(max(subarraysumMaxUtil(name,start,mid-1),subarraysumMaxUtil(name,mid+1,end)),
                subarraysumMax(name,start,mid,end));
    }
}

int main(){
    int  name[] = {21,-20,34,-23,23,-45};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<subarraysumMaxUtil(name,0,size-1);
    cout<<endl;
}