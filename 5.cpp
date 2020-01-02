#include<bits/stdc++.h>
using namespace std;
#define E 0.01
double f(double x)
{
 return x*x-4*x-10;

}
int main()
{

	double a,b,c,fa,fb,fc;
	cout<<"Enter the guess value :";
	cin>>a>>b;

	int i=1;
	if (f(a) * f(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
	}
	cout<<"iter \ta\tf(a)\tb\tf(b)\tc\tf(c)\n";
	while (fabs(b-a)>= E)
	{
        c = (a+b)/2;
        fa=f(a);
	     fb=f(b);
	     fc=f(c);


		if (f(c) == 0.0){
		break;}
		else if (f(c)*f(a) < 0)

			 {b = c;}
		else
			{a = c;}

           i++;
            printf("%d\t%.2f\t%.2f\t%.2f\t%.4f\t%.2f\t%.2f\t\n",i,a,f(a),b,f(b),c,f(c));
	}
	cout << "The value of root is : " << c;

	return 0;
}
