#include<stdio.h>
int main()
{
    int n, ara[500], item, low_index, high_index, mid_index, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    printf("Input an Item : ");
    scanf("%d", &item);
    low_index=0;
    high_index=n-1;
    mid_index=(low_index+high_index)/2;
    while((low_index<=high_index) && (ara[mid_index]!=item))
    {
        if(item>ara[mid_index])
        {
            low_index=mid_index+1;
        }
        else if(item<ara[mid_index])
        {
            high_index=mid_index-1;
        }
        mid_index=(low_index+high_index)/2;
    }
    if(ara[mid_index]==item)
        printf("item Found at Position %d\n", mid_index+1);
    else
        printf("Item not Found\n");
    return 0;
}
