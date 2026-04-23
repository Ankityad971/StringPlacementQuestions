#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.length();
    int v=0,c=0;

    for (int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') v++;
        else c++;

    }
    cout << "vowels"<<v<<endl;
     cout << "consonants"<<c<<endl;

    return 0;
    
}
