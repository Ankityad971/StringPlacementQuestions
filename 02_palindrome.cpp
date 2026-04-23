#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.length();
    for (int i=0 ;i<n;i++){
       swap(s[i],s[n-i-1]);


    }
    cout <<s<<endl;
    return 0;
    
}
