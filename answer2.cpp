#include <bits/stdc++.h>

using namespace std;
int fac(int n){
    if(n==1||n==0) return 1;
    return n*(fac(n-1));
    
    
    
}
int main(){
  int n;  cin>>n;
  string s=""; string s1;
  for(int i=0;i<n;i++) {  cin>>s1; s+=s1;    }
  string q=s; int j;
   s.sort();
    int c=0;
    for(int i=0;i<s.size();i++){
    for( j=0;j<n;j++){
      if(q[i]==s[j]) {s[j]='z';   break;}
    }
    c+=fac(j);
    }
    return 0;
        
    
}



