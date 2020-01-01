#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x-4*x-10
#define E 0.0001
int main()
{

    double a,b,fa,fb,c,fc;
    int i=0;
    cout<<"Enter the initial guess for this function \n\n";
       cin>>a>>b;
       fa=f(a);
       fb=f(b);
       cout<<fa<<" "<<fb<<endl;
       cout<<fa*fb<<endl;

       if((fa*fb)>0)
       {

         cout<<"initial guess are  not suitable for function \n\n";
         exit(0);

       }

       cout<<"iter \ta\tf(a)\tb\tf(b)\tc\tf(c)\n";

         while(fabs( (b-a)/b)>E)
         {
           c=(a+b)/2;
            fc=f(c);
            i=i+1;
            cout<<i<<"\t"<<setprecision(2)<<a<<"\t"<<setprecision(3)<<fa
                <<"\t"<<setprecision(3)<<b<<"\t"<<setprecision(3)<<fb
                <<"\t"<<setprecision(3)<<c<<"\t"<<setprecision(3)<<fc<<endl;

            if((fa*fc)>0)
               a=c;
               else
               b=c;

               }
               cout<<"number of iteration is : "<<i<<endl;
               cout<<"the root for this fucntion : "<<c<<endl;
               return (0);

return 0;}
