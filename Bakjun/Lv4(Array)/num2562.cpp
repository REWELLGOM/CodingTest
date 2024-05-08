#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    vector<int>array(9);
    vector<int>coarray(9);
    for(int i =0; i < 9; i++)
    {
        cin>>array[i];
        coarray[i] = array[i];
    }
    sort(array.begin(),array.end());
    for(int j = 0; j < 9; j++)
    {
        if(array[8] == coarray[j])
        {
            cout<<array[8]<<endl;
            cout<<j+1;
            break;
        }
    }
}