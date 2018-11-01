#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    int n1, m1;
    cin >> n1 >> m1;
    const int n=n1;
    const int m=m1;

    int Arr[n][m];
    int i=0, j, k = 0, p=1;
    
    while (i < n*m) 
    {
        k++;
        for (j=k-1;j<m-k+1;j++)
        {
            Arr[k-1][j]=p++;
            i++;
        }  
        
        for (j=k;j<n-k+1;j++)
        {
            Arr[j][m-k]=p++;
            i++;
        } 
        
        for (j=m-k-1;j>=k-1;j--)
        {
            Arr[n-k][j]=p++;
            i++;
        }  
        
        for (j=n-k-1;j>=k;j--)
        {
            Arr[j][k-1]=p++;
            i++;
        }   
        
    }
    
    for (int q=0; q<n; q++)
    {
        for (int w=0; w<m; w++)
        {
            cout << setw(4) << Arr[q][w];
        };
        cout << endl;
    }
    
    return(0);
}
