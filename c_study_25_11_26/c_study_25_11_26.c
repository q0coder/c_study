#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>
//#define POW(x) (x)*(x) 
//int main()
//{
//	int r = pow(5,2);
//	int s = POW(5+1);
//	printf("%d %d\n", r, s);
//	return 0;
//}
//#define double(x,y) (x)+(y) 
//int main()
//{
//	int r = double(2,3);
//	printf("%d\n", r);
//	return 0;
//}
//
//
//#define double(x,y) ((x)+(y)) 
//int main()
//{
//	int r = double(2, 3);
//	printf("%d\n", r);
//	return 0;
//}


//#define double(x,y) ((x)+(y)) 
//int main()
//{
//	int r = double(2, 3);
//	printf("%d\n", r);
//	return 0;
//}


//int main()
//{
//	printf("Hello world\n");
//	printf("Hello " "world");
//	
//	return 0;
//}


//#define print(n) printf("tne value of " #n "is %d\n",n);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//	printf("the value of a is %d\n", a);
//	printf("the value of a is %d\n", b);
//
//	return 0;
//}


//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT,N)
//int main()
//{
//	int n = 10;
//	PRINT(n, "%d\n");
//
//	float a = 3.14f;
//	PRINT(a, "%f");
//	return 0;
//}


//#define max(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5;
//	int b = 4;
//	int ret = max(a++, b++);
//	printf("%d %d %d\n", ret,a,b);
//	return 0;
//}

//#define MALLOC(NUM,TYPE) malloc((NUM)*(sizeof(TYPE)))
//int main()
//{
//	int* p = MALLOC(10, int);
//	for (size_t i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////#define __DEBUG__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (size_t i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
//#ifdef  __DEBUG__
//		printf("%d\n", arr[i]);
//#endif
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//#if 1
//	printf("%d\n", a);
//#endif 
//	return 0;
//
//}


//#define M 3
//int main()
//{
//	int a = 10;
//#if M>3
//	printf("%d\n", a);
//#elif M==3
//	printf("0\n"); 
//
//#endif 
//	return 0;
//
//}




//struct S
//{
//	char a;
//	int b;
//	char c;
//
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n",offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//
//	return 0;
//}





//#define my_offsetof(type,mem) ((size_t)&((type*)0)->mem)
//
//struct S
//{
//	char a;
//	int b;
//	char c;
//
//}s;
//int main()
//{
//	
//	
//	printf("%u\n", my_offsetof(struct S, b));
//
//	return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//    return *((int*)e1) - *((int*)e2);
//}
//int main() {
//    int arr[7];
//    float ave = 0.0f;
//    int s = 0;
//    while ((scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6])) == 7)
//    {
//        qsort(arr, 7, 4, cmp);
//        for (size_t i = 0; i < 7; i++)
//        {
//            printf("%d\n", arr[i]);
//        }
//        for (size_t i = 1; i < 6; i++)
//        {
//            s += arr[i];
//
//        }
//        ave = s / 5.0;
//        printf("%.2f\n", ave);
//    }
//    return 0;
// 
// 
// 
//}



//struct S
//{
//	int a;
//	int b;
//	int c;
//}s;
//int main()
//{
//	
//	int* p1 = &s.a;
//	int* p2 = &s.b;
//	int* p3 = &s.c;
//	printf("%p\n%p\n%p\n", p1, p2, p3);
//	return 0;
//}



//int main()
//{
//	int arr[10] = {1,1,2,2,3,3,4,4,5,6};
//	int i = 0;
//	int count;
//	int c = 0;
//	
//		for (size_t i = 0; i < 10; i++)
//		{
//			count = 0;
//			c = i;
//			for (size_t j = 0; j < 10; j++)
//			{
//				if (arr[i] != arr[j])
//				{
//					count++;
//					if (count==9)
//					{
//						printf("%d\n", arr[i]);
//
//					}
//				}
//			}
//		}
//	
//	return 0;
//}



