#include<iostream>
#include<string>
using namespace std;
bool ispallin(string s, int i){
    int n = s.length();
    if(i>=n/2)
        return true;
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return ispallin(s, i+1);

}
int main(){
    string s;
    cin>>s;
    int i=0;
    cout<<ispallin(s, i);
}