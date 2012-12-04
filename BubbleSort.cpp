#include <iostream>
#include <string.h>

using namespace std;

void BubbleSort(int* pData,int Count)
{
    int iTemp;
    for(int i=1;i<Count;i++)
    {

      for(int i=0;i<Count;i++)	  //print out the data array to see its change history
      	cout << pData[i] << " ";
      cout << endl;

      for(int j=Count-1;j>=i;j--) //select the biggest one from [i, Count-1]
      {
        if(pData[j]<pData[j-1])
        {
          iTemp = pData[j-1];
          pData[j-1] = pData[j];
          pData[j] = iTemp;
        }
      }
    }
}

int main()
{
    int data[] = {10,9,8,7,6,5,4};
    int sz = sizeof(data)/sizeof(*data);
    BubbleSort(data,sz);
    for (int i=0;i<sz;i++)
      cout << data[i] << " ";
    cout << "\n";
}

/* 
$ ./BubbleSort
10 9 8 7 6 5 4 
4 10 9 8 7 6 5 
4 5 10 9 8 7 6 
4 5 6 10 9 8 7 
4 5 6 7 10 9 8 
4 5 6 7 8 10 9 
4 5 6 7 8 9 10  */
