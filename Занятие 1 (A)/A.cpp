#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a == 0 && b == 0){
		cout << "INF\n";
	}
	else if(a == 0 || b * c == a * d){
		cout << "NO\n";
	}
	else if(b % a == 0){
		cout << (-1 * b) / a;
	}
	else{
		cout << "NO\n";
	}
	return 0;
}
