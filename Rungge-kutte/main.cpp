#include <QCoreApplication>
#include <iostream>
using namespace std;

double func(double x,double y)
{
    return x*x-2*y;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double y0=0,x=0,y=0,h=0.1,k1,k2,k3,k4;
    for(double i=0;i<=20;i+=h)
    {
        k1=func(i,y0);
        k2=func(i+h/2,y0+h*k1/2);
        k3=func(i+h/2,y0+h*k2/2);
        k4=func(i+h,y0+h*k3);
        y0=y0+h/6*(k1+2*k2+2*k3+k4);
    }

   std::cout<<y0;


    return a.exec();
}
