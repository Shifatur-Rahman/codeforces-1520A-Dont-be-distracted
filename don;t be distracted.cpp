#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){


int t, n, i, j, count;
string s;
cin>>t;
while(t--){
	cin>>n;
	cin>>s;

	unordered_map<char,int>temp;

	count = 1;

	for(i=0; i<n; i++){

        temp[s[i]]++;

        if(temp[s[i]]>1 && s[i-1]!=s[i]){
			count=0;
			break;
        }

	}
	if(count) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}




}
