#include<stdio.h>
int main()
{
    int a[3][3]={{0,1,1},{1,0,0},{0,0,1}};
    int count=0; // ones ko count krne ke liye
    int maxcount=0; // max ones ko store krne ke liye
    int index=0; //  index jisme max ones hain
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
            if(count>maxcount)
            {
                maxcount=count;
                index=i;
                count=0;
            }
        }
    }
    printf("the maximum no of ones is %d",maxcount);
    printf(" index is %d",index);
    return 0;

}