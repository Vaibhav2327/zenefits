#include <bits/stdc++.h>
using namespace std;

int iot(string s){
string s1,s2,s3=""; s1=s[1];
int k=3; 
while(s[k]!=','){
    s2+=s[k];
    k++;
}
k++;
while(k<s.size()-1){
    s3+=s[k];
    k++;
}
if(s2.size()==1&&s2!="0") cout<<s2<<",";
else iot(s2);
cout<<s1<<",";
if(s3.size()==1&&s2!="0") cout<<s2<<",";
else iot(s3);
return 0;
}



int main() {
 int n; cin>>n;   
for(int i=0;i<n;i++) {  
string s; cin>>s;
iot(s);
}
}



