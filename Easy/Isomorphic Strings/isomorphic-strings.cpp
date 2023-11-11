//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        /*
        Input:
        str1 = aab
        str2 = xxy
        
        Output: 1
        
        */
        int n = str1.size();
        if(str2.length()!=n) return false;
        vector<int> char_a2z(26,-1);
        unordered_map<char,char> U_MP;
        for(int i= 0;i<n;i++){
            if(U_MP.find(str1[i])!=U_MP.end()){
                if(U_MP[str1[i]]!=str2[i]){
                    return false;
                }
            }
            else{
                if(char_a2z[str2[i]-'a']!= -1) return false;
                else{
                    U_MP[str1[i]]=str2[i];
                    char_a2z[str2[i]-'a']=1;
                }
            }
        }
        return true;
        
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends