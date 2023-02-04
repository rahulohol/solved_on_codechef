#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0 && y>=(x+.5)){
	 y-=(x+.5);
	 
	}
	cout << fixed << setprecision(2) << y;
	return 0;
}
