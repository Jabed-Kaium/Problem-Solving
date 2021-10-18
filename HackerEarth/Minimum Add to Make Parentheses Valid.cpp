#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack <char> s;
  string str;
  getline(cin,str);
  int size = str.length();
  for(int i=0; i<size; i++){
    if(str[i]=='('){
      s.push(str[i]);
    }
    else if(str[i]==')'){
      if(!s.empty() && s.top()=='('){
        s.pop();
        continue;
      }
        s.push(str[i]);
    }
  }
  cout<<s.size()<<endl;

  return 0;
}
