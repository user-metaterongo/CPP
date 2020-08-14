#include <iostream>
#include <cmath>
using namespace std;

void m(const double (&a)[10], double &mean)
{

  double sum=0.0;
    for ( double i: a )
     {
         sum+= i;
     }
     cout << sum;
    mean = sum/10;
}
double stda (const double (&a)[10],double &mean)
{
    double sdeviation = 0.0;
    int i;

    for(i = 0; i < 10; ++i)
        sdeviation += pow(a[i] - mean, 2);

    return sqrt(sdeviation / 10);
}

int main()
{
    int i;
    double a[10],stdav,mean;

    cout << "10 numbers ";
    for(i = 0; i < 10; ++i)
        cin >> a[i];
    m(a,mean);
    stdav=stda(a,mean);
    cout << endl << "mean=" << mean << endl;
    cout <<"Standard deviation="<< stdav<< endl;
    return 0;
}

