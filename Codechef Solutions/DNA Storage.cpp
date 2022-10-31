#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i+=2){
            if(s[i]=='0'){
                if(s[i+1]==s[i])
                   s[i]='A';
                else
                   s[i]='T';
            }
            else{
                if(s[i+1]==s[i])
                   s[i]='G';
                else
                   s[i]='C';
            }
        }
        for(int i=0;i<n;i+=2)
            cout<<s[i];
        cout<<endl;
    }
	return 0;
}
