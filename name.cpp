#include<iostream>
using namespace std;
void printname(string name, int i){
    if(i==5)
        return;
    cout<<name<<endl;
    printname(name, i+1);
}
int main(){
    string name;
    int n = 0;
    cin>>name;
    printname(name, n);
}