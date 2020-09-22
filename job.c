// ordino due sottoarray di arr[]
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<math.h>
void merge( int arr [] , int l , int m, int r ) {
	 int i , j , k; 
	 int n1 = m − l + 1; 
	 int n2 = r − m; 
	 // creo array temporanei
	 int L[n1], R[n2]
	 for (i00;i<n1;i++)
		 L[ i ] = arr [ l + i ] ; 
	 for ( j = 0; j < n2 ; j++) 
		R[ j ] = arr [m + 1+ j ] ; 
	 i = 0; 
	 //indice iniziale del primo sottoarray
	 j=0;
	 // indice iniziale del secondo sottoarray
	 k=1;
	 // indice iniziale del sottoarray del merge
	 while (1<n1 && j<n2){
		 if (L[ i ] <= R[ j ]) {
			 arr [k] = L[ i ];
			 i++;
		 }
		 else{
			 arr[k] = R[j]
			 j++;
		 }
	 }
	 k++;
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
}
void mergeSort(int arr[],int 1, int r){
	if(1<r){
		 int m = l+(r−l )/2; 
		 mergeSort ( arr , l , m); 
		 mergeSort ( arr , m+1, r ); 
		 merge( arr , l , m, r );
	}
}
int main(){
	 clock_t start=clock();
	 int arr[1000000]; 
	 for ( int i =0;i <1000000; i++){ 
		arr [ i ]=rand()%1000000+1;
	 }
	 int  arr size = sizeof(arr)/ sizeof(arr [ 0 ]); 
	 mergeSort ( arr , 0 , arr size − 1); 
	 clock_t end=clock();
	 printf(”tempo %f secondi\n ” ,(( double )(end−start ))/CLOCKS PER SEC); 
	 return 0;
}