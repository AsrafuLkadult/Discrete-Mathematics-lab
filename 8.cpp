#include<bits/stdc++.h>
using namespace std;
  float u_fact(float u ,float n)
  {   float sum=u;
     for(int i=1;i<n;i++)
       sum*=(u+i);
     return sum;
  }
  int fact(int n)
  {
    if(1>=n)return 1;

    return n*fact(n-1);

  }

int main()
{
 freopen("in.txt","r",stdin);
 //freopen("out.txt","w",stdout);
  int n,k=0;
  cout<<"how many recorded data : "<<endl;
  cin>>n;
  int y[n][n],x[n];

  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i][k];

  }
     for(int i=1;i<n;i++)
     {
        for(int j=n-1;j>=i;j--)

         y[j][i]=y[j][i-1]-y[j-1][i-1];
     }
     cout<<"\n________________________________________________________\n";
     cout<<"\n x[i]\ty[1]\ty[2]\ty[3]\ty[4]\ty[5]\ty[6]\ty[7]\ty[8]\n";
     cout<<"\n________________________________________________________\n";
      for(int i=0;i<n;i++)
     {

        cout<<x[i]<<"\t";
        for(int j=0;j<=i;j++)
        cout<<y[i][j]<<"\t";
    cout<<"\n";
    }

    float u,p,sum=y[n-1][0];
        cout<<"Enter the Finding the Value of p is :\n";
        cin>>p;
        u=(p-x[n-1])/(x[1]-x[0]);

      for(int i=1;i<n;i++)

       sum+= (y[n-1][i]*u_fact(u,i) )/fact(i);


   cout<<"The Value of U is :\t"<<u<<"\n"<<"The value of finding value f(7.5)  is : \t"<<sum<<endl;
}

