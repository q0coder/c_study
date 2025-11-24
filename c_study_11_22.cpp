#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
#include<math.h>
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	while (*arr1 == *arr2)
//	{
//		if (*arr1=='\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	return (*arr1 - *arr2);//两字母相减就是他们的AScii值相减
//	/*if (*arr1>*arr2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//	
//}
//int main()
//{
//	char arr1[20] = { "zhangsan" };
//	char arr2[20] = { "zhangsa" };
//	int ret = my_strcmp(arr1, arr2);
//	if (ret==0)
//	{
//		printf("==");
//	}
//	//else if (ret==1)
//	else if(ret>0)
//	{
//		printf(">");
//	}
//	//else if (ret==-1)
//	else if(ret<0)
//	{
//		printf("<");
//	}
//	return 0;
//}

//长度不受限制的字符串函数
//strcpy-字符串拷贝
//strcmp-字符串比较
//strcat-字符串追加


//长度受限制的字符串函数
//strncpy
//strncmp
//strncat


//int main()
//{
//	char arr1[20] = {"abcdef"};//如果arr1未定义即arr1中没有“\0”拷贝的arr2中也没拷贝“\0”的话会越界
//	char arr2[20] = { "Hello World" };
//	strncpy(arr1, arr2, 1);//拷贝长度超过arr2长度后面补"\0"
//	printf("%s\n", arr1);
//	//return 0;
//
//}

//int main()
//{
//	char arr1[20] = { "Hello" };
//	char arr2[20] = { " World" };
//	strncat(arr1, arr2, 2);//strncat追加会从arr1末尾的/0开始（覆盖\0），并且在末尾补上\0;
//	printf("%s\n", arr1);//追加长度如果超过arr2长度不会将多余的长度补充\0;
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { "zhangsan" };
//	char arr2[20] = { "zhangsanfeng" };
//	printf("%d\n", strncmp(arr1, arr2, 1));
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { "2520234@qq.com" };
//	char arr2[20] = { "@qq00com" };
//	printf("%p\n", strstr(arr1, arr2));//strstr-查找字符串，如果找到了返回的是要找的字符串首元素地址
//	//如果找不到返回空指针（NULL）；
//	printf("%p\n", &arr1[7]);
//	return 0;
//}
//const char* my_strstr(const char* arr1, const char* arr2)
//{
//	int sz = strlen(arr2);
//	for (size_t i = 0; i < 20; i++)
//	{
//		if (arr1[i] == '\0')
//		{
//			return NULL;
//		}
//		for (size_t j = 0; j < 20; j++)
//		{
//
//			if (arr2[j] == '\0')
//			{
//				break;
//			}
//			if (arr1[i] == arr2[0])
//			{
//				int n = i;
//				int y = 0;
//				while (1)
//				{
//					if (arr1[n] == arr2[y]&&arr2[y]!='\0')
//						
//					{
//						if (y==sz-1)
//						{
//							return arr2;
//						}
//						n++;
//						y++;
//						
//					}
//					
//					 else
//					{
//						break;
//					}
//					
//				}
//			}
//
//		}
//	}
//}
//int main()
//{
//	char arr1[20] = { "1234qwer@qq.com" };
//	char arr2[20] = { "@qqcom" };
//
//	const char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("找不到\n");
//	}
//	else if (p == arr2)
//		printf("找到了\n");
//	return 0;
//}

//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	const char* s1 = arr1;
//	const char* s2 = arr2;
//	const char* p = arr1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = arr2;
//		while (*s1!='\0'&&*s2!='\0'&&*s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[20] = { "1234@qwer@qq.com" };
//	char arr2[20] = { "@qqcom" };
//
//	char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("找不到\n");
//	}
//	else 
//		printf("找到了\n");
//	return 0;
//}

//int main()
//{
//	const char arr1[20] = { "@." };
//	char arr2[20] = { "250703@qq.com" };
//	char arr3[20];
//	strcpy(arr3, arr2);
//	char* ret1 = strtok(arr3, arr1);
//	char* ret2 = strtok(NULL, arr1);
//	printf("%p %p\n", ret1, ret2);
//	printf("%p %p\n", arr3, &arr3[7]);///strtok-字符串分割函数，遇到分隔符进行分割
// //strtok函数会将分隔符改为\0，一般分割的原字符串的拷贝
// //strtok函数第一个参数不为NULL时进行第一次分割，第二次分割只需将第一个参数给为NULL
//	printf("%s\n", ret1);
//	printf("%s\n", ret2);
//	printf("%s\n", &arr2[10]);//%s从所传的地址开始打印到\0停止
//	char* ret = NULL;
//	for (ret=strtok(arr2,arr1);ret!=NULL;ret=strtok(NULL,arr1))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror-返回错误码所对应的错误信息
//errno 是c语言设置的一个全局的错误码存放的变量


//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//			return 1;
//	}
//	return 0;
//}


//int main()
//{
//	//判断是否为空字符（空字符包括\0,\n,空格...等）
//	printf("%d\n", isspace('w'));//为空字符返回非0数  不为空字符返回0
//	printf("%d\n", isdigit('0'));//判断是否是数字字符，是返回非零数字，否的话返回0；
//
//	return 0;
//}

//字符转换函数
//tolower-转小写
//toupper-转大写
//int main()
//{
//	printf("%c\n", tolower('A'));
//	return 0;
//}

