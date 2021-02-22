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
        //if(i==0 || j==2)
        cout<<"*";
        //else
        cout<<(" ");
    } 
    cout<<"\n";
    }
    
    
	return 0;
}
