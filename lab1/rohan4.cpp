#include <iostream>
#include<cmath>

#define MAX 10

double Mean(const double (&a)[MAX], double mean)
{
    double sum=0;
    mean=0;
    for(int i=0; i< 10; i++)
    {
        sum += a[i];
    }
    mean = sum/MAX;
    return mean;
}

double StandardDeviation(const double (&a)[MAX], double mean)
{
    double sd=0;
   for(int i=0; i< 10; i++)
    {
       sd += pow(a[i]-mean, 2);
    }

    return sqrt(sd/MAX);
}

int main()
{
    double a[MAX];
    std::cout << "Enter 10 numbers: " << std::endl;
    for(int i=0; i<10; i++)
    {
    	std::cout <<"Enter the element number " << i <<std::endl;
        std::cin >> a[i];
    }

    double mean = Mean(a,mean);
    std::cout << "MEAN = " << mean << std::endl;
    std::cout << "Standard Deviation = " << StandardDeviation(a,mean) << std::endl;

    return 0;
}