//内存函数
// memcpy
// memmove
// memcmp
// memset
//memcpy-内存拷贝函数-可以拷贝包括字符串及其他的多种类型
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int arr2[10];
//	memcpy(arr2, arr, 24);
//	for (size_t i = 0; i < 6; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//void* my_memcpy(void* arr2, const void* arr, size_t num)//void*表示无确定返回类型即返回类型也为void*
//{
//	assert(arr2 && arr);
//	void* ret = arr2;
//	while (num--)
//	{
//		*(char*)arr2 = *(char*)arr;
//		arr = (char*)arr + 1;
//		arr2 = (char*)arr2 + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int arr2[10];
//	my_memcpy(arr2, arr, 24);
//	for (size_t i = 0; i < 6; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20];
//	memmove(arr+2, arr, 20);
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void* my_memmove(void* arr2, const void* arr, size_t num)
//{
//	assert(arr2 && arr);
//	void* ret = arr2;
//	int arr1[20];
//	memcpy(arr1, arr, 40);
//	void* p = arr1;
//	while (num--)
//	{
//		*(char*)arr2 = *(char*)p;
//		arr2 = (char*)arr2 + 1;
//		p = (char*)p+1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 ,7,8,9,10};
//	
//	my_memmove(arr+2, arr, 20);
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void* my_memmove(void* dest,const void* src,size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest<src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//		
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2 ,arr,20);
//		for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[20] = { 1,2,2 ,3};
//	int arr2[20] = { 1,2,3 };
//	
//	printf("%d\n", memcmp(arr1, arr2, 20));
//	return 0;
//}


//int main()
//{
//	char arr[20] = { "Hello World" };
//	memset(arr+6, 'x', 5);//以字节为单位初始化
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    long long n = 0,m=0,s=0;
//    
//    int count=0;
//    scanf("%lld", n);
//    for (size_t i = 0;; i++)
//    {
//        m = n % 10;
//        n /= 10;
//        if (n == 0)
//            break;
//
//        if (m % 2 == 0)
//            s = s;
//        if (m % 2 != 0)
//            s = s + pow(10, count);
//        count++;
//
//    }
//    printf("%lld\n", s);
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int n=0, m, s = 0;
//    scanf("%d", &n);
//    for (size_t i = 0;; i++)
//    {
//        m = n % 10;
//        n /= 10;
//        
//
//        if (m % 2 == 0)
//            s = s;
//        if (m % 2 != 0)
//            s = s + pow(10, i);
//       
//        if (n == 0)
//            break;
//    }
//    printf("%d\n", s);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n < 2 || n>20)
//            break;
//        for (size_t i = 1; i <= n; i++)
//        {
//            for (size_t j = 1; j <= n - i; j++)
//            {
//                printf("  ");
//            }
//            for (size_t j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    float value = 0.0;
//    int mon = 0, date = 0, n;
//    float m = 0.0;
//    scanf("%f%d%d%d", &value, &mon, &date, &n);
//    if (mon == 11 && date == 11 && n == 0)
//    {
//        m = value * 0.7;
//
//    }
//    else if (mon == 11 && date == 11 && n == 1)
//    {
//        m = value * 0.7;
//        m -= 50;
//        if (m < 0)
//        {
//            m = 0;
//        }
//    }
//    else if (mon == 12 && date == 12 && n == 0)
//    {
//        m = value * 0.8;
//
//    }
//    else if (mon == 12 && date == 12 && n == 1)
//    {
//        m = value * 0.8;
//        m -= 50;
//        if (m < 0)
//        {
//            m = 0;
//        }
//    }
//    printf("%.2f", m);
//    return 0;
//}


//int main()
//{
//	int a, b, c, d, e;
//	for (size_t i1 = 1; i1 <=5 ; i1++)
//	{
//		for (size_t i2 = 1; i2 <= 5; i2++)
//		{
//			for (size_t i3 = 1; i3 <= 5; i3++)
//			{
//				for (size_t i4 = 1; i4 <= 5; i4++)
//				{
//					for (size_t i5 = 1; i5 <= 5; i5++)
//					{
//						a = i1;
//						b = i2;
//						c = i3;
//						d = i4;
//						e = i5;
//						if ((b==2||a==3)&&(b==2||e==4)&&(c==1||d==2)&&(c==5||d==3)&&(e==4||a==1))
//						{
//							if ((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
//							{
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (size_t i1 = 0; i1 <= 1; i1++)
//	{
//		for (size_t i2 = 0; i2 <= 1; i2++)
//		{
//			for (size_t i3 = 0; i3 <= 1; i3++)
//			{
//				for (size_t i4 = 0; i4 <= 1; i4++)
//				{
//
//					a = i1;
//					b = i2;
//					c = i3;
//					d = i4;
//
//					if (((a == 0) + (c == 1) + (d == 1) + (d == 0)) == 3)
//					{
//						if ((a+b+c+d)==1)
//						{
//							printf("%d %d %d %d\n", a, b, c, d);
//
//						}
//					}
//
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int arr[4][4];
//	for (size_t i = 0; i < 4; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (size_t i = 0; i < 4; i++)
//	{
//		arr[i][i] = 1;
//	}
//	for (size_t i = 2; i < 4; i++)
//	{
//		for (size_t j = 1; j < i; j++)//arr[2][1]==arr[1][0]+arr[1][1]
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (size_t i = 0; i < 4; i++)
//	{
//		for (size_t j = 0; j <= i; j++)
//		{
//
//
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




