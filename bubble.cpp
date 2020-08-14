#include <iostream>
using namespace std;


void sort(int arr[],int n)
{
    int i,j,temp;
    for (i=0; i<n-1; i++)
    {
       for (j=0;j<n-i-1; j++)
       {
            if (arr[j]>arr[j+1])
            {
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
       }
    }
     
}




int main()
{
	int a[50],n,i;
	cout<<"Enter size" << endl;
	cin>>n;
	cout<< "Enter elements: " << endl;
	
	for(i=0;i<n;++i)
    {
		cin>>a[i];
    }
	sort ( a,n);
	cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
    {
		cout<<" "<<a[i];
    }
	return 0;

}