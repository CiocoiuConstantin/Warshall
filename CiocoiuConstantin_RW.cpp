#include<iostream>
#include<fstream>
using namespace std;

int n;
int j;
int k;
int i;
int M[100];
fstream f("input.dat",ios::in);
fstream g("output.dat",ios::out);
int read_data()
{
    for(int i=1;i<=n;i++)
{
        for (int j=1;j<=n;j++)
    {
        for(int k=1;k<=n;k++)
        {
            if(k!=i&k!=j&i!=j)
            {
                 M[i,j]=min(M[i,k],M[k,j] )
            }
        }
    }
}
}



int main()
{
    read_data();
    return 0;
}


