#include<stdio.h>
#include<conio.h>
int main() {
    int arr[10],evenarr[10],oddarr[10];
    int i,e=0,o=0;
    printf("Enter Array Elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Display Array Element\n");
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0) {
            evenarr[e]=arr[i];
            e++;
        }
        else {
            oddarr[o]=arr[i];
            o++;
        }
    }

    printf("Even Numbers from List\n");
    for(i=0;i<e;i++){
        printf("%d\n",evenarr[i]);
    }
    printf("Odd Numbers from List\n");
    for(i=0;i<o;i++){
        printf("%d\n",oddarr[i]);
    }
    return 0;
}