// Chef went shopping and bought items worth X rupees (1≤X≤100).
// Unfortunately, Chef only has a single 100 rupees note.
// Since Chef is weak at maths,
// can you help Chef in calculating what money he should get back after paying 100 rupees for those items?


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<100-n<<endl;
    }
    return 0;
}