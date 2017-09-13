#include<iostream>
#include<stdio.h>>
using namespace std;

int UpperBound(int ara[], int item, int n)
{
    int beGin=1, eNd=n, index=n+1;
    while(beGin<=eNd)
    {
        int mid = (beGin+eNd)/2;
        if(item == ara[mid]){
            index = mid;
            beGin = mid + 1;
        }
        else if(item>ara[mid])
            beGin = mid+1;
        else
            eNd = mid-1;
    }
    return eNd+1;
}

int main()
{
    int ara[100], n, item;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> ara[i];
    cin >> item;
    int res = UpperBound(ara, item, n);

    cout << "Upper Bound is " << res << endl;
    return 0;
}

