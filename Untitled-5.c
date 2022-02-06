#include <stdio.h>
using namespace std;
int main()
{
    int i, j, rowNum, space;
    count<<"Enter the Number of Rows: ";
    count>>rowNum;
    space = rowNum-1;
    for(i=1; i<=rowNum; i++)
    {
        for(j=1; j<=space; j++)
            count<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        count<<end;
    }
    space = 1;
    for(i=1; i<=(rowNum-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(rowNum-i)-1); j++)
            cout<<"*";
        cout<<end;
    }
    cout<<end;
    return 0;
}