#include <iostream>

using namespace std;

void swapping(int b[], int i, int j){
int temp=b[i];
b[i]=b[j];
b[j]=temp;
}

void printArray(int b[], int a)
{
    cout<<"The array is"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

void SSort(int b[],int a)
{
    int x=0,min1=0;
    for(int i=0; i<a; i++)
    {
        min1=b[i];
        x=i;
        for(int j=i+1; j<a; j++)
        {
            if(min1>b[j])
            {
                min1=b[j];
                x=j;
            }
        }
        swapping(b,i,x);
    }

}

int main()
{
    cout<<"Enter the size of array you want";
    cout<<endl;
    int a;
    cin>>a;
    cout<<"Enter the element in the array"<<endl;
    int b[a];
    for(int i=0; i<a; i++)
    {
        cout<<"Enter the element for index : "<<i<<endl;
        cin>>b[i];
    }

    printArray(b,a);
    SSort(b,a);
    printArray(b,a);
}
