#include <bits/stdc++.h>

using namespace std;

int main(){
	// ( ax + b ) : ( cx + d ) = 0 -> ax + b = 0 and cx + d != 0

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a == 0 && b == 0){
		cout << "INF\n";
	}
	else if(a == 0 || b * c == a * d){ // a / b = c / d -> a * d = b * c (по свойству пропорции)
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
