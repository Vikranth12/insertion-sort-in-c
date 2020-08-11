    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    
    void insertion_sort(int *arr,int n)
    {
        for(int i=0;i<n;i++)
        {
            int temp=arr[i];
            int j=i-1;
            while(j>=0 && temp<arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }
    int main()
    {
        int *ar;
        int n;
        printf("enter the size of the array :");
        scanf("%d",&n);
        ar=(int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            scanf("%d",&ar[i]);
        bubble(ar,n);
        for(int j=0;j<n;j++)
            printf("%d  ",ar[j]);
        printf("\n");
        return 0;
    }

