#include<iostream>
using namespace std;

int max3(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int maxsum( int a[], int left, int right)
{
    if (left == right)
        return a[left];

    int middle = (left + right) / 2;

    int leftmaxsum = maxsum(a, left, middle);
    int rightmaxsum = maxsum(a, middle + 1, right);
    int maxleftborderSum = 0;
    int maxrightborderSum = 0;
    int tempsum = 0;
    for (int i = middle;i >= left;i--)
    {
        tempsum += a[i];
        if (tempsum > maxleftborderSum)
            maxleftborderSum = tempsum;
    }
    tempsum = 0;
    for (int i = middle + 1;i <= right;i++)
    {
        tempsum += a[i];
        if (tempsum > maxrightborderSum)
            maxrightborderSum = tempsum;
    }

    int maxbordersum = maxrightborderSum + maxleftborderSum;
    return max3(leftmaxsum, maxbordersum, rightmaxsum);
}



int main()
{
    int a[] = { -1,0,1,2,3,4 };
    int maxsumsum = maxsum(a, 0, 5);
    cout <<  maxsumsum << endl;

    return 0;
}
