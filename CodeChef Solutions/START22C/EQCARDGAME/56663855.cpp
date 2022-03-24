#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	
	int t;
    std::cin >> t;
    for (int i=0;i<t; i++) {
        
        int n;
        cin>>n;
        
        int k;
        k= remainder(52, n);
        
        if (k<0){
            k=n+k;
        }
        cout<<k<<endl;
        
           
    }
	return 0;
}
