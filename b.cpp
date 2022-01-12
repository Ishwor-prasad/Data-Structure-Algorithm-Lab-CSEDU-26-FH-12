#include <bits/stdc++.h>
using namespace std;

//Getting Matrix input from user
void matrixinput(float arr1[][1000], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%f", &arr1[i][j]);
        }
        
    }
    return;

};

//user defined function to give output filter result
float answer(float arr1[][1000], float arr2[][1000],int rpos, int cpos, int n)
{
    float ans=0;
    for(int i=rpos; i<n+rpos; i++)
    {
        for(int j=cpos; j<n+cpos; j++)
        {
            ans += arr1[i][j] * arr2[i-rpos][j-cpos];
            
        }
    }
    return ans;
}
int main()
{
    int r, c,n;
    float arr1[1000][1000], arr2[1000][1000];
    //First Matrix Entry
    scanf("%d %d", &r, &c);
    matrixinput(arr1, r, c);
    //Second Matrix Entry
    scanf("%d ", &n);
    matrixinput(arr2, n, n);
    
    //resultant matrix row coloum find
    int resr= r-n+1;
    int resc = c-n+1;

    //resultant matrix row coloum find and answer print
    for (int i = 0; i < resr; i++)
    {
        for (int j = 0; j < resc; j++)
        {
            printf("%.2f ",answer(arr1, arr2,i,j,n));
        }
        printf("\n");
    }
    return 0;
}