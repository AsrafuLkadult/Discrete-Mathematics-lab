
#include <bits/stdc++.h>
using namespace std;
int main()
{   int R1=0,R2=0;
    vector<int> A{1,2,3,4};
    pair<int, int> x;
    cout<<"Given set first relation is a divides b :\n"<<"R1 = "<<"{";
    for (int i=0;i<A.size();i++) {
        for (int j = 0; j < A.size(); j++) {
            if (A[j] % A[i] == 0) {
                R1++;
                x = make_pair(A[j], A[i]);
                cout<<"("<<x.first<<","<<x.second<<")"<<",";
            }

            }

    }
    cout<<"\b"<<"}"<<endl<<"The ordered of pairs in the relation is : "<<R1<<endl<<endl;

    cout<<"Given set first relation is a less than equal  b :\n"<<"R2 = "<<"{";
    for (int i=0;i<A.size();i++) {
        for (int j = 0; j < A.size(); j++) {
            if (A[i] <= A[j]) {
                R2++;
                x = make_pair(A[i], A[j]);
                cout<<"("<<x.first<<","<<x.second<<")"<<",";
            }

            }

    }
    cout<<"\b"<<"}"<<endl<<"The ordered of pairs in the relation is : "<<R2<<endl;

}
