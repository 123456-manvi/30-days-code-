#include<stdio.h>
int BS(int [],int,int,int);
int main()
{
    int a[]={1,3,4,8,9,12};
    int i,j,key;
    i=0;
    j=6,key=8,pos;
    pos=BS(a,i,j,key);
    if(pos!=-1)
    printf("key is found at pos %d",pos+1);
    else
    printf("key is not found");
    return 0;
}
int BS(int a[],int i,int j,int key)
{
    int mid;
    if(i==j)
    {
        if(key==a[i])
        return i;
        else
        return -1;
    }
    else{
        mid=(i+j)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        BS(a,i,mid-1,key);
        else
        BS(a,mid+1,j,key);

    }
}