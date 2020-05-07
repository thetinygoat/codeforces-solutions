#include<bits/stdc++.h>

using namespace std;

string abbr(string s){
	int size = s.length();
	if(size <= 10){
		return s;
	}
	string ans = "";
	ans += s[0];
	ans += to_string(size - 2);
	ans += s[size-1];
	return ans;
}

int main(){
	
	int n;
	cin >> n;
	vector<string> v;
	while(n-- > 0){
		
		string s;
		cin >> s;
		v.push_back(abbr(s));
	}
	
	for(string s: v){
		cout << s << endl;
	}
		
	return 0;
}
