#include <bits/stdc++.h>

using namespace std;

#include <iostream> 
using namespace std;
void QuickSort(int *array,int low,int high){	//快排 
	if(low>=high){	//若待排序序列只有一个元素，返回空 
		return ;
	}
	int i=low;	//i作为指针从左向右扫描 
	int j=high;	//j作为指针从右向左扫描
	int key=array[low];//第一个数作为基准数 
	while(i<j){
		while(array[j]>=key&&i<j){	//从右边找小于基准数的元素 （此处由于j值可能会变，所以仍需判断i是否小于j） 
			j--;	//找不到则j减一 
		}
		array[i]=array[j];	//找到则赋值 
		while(array[i]<=key&&i<j){	//从左边找大于基准数的元素 
			i++;	//找不到则i加一 
		}
		array[j]=array[i];	//找到则赋值 
	}
	array[i]=key;	//当i和j相遇，将基准元素赋值到指针i处 
	QuickSort(array,low,i-1);	//i左边的序列继续递归调用快排 
	QuickSort(array,i+1,high);	//i右边的序列继续递归调用快排 
}
int main(){
	int array[]={49,38,65,97,76,13,27,49};
	int length=sizeof(array)/sizeof(*array);
	cout<<"start array:";
	for(int i=0;i<length;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	QuickSort(array,0,length-1);
	cout<<"ordered array:";
	for(int i=0;i<length;i++){
		cout<<array[i]<<" ";
	}
    system("pause");
	return 0;
}
/*
//示范代码

//快速排序
#include <iostream> 
using namespace std;
void QuickSort(int *array,int low,int high){	//快排 
	if(low>=high){	//若待排序序列只有一个元素，返回空 
		return ;
	}
	int i=low;	//i作为指针从左向右扫描 
	int j=high;	//j作为指针从右向左扫描
	int key=array[low];//第一个数作为基准数 
	while(i<j){
		while(array[j]>=key&&i<j){	//从右边找小于基准数的元素 （此处由于j值可能会变，所以仍需判断i是否小于j） 
			j--;	//找不到则j减一 
		}
		array[i]=array[j];	//找到则赋值 
		while(array[i]<=key&&i<j){	//从左边找大于基准数的元素 
			i++;	//找不到则i加一 
		}
		array[j]=array[i];	//找到则赋值 
	}
	array[i]=key;	//当i和j相遇，将基准元素赋值到指针i处 
	QuickSort(array,low,i-1);	//i左边的序列继续递归调用快排 
	QuickSort(array,i+1,high);	//i右边的序列继续递归调用快排 
}
int main(){
	int array[]={49,38,65,97,76,13,27,49};
	int length=sizeof(array)/sizeof(*array);
	cout<<"原始序列：";
	for(int i=0;i<length;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	QuickSort(array,0,length-1);
	cout<<"快排序列：";
	for(int i=0;i<length;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}







*/