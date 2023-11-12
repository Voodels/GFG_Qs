//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
        
        bool isRotated(string a, string b) {
        if (a.length() != b.length()) {
            return false;
        }

        int l = b.length();

        string clockwise = b.substr(2, l - 2) + b.substr(0, 2);
        string anticlockwise = b.substr(l - 2, 2) + b.substr(0, l - 2);

        return (a == clockwise || a == anticlockwise);
    }
};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends