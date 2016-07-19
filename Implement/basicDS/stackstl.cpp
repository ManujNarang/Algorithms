#include <iostream>
#include<stack> 


using namespace std;

int main() {
    
	stack<int> st1;
	int n;
	cin>> n;
	while(n--)
	{   
	    int val;
	    cin>>val;
	    st1.push(val);
	}
	
	cout<<st1.size()<<"\n";
	
	while(!st1.empty())
	{
	    cout<<st1.top()<<" ";
	    st1.pop();
	}
    return 0;
}
