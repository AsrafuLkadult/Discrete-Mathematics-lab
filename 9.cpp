 #include<bits/stdc++.h>
 using namespace std;
  float PT(int f, float value, float x[])
{
    float PUSH=1;
      for (int i=0;i<f;i++){
            PUSH*=(value-x[i]);}
            return PUSH;

}
 int main()
 {

  freopen("in.txt","r",stdin);
 //freopen("out.txt","w",stdout);
  int n,k=0;
  cout<<"how many recorded data : "<<endl;
  cin>>n;
  float y[n][n],x[n];

  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i][k];

  }
    //Table for
  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++)
           y[j][i]=( y[j][i-1]-y[j+1][i-1])/(x[j]-x[i+j]);
           }
   //dispaly showing

      for (int i = 0; i < n; i++) {
             cout<<setw(4)<<x[i]
             <<"\t";
        for (int j = 0; j < n - i; j++)
            cout << setw(4) << y[i][j]
                 << "\t";
        cout << endl;
    }

      //applying formula

       float sum,p;
       sum = y[0][0];
          cout<<"Enter the finding value : =\n";
           cin>>p;
           for(int i=1;i<n;i++){

               sum+= (PT(i,p,x)*y[0][i]);
               }

    cout<<"Finding value for f(15) is : "<<sum<<endl;


  }
