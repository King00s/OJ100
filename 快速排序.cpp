#include<bits/stdc++.h>

void swap(int& a, int& b) {
  int t = b;
  b = a;
  a = t;
}

void quicksort(int a[], int start, int end){
  if(end>start){
    // ���ѡһ��������Ϊ����
    int part=rand()%(end-start)+start;
    int divide=a[part];
    // ����
    swap(a[start], a[part]);
    int i = start;
    int j = i+1;
    while(j<end) {
      while(a[j]>divide&&j<end)
        j++;
      if(j<end){
        i++;
        swap(a[i],a[j]);
        j++;
      }
    }
    swap(a[i],a[start]);
    quicksort(a,start,i);
    quicksort(a,i+1,end);
  }
}

int main()
{
    int n;
    // ��������������Ԫ�ظ���
    scanf("%d\n",&n);
    int array[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        // ���������Ԫ��
        scanf("%d",&array[i]);
    }
    printf("\n");
    quicksort(array,0,n);
    for(j=0;j<n;j++)
    {
        printf("%d ",array[j]);
    }
    return 0;

}
