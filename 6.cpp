
#include<bits/stdc++.h>
using namespace std;
#define E 0.0001
 double f(double x)
 {
   return x*x-x-2;
 }
int main()
{

    double a,b,fa,fb,c,fc;
    int i=0;
    cout<<"Enter the initial guess for this function \n\n";
       cin>>a>>b;
          fa=f(a);
           fb=f(b);
       if((fa*fb)>0)
       {

         cout<<"initial guess are  not suitable for function \n\n";
         exit(0);

       }

       cout<<"iter \ta\tf(a)\tb\tf(b)\tc\tf(c)\n";

         while(fabs(b-a)>=E)
         {
           c=(a*fb-b*fa)/(fb-fa);
            fc=f(c);
            i=i+1;
          printf("%d\t%.2f\t%.2f\t%.2f\t%.4f\t%.2f\t%.2f\t\n",i,a,f(a),b,f(b),c,f(c));


            if((fa*fc)>0)
               a=c;
               else
               b=c;

               }
               cout<<"number of iteration is : "<<i<<endl;
               cout<<"the root for this fucntion : "<<ceil(c)<<endl;
               return (0);


return 0;}


