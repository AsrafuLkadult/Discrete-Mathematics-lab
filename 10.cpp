#include<bits/stdc++.h>
using namespace std;
float CALCULATION(float x[],float y[],int f,float value)
{
     float DP,REP=0;
  for(int i=1;i<=f;i++)
	 {
	   DP=1;
	   for(int j=1;j<=f;j++)
	   {
	      if(i!=j)
	      {
	        DP*=(value-x[j])/(x[i]-x[j]);
	      }
	      }

	      REP+= (DP*y[i]);
      }
return REP;
}

int main()
{
   // freopen("in.txt","r",stdin);
   int n,exp;
     cout<<"Enter number of data: ";
	 cin>>n;
	 float x[n],y[n],DP;
	 cout<<"Enter data:"<< endl;
	 for(int i=1;i<=n;i++)
	 {
		  cout<<"x["<< i<<"] = ";
		  cin>>x[i];
		  cout<<"y["<< i<<"] = ";
		  cin>>y[i];
	 }
	 cout<<"Enter the Finding value : ";
	 cin>>exp;
	 cout<<"The resulting value x[10] is : = "<<CALCULATION(x,y,n,exp)<<endl;





return 0; }
