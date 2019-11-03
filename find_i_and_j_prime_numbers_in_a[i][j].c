#include<stdio.h>
 
main()
{
   int n, c = 2;
   int i=0,j=0; 
   printf("Enter a n to check if it is prime arr[n][n]\n");
   scanf("%d",&n);
   
    int arr[n][n];

    
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            for ( c = 2 ; c <= i - 1 ; c++ )
            {
                if ( i%c == 0 ) {
                //printf("%d isn't prime.\n", i);
                break;
                }
            }
            if ( c == i ){
                //printf("%d is prime.\n", i);
            
            for ( c = 2 ; c <= j - 1 ; c++ )
            {
                if ( j%c == 0 ) {
                //printf("%d isn't prime.\n", i);
                break;
                }
            }
            if ( c == j ){
                if(i!=j){
                  printf("arr[%d][%d] is true.\n", i,j);  
                }
            }
            }
            printf("arr[%d][%d] is flase.\n", i,j);
        }
    }
    
   
   return 0;
}
