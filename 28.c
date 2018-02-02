int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    printf("enter array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",a[i],i);
        
    }
    

    return 0;
}
