#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    int r, c;
    float arr1[1000][1000], arr2[1000][1000];
    
    scanf("%d %d",&r, &c);
    matrixinput(arr1, r, c);

    //handeling one newline with garbage character
    char garbage;
    scanf("%c",&garbage);

    matrixinput(arr2, r,c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%.2f ",arr1[i][j]*arr2[i][j]);
        }
        printf("\n");
    }


    return 0;
}
