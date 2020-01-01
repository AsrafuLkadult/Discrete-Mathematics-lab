#include<bits/stdc++.h>
using namespace std;
  float u_fact(float u ,float n)
  {   float sum=u;
     for(int i=1;i<n;i++)
       sum*=(u-i);
     return sum;
  }
  int fact(int n)
  {
    if(1>=n)return 1;

    return n*fact(n-1);

  }

int main()
{ freopen("in.txt","r",stdin);
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
      for(int j=0;j<n-i;j++)
      {

        y[j][i]= y[j+1][i-1]-y[j][i-1];

      }

   }
       cout<<"\n_____________________________________________\n";
       cout<<"x(i)\t y(i)\ty(2)\ty(3)\ty(4)\ty(5) \n";
        cout<<"\n_____________________________________________\n";
  for (int i = 0; i < n; i++) {
        cout << setw(4) << x[i]<< "\t";
        for (int j = 0; j < n - i; j++)
            cout<<setw(4)<< y[i][j]<< "\t";
        cout << endl;
    }
       float u,sum=y[0][0],p;


          cout<<"Enter finding value :\n";
          cin>>p;

           u=( (p-x[0])/(x[1]-x[0]) );

           for(int i=1;i<n;i++){

                sum+= (u_fact(u,i)*y[0][i])/fact(i);
                }

             cout<<"the value of find u is :\t"<<u<<"\t"<<"\n"<<"find value for p is : ";
                 cout<<sum<<endl;

}
