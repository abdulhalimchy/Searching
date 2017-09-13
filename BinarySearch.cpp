#include<iostream>
#include<stdio.h>>
using namespace std;

int BinarySearch(int ara[], int item, int n)
{
    int beGin=1, eNd=n, index=n+1;
    while(beGin<=eNd)
    {
        int mid = (beGin+eNd)/2;
        if(item == ara[mid]){
            index = mid;
            break;
        }
        else if(item>ara[mid])
            beGin = mid+1;
        else
            eNd = mid-1;
    }
    return index;
}

int main()
{
    int ara[100], n, item;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> ara[i];
    cin >> item;
    int res = BinarySearch(ara, item, n);
    if(res!=n+1)
        cout << ara[res] <<  " Found at " << res << endl;
    else
        cout << "item is not found\n";
    return 0;
}
