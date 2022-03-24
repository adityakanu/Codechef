#include <iostream>

using namespace std;

int main() {
    
    int t;
    std::cin >> t;
    for (int i=0;i<t; i++) {
        
        int A;
        int B;
        int C;
        cin>>A>>B>>C;
        
        if (A>B && A>C && A>50){
            cout<<"A"<<endl;
        }
        else if (B>A && B>C && B>50){
            cout<<"B"<<endl;
        }
        else if (C>A && C>B && C>50){
            cout<<"C"<<endl;
        }
        else cout<<"NOTA"<<endl;
    }
  
	return 0;
}
