#include <iostream>
using namespace std;
int main(){
string s;
getline(cin,s);

int w=1;

for (char ch : s){
    if (ch==' ') w++;

}
cout <<"words "<<w<<endl;

}