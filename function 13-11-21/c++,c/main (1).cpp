#include <iostream>

/*
Example:
Input:
Number of Pattern: 6
Character of Pattern: *
Output:
               * * *
             * * * * *
          * * * * * * *
          * * * * * * *
            * * * * *
               * * *
Number of Pattern: 7
Character of Pattern: *
Output:
                  * *
               * * * *
             * * * * * *
           * * * * * * * *
             * * * * * *
               * * * *
                  * *
*/
using namespace std;

void evenPatern(int n , char c)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        //2/1/0/0/1/2 scapec 6/2=3-1

        int m=0,o=3;
        if(i<n/2)
        {
            m=n-(n/2)-i-1; // 6-3-0-1= 2; // 6-3-1-1= 1 // // 6-3-2-1= 0
            o=o+ (i*2);
            //cout<<m<<endl;
        }
        else
        {
            m=i-(n/2);//0 1 2  // 3 4 5
            o= (n+1)-k; // 7-0=7; 7-2=5; 7- 7 5 3
            k=k+2;
            //cout<<m<<endl;
        }

        for(int j=0;j<m;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<o;j++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

void oddPatern(int n , char c)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        //2/1/0/0/1/2 scapec 6/2=3-1

        int m=0,o=2;
        if(i<n/2)
        {
            m=n-(n/2)-i-1; // 6-3-0-1= 2; // 6-3-1-1= 1 // // 6-3-2-1= 0
            o=o+ (i*2);
            //cout<<m<<endl;
        }
        else
        {
            m=i-(n/2);//0 1 2  // 3 4 5
            o= (n+1)-k; // 7-0=7; 7-2=5; 7- 7 5 3
            k=k+2;
            //cout<<m<<endl;
        }

        for(int j=0;j<m;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<o;j++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    char c;
    cout<<"Number of Pattern:";
    cin>>n;
    cout<<"Input Char:";
    cin>>c;
    if(n%2==0)
    {
        cout<<"For Even Value:\n";
        evenPatern(n ,c);
    }
    else
    {
        cout<<"For Odd Value:\n";
        oddPatern(n,c);
    }
    return 0;
}
