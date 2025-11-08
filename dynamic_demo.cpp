#include<iostream>
using namespace std;
int main()
{
   int length =0;
   int *Arr =  NULL;

   cout<<"enter the number of elements: /n";
   cin>>length;

   // step 1: allocate the memory 
   Arr =new int [length];      // Arr =(int *)malloc(length * sizeof(int))  // c
   
   if(Arr==NULL)
   {
    cout<<"unable to allocate the memory/n";
   }
   else
   {
    cout<<"memory gets successfully allocated/n";
   }

   //step 2: use the memory 
   // step 3 : deallocate the memory 

   delete[]Arr;     // in c programming free(Arr);
    return 0;
}