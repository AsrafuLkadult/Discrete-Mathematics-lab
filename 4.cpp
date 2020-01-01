
#include <bits/stdc++.h>
#define N 3
#define M 3
using namespace std;
void Intersection(int A[][N], int B[][N])
{
    cout<<"Matrix M(R1) and M(R2) relation of M(R1 intersection R2) is : \n"<<"MR1 intersection MR2 = "<<endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {

			if (A[i][j] == B[i][j]){
			   cout<<"\t1"<<" ";
                 			}
             else
             {
               cout<<"\t0"<<" ";

             }

		}
		cout<<endl;


		}

}
void unionn(int A[][N], int B[][N])
{        cout<<"Matrix M(R1) and M(R2) relation of M(R1 union R2) is : \n"<<"MR1 union MR2 = "<<endl;;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {

			if ( ( A[i][j]==1 && B[i][j]==1 ) || A[i][j]==1 || B[i][j]==1){
				cout << "\t1"<< " ";}
			else
				cout << "\t0"<<" ";
		}

		cout << "\n";
	}
}


int main()
{
	int A[M][N] = { { 1, 0, 1 },
					{ 1, 0, 0 },
					{ 0, 1, 0 }
					};
	int B[M][N] = { { 1, 0, 1 },
					{ 0, 1, 1 },
					{ 1, 0, 0 }
                    };

	Intersection(A, B);
	cout<<endl;
	unionn(A,B);

	return 0;
}

