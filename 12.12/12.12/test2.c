#define _CRT_SECURE_NO_WARNINGS 1
void quickSort(int a[],int left,int right)
{
����int i=left;
����int j=right;
����int temp=a[left];
����if(left>=right)
��������return;
����while(i!=j)
����{
��������while(i<j&&a[j]>=temp) 
��������j--;
��������if(j>i)
������������a[i]=a[j];//a[i]�Ѿ���ֵ��temp,����ֱ�ӽ�a[j]��ֵ��a[i],��ֵ��֮��a[j],�п�λ
��������while(i<j&&a[i]<=temp)
��������i++;
��������if(i<j)
������������a[j]=a[i];
����}
����a[i]=temp;//�ѻ�׼����,��ʱi��j�Ѿ����R[low..pivotpos-1].keys��R[pivotpos].key��R[pivotpos+1..high].keys
����quickSort(a,left,i-1);/*�ݹ����*/
����quickSort(a,i+1,right);/*�ݹ��ұ�*/
}

int main()
{
int a[9]={8,2,6,12,1,9,5,5,10};
int i;
quickSort(a,0,8);/*�ź���Ľ��*/
for(i=0;i<8;i++)
printf("%4d",a[i]);
getchar();
return 0;
}