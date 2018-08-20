#include<bits/stdc++.h>
using namespace std;



int  kadane(int name[],int n){
    int sum =INT_MIN;
    int sumUpto = 0;
    for(int i =0 ;i< n ;i++){
        sumUpto+= name[i];
        if(sumUpto < 0) sumUpto = 0;
        sum = max( sum , sumUpto);
    }
    return sum;
}

int main(){
    int  name[] = {21,-20,34,-23,23,-45};
    int size = sizeof(name)/sizeof(name[0]);
    cout<<kadane(name,size);
    cout<<endl;
}