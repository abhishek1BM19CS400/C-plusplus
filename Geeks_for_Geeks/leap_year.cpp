// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int isLeap(int N){
        //code here
            //code here
    if((N%100) != 0 and (N%4)==0){
        //cout << "Its a leap year"<<endl;
        return 1;
    }else if((N%100) != 0 and (N%4) != 0){
       // cout<< "Its not a leap year"<<endl;
        return 0;
    }
    
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
