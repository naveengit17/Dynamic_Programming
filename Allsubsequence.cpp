#include<iostream>
using namespace std;

void printsubsequene(string name,int index,int n,string str =""){
    cout<<str<<" ";
    for(int i = index; i< n;i++){
        str += name[i];
        printsubsequene(name,i+1,n,str);
        str = str.erase(str.length() -1);
    }
}

int main(){
    string name = "nave";
    printsubsequene(name,0,name.length());
    cout<<endl;
}