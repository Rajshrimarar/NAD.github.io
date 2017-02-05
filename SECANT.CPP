#include<iostream.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
  return(x*x -x -1);
}
  void main()
  {
  clrscr();

   float a,b,m;

   cout<<"Enter value of a and b";
   cin>>a>>b;
   float fa=f(a);
   float fb=f(b);
	m=(a*fb-b*fa)/(fb-fa);
	float fm=f(m);
	if(fm>-0.0001 && fm<0.0001){
		cout<<"root is-:"<<m;
		getch();
	}
	else{

		while(fm<-0.0001 || fm>0.0001)
			{
				b=a;
				a=m;
				m=(a*f(b)-b*f(a))/(f(b)-f(a));
				fm=f(m);


			}

	}
   cout<<a<<b<<m<<f(m);
   cout<<"Root is"<<m;
   getch();
 }
