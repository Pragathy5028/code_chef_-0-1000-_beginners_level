// Eikooc loves bread.
// She has N loaves of bread,
// all of which expire after exactly M days.
// She can eat upto K loaves of bread in a day.
// Can she eat all the loaves of bread before they expire?



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    if(m*k>=n){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
