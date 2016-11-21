#include<stdio.h>
int main()
{
    int ara[500], n, i, item, flag=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    printf("Input an Item : ");
    scanf("%d", &item);
    for(i=0; i<n; i++)
    {
        if(ara[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Item Found at position %d\n", i+1);
    else
        printf("Item not Found\n");
    return 0;
}
