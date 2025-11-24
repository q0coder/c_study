#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//struct Test
//{
//
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%p\n", p + 0x1);//0x1000014
//	printf("%p\n", (unsigned long)p + 0x1);//0x1000001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x1000004
//	return 0;
//
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr[-1]==*(ptr-1)
//	return 0;
//	//VS小端存储高位字节放在高地址处，低位字节放在低地址处
//	//大端存储相反
// 高位字节即数据写成16进制后高位（两位看成一个整体）
//}
//int main()
//
//{
//	int a[3][2] = { (0,1), (2, 3), (4, 5) };//小括号表示逗号表达式（不是大括号）
//	//（0，1）表示 1
//	//即给a[0][0]=1
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//p[0]==a[0][0];
//	return 0;
//
//
// }
//int main()
//{
//	int a[5][5];
//
//
//	int(*p)[4];
//
//	p = a;
//	//a类型int(*)[5]
//	//p类型int(*)[4]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//%p打印地址，地址无符号，%d打印整数，有符号，所以%p打印的结果是即是内存中的补码的16进制形式
//	//p[4][2]==*(*(p+4)+2)
//	//p[4]=*(p+4);运算法则
//	//两地址相减表示中间相隔多少个该类型的数据
//	return 0;
//大小端只是存储模式，不是读取模式
//}


//int main()
//{
//	int aa[2][5] = { 1,2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//(aa + 1）表示第二行的地址；
//	//(*(aa + 1))表示第二行的数组，即第二行的数组名，也就是第二第一个元素的地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10//5
//	return 0;
//}
//int main()
//{
//	const char* a[] = { "work", "at", "alibaba" };
//	const char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at 指向什么类型 就 跳过一个什么类型 
//	//pa++跳过一个const char*类型
//	//char* *pa//char*是pa指向的类型
//	return 0;
//}
//int main()
//{
//	const char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	const char** cp[] = { c + 3, c + 2, c + 1, c };//F P N E地址的地址
//	const char*** cpp = cp;//F地址的地址的地址
//	
//	printf("%s\n", **++cpp);//p地址的地址的地址 解两次 POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}
//int main()
//{
//	printf("%u\n", strlen("abc") - strlen("abcdef"));//steleng返回的是size_t类型即无符号类型
//	return 0;
//}
// 
// 三种模拟实现strlen的方法
// 
// ~01-计数器
//size_t  my_strlen(const char* arr)
//{
//	size_t count = 0;
//	assert(arr);
//	while (*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//
//	/*int i = 0;
//	int count = 0;
//	while (1)
//	{*/
//		/*if (arr[i] == '\0')
//			break;*/
//		/*if ('a'<arr[i]&&arr[i]<'z'||arr[i]>'A'&&arr[i]<'Z')
//		{
//			count++;
//		}
//		else if(arr[i]<=9&&arr[i]>=0)
//		{
//			count++;
//		}
//		else if (arr[i]==' ')
//		{
//			count++;
//		}*/
//		
//		/*else
//		{
//			count++;
//		}
//		
//		i++;*/
//	//}
//	return count;
//}
// 
//int main()
//{
//	char arr[] = { "abcd0 ;ef" };
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}
// 
// ~02-指针-指针
//size_t my_strlen(char* arr)
//{
//	assert(arr);
//	char* right = arr;
//	char* start = right;
//	while (*right != '\0')
//	{
//		right++;
//	}
//	return (right - start);
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}
//
//~03-递归
//size_t my_strlen(const char* arr)
//{
//	assert(arr);
//	if (*arr=='\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return my_strlen(arr+1) + 1;
//
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	char arr1[5];
//	char arr2[5] = { "abcd" };
//	char arr3[20];
//	char arr4[] = {'a','b','c'};
//	
//	strcpy(arr3, "zhang\0san");//strcpy拷贝至\0终止
//	strcpy(arr1, arr2);//strcpy拷贝包括\0;
//	printf("%s\n", arr1);
//	printf("%s\n", arr3);
//	//strcpy(arr1, arr4);//无\0时错误
//	
//	return 0;
//}
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	//assert(arr1&&arr2)
//	char* p = arr1;
//	/*int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for (size_t i = 0; i <= sz; i++)
//	{
//		arr1[i] = arr2[i];
//	}*/
//	/*while (*arr1++ = *arr2++)
//	{
//
//	}*/
//	return p;
//}
//int main()
//{
//	char arr1[5];
//	char arr2[5] = { "abcd" };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat-字符串追加
//int main()
//{
//	char arr[20] = { "hello" };
//	strcat(arr, "world");//strcat-追加遇到\0停止
//	strcat(arr, arr);//strcat-不支持自己给自己追加
//
//
//	printf("%s\n", arr);
//	return 0;
//
//}
//void my_strcat(char* arr,const char* arr2)
//{
//	assert(arr && arr2);
//	/*int sz= strlen(arr);
//	int j = 0;
//	for (size_t i = sz; ; i++)
//	{
//		if (arr2[j]=='\0')
//		{
//			break;
//		}
//		arr[i] = arr2[j];
//			j++;
//	}*/
//	while (*arr != '\0')
//		arr++;
//	while (*arr++ = *arr2++)
//	{
//
//	}
//}
//int main()
//{
//	char arr[20] = {"Hello"};
//	char arr2[20] = { "World" };
//	my_strcat(arr,arr2);
//	printf("%s\n", arr);//以%s打印遇到\0就停止
//	return 0;
//}

//int main()
//{
//	char arr[20] = { "zhangsanfeng" };
//	char arr2[20] = { "zhangsan" };//strcmp-比较依次比较各个字符Ascii值大小
//	printf("%d\n", strcmp(arr, arr2));//strcmp-相等返回0，大于返回>0的数，小于返回＜0的数
//	return 0;
//}
//int my_strcmp(char* arr1, char* arr2)
//{
//	int i = 0;
//	int count=0;
//	while (1)
//	{
//		if (*arr1 == '\0'||*arr2!='\0')
//		{
//			break;
//		}
//		else if (*arr1++==*arr2++)
//		{
//			
//			count++;
//			
//		}
//		
//		else if (*arr1++>*arr2++)
//		{
//			return 1;
//		}
//		else if (*arr1++<*arr2++)
//		{
//			return -1;
//		}
//		i++;
//
//		
//	}
//
//	if (count == i&& strlen(arr1) == strlen(arr2))
//	{
//		return 0;
//	}
//	else if (strlen(arr1) > strlen(arr2))
//	{
//		return 1;
//	}
//	else if (strlen(arr1) < strlen(arr2))
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[20] = { "zhangsa" };
//	char arr2[20] = { "zhangsan" };
//	int n = my_strcmp(arr1, arr2);
//	if (n==0)
//	{
//		printf("==\n");
//	}
//	else if (n==1)
//	{
//		printf(">\n");
//	}
//	else if (n==-1)
//	{
//		printf("<\n");
//	}
//	return 0;
//}


