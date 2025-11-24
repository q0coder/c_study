#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}




//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}



//int main()
//{
//	int* p=(int*)calloc(10, 4);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* pc=(int*)realloc(p, 80);
//	printf("%p\n", pc);
//	printf("%p\n", p);
//
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* pc = (int*)realloc(p, 80);
//	if (pc!=NULL)
//	{
//		p = pc;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//malloc
//calloc
//free
//realloc

//int main()
//{
//	realloc(NULL, 40);//=malloc(40
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	//assert(p);
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (size_t i = 0; i < 11; i++)
//	{
//		p[i] = i;//p[i]==*(p+i)
//	}
//	for (size_t i = 0; i < 11; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p + NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (size_t i = 0; i < 11; i++)
//	{
//		*p = i;
//		p++;
//	}
//	
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(40);
//	free(p);
//	p = NULL;
//	free(p);
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(40);
//	int flag = 1;
//	scanf("%d", &flag);
//	if (flag==5)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//void GetMemory(char** p)
//{
//
//	*p = (char*)malloc(100);//形式参数出函数销毁
//
//}
//void Test(void)
//
//{
//
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//}
//
//int main()
//{
//
//	Test();
//	return 0;
//
//}


//char* GetMemory()
//{
//
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//
//{
//
//	char* str = NULL;
//	str=GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//
//}
//
//int main()
//{
//
//	Test();
//	return 0;
//
//}



//void GetMemory(char* p)
//{
//
//	p = (char*)malloc(100);
//
//}
//void Test(void)
//
//{
//
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//}
//
//int main()
//{
//
//	Test();
//	return 0;
//
//}



//int main()
//{
//	const char* p = "Hello world\n";
//	printf(p);//printf(p)==printf("Hello world\n");
//	return 0;
//}


//char* GetMemory(void)
//{
//char p[] = "hello world";p->野指针
// 
//
//
//return p;
//
//}
//void Test(void)
//{
//
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//
//}
//
//int main()
//{
//Test();
//return 0;
//
//}

//野指针->1:指针未初始化
//2：指针内存已被释放-非法访问（malloc-free）
//3：超出变量作用域
//4:数组访问越界



//void GetMemory(char** p, int num)
//{
//
//	*p = (char*)malloc(num);
//}
//void Test(void)
//
//{
//
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//}
//
//int main()
//{
//	Test();
//	return 0;
//
//}



//void Test(void)
//{
//
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	printf("%p\n", str);
//	free(str);//free确实将malloc申请的空间释放了，但str并没有变
//	printf("%p\n", str);
//	
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//		
//
//}
//
//int main()
//{
//
//	Test();
//	return 0;
//
//}






//#include <stdio.h>
//
//int main()
//{
//    long long n, m;
//    long long GCD, LCM;
//    scanf("%lld%lld", &n, &m);
//    for (size_t i = (m > n ? n : m); i > 0; i--)
//    {
//        if (n % i == 0 && m % i == 0)
//        {
//            GCD = i;
//            break;
//        }
//
//    }
//    for (size_t j = (m > n ? m : n); j > 0; j++)
//    {
//        if (j%n==0&&j%m==0)
//        {
//            LCM = j;
//            break;
//        }
//
//    }
//    long long sum = LCM + GCD;
//    printf("%lld\n", sum);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    long long n, m;
//    long long GCD, LCM;
//    long long c, d;
//    while (scanf("%lld%lld", &n, &m) == 2)
//    {
//        c = m;
//        d = n;
//        if (m >= n)
//        {
//            while (1)
//            {
//                long long tmp = n;
//                n = m % n;
//                m = tmp;
//                if (n == 0)
//                {
//                    GCD = m;
//                    LCM = (c * d) / GCD;
//                    long long sum = LCM + GCD;
//                    printf("%lld\n", sum);
//                    break;
//                }
//
//            }
//            
//        }
//        else
//        {
//            while (1)
//            {
//                long long tmp = m;
//                m = n % m;
//                n = tmp;
//                if (m == 0)
//                {
//                    GCD = n;
//                    LCM = (c * d) / GCD;
//                    long long sum = LCM + GCD;
//                    printf("%lld\n", sum);
//                    break;
//                }
//
//            }
//            
//        }
//    }
//    
//    return 0;
//}
//
//
//
//


//#include <stdio.h>
//
//int main()
//{
//    long long n, m;
//    long long GCD, LCM;
//    long long c, d;
//    while (scanf("%lld%lld", &n, &m) == 2)
//    {
//        c = m;
//        d = n;
//        
//            while (1)
//            {
//                long long tmp = n;
//                n = m % n;
//                m = tmp;
//                if (n == 0)
//                {
//                    GCD = m;
//                    LCM = (c * d) / GCD;
//                    long long sum = LCM + GCD;
//                    printf("%lld\n", sum);
//                    break;
//                }
//
//            }
//
//       
//        
//
//        
//    }
//
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    int n;
//    
//    char arr[4][4];
//    while (scanf("%d", &n) == 1)
//    {
//        for (size_t i = 0; i < n; i++)
//        {
//            for (size_t j = 0; j < n; j++)
//            {
//                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//                    arr[i][j] = '*';
//                else
//                {
//                    arr[i][j] = ' ';
//                }
//            }
//        }
//        for (size_t i = 0; i < n; i++)
//        {
//            for (size_t j = 0; j < n; j++)
//            {
//
//
//                printf("%c", arr[i][j]);
//                printf(" ");
//
//            }
//            printf("\n");
//        }
//    }
//    
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//
//
//    while (scanf("%d", &n) == 1)
//    {
//        for (size_t i = 0; i < n; i++)
//        {
//            for (size_t j = i; j < n; j++)
//            {
//                printf("  ");
//            }
//            for (size_t j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (size_t i = 0; i < n + 1; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//        for (size_t i = 0; i < n; i++)
//        {
//            for (size_t j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            for (size_t j = i; j < n; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//struct MyStruct
//{
//	int i;
//	int arr[0];//arr[]
//}s;
//int main()
//{
//	printf("%d\n", sizeof(struct MyStruct));
//	struct MyStruct* p = (struct MyStruct*)malloc(44);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	s.i = 100;
//	for (size_t i = 0; i < 10; i++)
//	{
//		s.arr[i] = i;
//	}
//	printf("%d\n", s.i);
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	realloc(p, 84);
//	return 0;
//}



//int main()
//{
//	FILE* p = fopen("D:\\Drivers\\Intel_GNA\\Source\\c.txt", "r");
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}