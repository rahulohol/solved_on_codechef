#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n>>a>>b;
	int newRating=n-a;
	int highRating=n-(a+b);
	cout<<newRating<<" "<<highRating<<endl;
	
	return 0;
}
