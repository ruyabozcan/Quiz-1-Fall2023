#include <stdio.h>

int main(void) {
  void quiz(int a[],int n,double *avg,int *max,int *pmax);
  int arr[]={1,2,3,5,1,2,3,9,5,6,7,8,9,4,5,0,3,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  int m,pm;
  double average;
  quiz(arr,size,&average,&m,&pm);
  printf("avg=%.2lf and maximum =%d and 2nd rank is %d\n",average,m,pm);
  return 0;
}

void quiz(int a[],int n,double *avg,int *max,int *pmax){
 int sum=a[0];
 *max=*pmax=a[0];
 for(int i=1;i<n;i++){
   sum+=a[i];
   if(a[i]>*max){
     *pmax=*max;
     *max=a[i];
   }
   else if(a[i]>*pmax) *pmax=a[i];
 }
 *avg=(double)sum/n; 
}