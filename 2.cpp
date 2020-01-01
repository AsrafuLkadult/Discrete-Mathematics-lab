#include <bits/stdc++.h>
using namespace std;
int main()
{   int R1=0,R2=0;
    vector<int>A{1,2,3},B{1,2};
    int mat[A.size()][B.size()];
    pair<int, int> x;
    cout<<"Given set first relation is a divides b :\n"<<"R1 = "<<"{";
    for (int i=0;i<A.size();i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] > B[j]) {
                R1++;
                x = make_pair(A[i], B[j]);
                cout<<"("<<x.first<<","<<x.second<<")"<<",";
            }

            }
    }
    cout<<"\b"<<"}"<<endl<<"The ordered of pairs in the relation is : "<<R1<<endl<<endl;
    cout<<"This relation matrix form  3 cross 2 dimension matrix \n"<<"R= ["<<endl;

    for (int i=0;i<A.size();i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] > B[j]) {
                mat[i][j]=1;
                }
                else
                    mat[i][j]=0;
                }
                }
                 for (int i=0;i<A.size();i++) {
        for (int j = 0; j < B.size(); j++)
        {
            cout<<" "<<mat[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"]";
    return 0;
    }
