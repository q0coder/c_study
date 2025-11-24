#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stddef.h>
//void rorate(char* arr,int k)
//{
//	int sz = strlen(arr);
//	k%=sz;
//	for (size_t i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (size_t j = 0; j < sz-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[sz - 1] = tmp;
//	}
//
//}
//int main()
//{
//	int k = 2;
//
//	char arr[5] = { "abcd" };//4-1-a[0]=a[3]
//	//5-1-a[0]=a[3]-2-a[0]=a[3]
//	scanf("%d", &k);
//	rorate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}


//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//void rorate(char* arr,int k)
//{
//	int sz = strlen(arr);
//	k %= sz;
//	reverse(arr, &arr[k - 1]);
//	reverse(&arr[k], &arr[sz-1]);
//	reverse(arr, &arr[sz-1]);
//
//
//}
//int main()
//{
//	int k = 2;
//
//	char arr[5] = { "abcd" };//4-1-a[0]=a[3]
//	//5-1-a[0]=a[3]-2-a[0]=a[3]
//	scanf("%d", &k);
//	rorate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}


//void Find(int (*arr)[5], int i, int j)
//{
//	int n = 0;
//	scanf("%d", &n);
//	for ( i = 0; i < 4; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			if (n==arr[i][j])
//			{
//				printf("找到了,arr[%d][%d]\n", i, j);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5][5];
//	arr[0][0] = 0;
//	int i = 0;
//	int j = 0;
//	for (size_t i = 0; i < 4; i++)
//	{
//		for (size_t j = 0; j < 4; j++)
//		{
//			arr[i][j] = i + j;
//		}
//	}
//	for (size_t i = 0; i < 4; i++)
//	{
//		for (size_t j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//									
//		}							
//		printf("\n");				
//	}	
//	Find(arr,i,j);
//	return 0;
//}
//o(n)时间复杂度-表示从n个数据中找一个数最多需要n次

//struct num
//{
//	int x;
//	int y;
//};
//struct num find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct num a = { -1,-1 };
//
//	while (x <= 2 && y >= 0)
//	{
//
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			a.x = x;
//			a.y = y;
//			return   a;
//		}
//	}
//	return a;
//
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	struct num ar = find_num(arr, 3, 3, k);
//	if (ar.x!=-1)
//	{
//		printf("找到了：arr[%d][%d]\n", ar.x, ar.y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int find_num(int arr[3][3], int* r, int* c, int k)
//{
//	int x = 0;
//	int y = *c - 1;
//	
//	while (x <= 2 && y >= 0)
//	{
//
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*r = x;
//			*c = y;
//			return   1;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	
//	if (ret==1)
//	{
//		printf("找到了：arr[%d][%d]\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int judge_is_rorate(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	
//	int i = 0;
//	
//	int j = 0;
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	
//	
//	for (size_t i = 0; i <= len2; i++)
//	{
//		
//		char tmp = arr2[0];
//		for (size_t j = 0; j < len2-1; j++)
//		{
//			arr2[j] = arr2[j + 1];
//
//		}
//		arr2[len2 - 1] = tmp;
//		if (strcmp(arr1,arr2)==0)
//		{
//			return 1;
//			
//		}
//		
//
//	}
//	
//	return 0;
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	scanf("%s%s", &arr1, &arr2);
//	int ret = judge_is_rorate(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//int judge_is_rorate(char arr1[], char arr2[])
//{
//
//	strncat(arr1, arr1,strlen(arr1));
//	
//	if ((strstr(arr1, arr2)) == NULL)
//		return 0;
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	scanf("%s%s", &arr1, &arr2);
//	int ret = judge_is_rorate(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//int cmp(const void* e1,const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	qsort(arr, 10, 4, cmp);
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void my_qsort(void* base, size_t num, size_t szel, int(*cmp)(const void*,const void*))
//{
//	for (size_t i = 0; i < num-1; i++)
//	{
//		int flag = 1;
//		for (size_t j = 0; j < num-1-i; j++)
//		{
//			if ((cmp((char*)base+j*szel, (char*)base) + (j+1)*szel) > 0)
//			{
//				char tmp = *((char*)base + j * szel);
//				*((char*)base + j * szel) = *((char*)base + (j + 1) * szel);///观察函数内部的数组base可用
//																			//(int*)base,10
//				*((char*)base + (j + 1) * szel) = tmp;
//				flag = 0;
//			}
//		}
//		if (flag==1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	
//	int arr[10] = { 1000,999,998,997,996,995,994,993,992,991};
//	my_qsort(arr, 10, 4, cmp);
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
////int main()
////{
////	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
////	for (size_t i = 0; i < 10; i++)
////	{
//		for (size_t j = 0; j < 9-i; j++)
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[10][10];
//    for (size_t i=0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//   
//    for (size_t i=0; i < m; i++)
//    {
//        for (size_t j=0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//struct MyStruct
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct MyStruct));
//	return 0;
//}


//struct MyStruct
//{
//	int b;
//
//	char a;
//	char c;
//	
//};
//int main()
//{
//	printf("%d\n", sizeof(struct MyStruct));
//	return 0;
//}

//#pragma pack(4)
//struct MyStruct
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()
//
//int main()
//{
//
//	printf("%d\n", sizeof(struct MyStruct));
//	printf("%d\n", offsetof(struct MyStruct, b));
//	return 0;
//}

//
//struct MyStruct
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//
//};
//int main()
//{
//	printf("%d\n", sizeof(struct MyStruct));
//	return 0;
//}


//
//enum Day
//{
//	Mon,//
//	Tues,//1
//	wed,//2
//	Thur,//..
//	Fir,
//	Sat,
//	sun
//
//
//};
//enum Day
//{
//	Mon=1,//
//	Tues,//1
//	wed,//2
//	Thur,//..
//	Fir,
//	Sat,
//	sun
//
//
//};
//
//int main()
//{
//	
//	enum Day d = Fir;
//	printf("%d\n", Mon);
//	return 0;
//
// }



//union Un
//{
//	int a;
//	int c;
//
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(union Un));
//	printf("%p\n", &u);
//	printf("%p\n", &u.a);
//	printf("%p\n", &u.c);
//	u.a = 1;
//	u.c = 3;
//	printf("%d\n", u.a);
//	printf("%d\n", u.c);
//
//	return 0;
//}


//int check_sys(int a)
//{
//	return *(char*)&a;
//}
//int main()
//{
//	int a = 1;
//	int ret=check_sys(a);
//	if (ret==1)
//	{
//		printf("小\n");
//
//	}
//	else
//	{
//		printf("大\n");
//	}
//	return 0;
//}


//
//union Un
//{
//	int a;
//	char c;
//}u;
//
//int main()
//{
//	int a = 1;
//	
//	u.a = 1;
//	if (u.c == 1)
//	{
//		printf("小\n");
//
//	}
//	else
//	{
//		printf("大\n");
//	}
//	return 0;
//}



