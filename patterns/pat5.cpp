#include <iostream>
using namespace std;

int main() {
	//code
	int r;
	int c;
	cin>>r;
	cin>>c;
	for(int i=0; i<r; i++)
    {
    for (int j=0; j<c; j++)
    {
        if(i+j==c-1)
        cout<<"*";
        else
        cout<<(" ");
    } 
    cout<<"\n";
    }
    
    
	return 0;
}
