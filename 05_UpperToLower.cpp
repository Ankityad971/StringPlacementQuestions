#include <iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
string ans='';

for (char ch : s){
ans+= ch+32;

}
cout <<ans<<endl;


}