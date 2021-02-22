#include <iostream>
using namespace std;

int main() {
	//code
	
	for(int i=1; i<6; i++)
    {
    for (int j=1; j<6; j++)
    {
        if(j<=i)
        cout<<j;
        else
        cout<<("  ");
    } 
    for(int j=5;j>=1;j--)
    {
      if(j<=i)
        cout<<j;
      else
        cout<<"  ";
    } 
    cout<<"\n";
    }
    
    
	return 0;
}
