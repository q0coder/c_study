#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int arr[10] = { 1,1,2,2,3,3,4,4,5,6 };
//	int arr1[5] = { 1,1,2,2,5 };
//	int arr2[5] = { 2,2,3,3,6 };
//	int a1 = arr1[0] ^ arr1[1] ^ arr1[2] ^ arr1[3] ^ arr1[4];
//	int a2= arr2[0] ^ arr2[1] ^ arr2[2] ^ arr2[3] ^ arr2[4];
//	printf("%d %d\n", a1, a2);
//	return 0;
//}



//void find_single_num(int arr[], int sz, int* p1, int* p2)
//{
//	int r = 0,i=0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		r ^= arr[i];
//	}
//	for (size_t i = 0; i < 32; i++)
//	{
//		if (((r >> i) & 1)==1)
//		{
//			break;
//		}
//	}
//	for (size_t j = 0; j < 10; j++)
//	{
//		if ((arr[j] >> i) & 1 == 1)
//		{
//			*p1 ^= arr[j];
//		}
//		else
//		{
//			*p2 ^= arr[j];
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,1,2,2,3,3,4,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0, num2 = 0;
//	find_single_num(arr, sz, &num1, &num2);
//	printf("%d %d\n", num1, num2);
//	return 0;
//}


//void find_single_num(int nums[], int sz, int* p1, int* p2) {
//    int r = 0, i = 0;
//    for (size_t i = 0; i < 10; i++) {
//        r ^= nums[i];
//    }
//    for (size_t i = 0; i < 32; i++) {
//        if (((r >> i) & 1) == 1) {
//            break;
//        }
//    }
//    for (size_t j = 0; j < 10; j++) {
//        if ((nums[j] >> i) & 1 == 1)
//        {
//            *p1 ^= nums[j];
//        }
//        else {
//            *p2 ^= nums[j];
//        }
//    }
//}
//int main() {
//    int nums[10] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6 };
//    int sz = sizeof(nums) / sizeof(nums[0]);
//    int num1 = 0, num2 = 0;
//    find_single_num(nums, sz, &num1, &num2);
//    printf("%d %d\n", num1, num2);
//    return 0;
//}



//int main()
//{
//	char ch[20] = { "12378" };
//	int ret = atoi(ch);
//	printf("%d\n", ret);
//	return 0;
//}

////int my_atoi(char ch[])
////{
////
////}
////int main()
////{
////	char ch[20] = { "123456" };
////	my_atoi(ch);
////	return 0;
////}


//int main()
//{
//	char a = '1';
//	int b = (int)a;
//	printf("%d\n", b);
//	return 0;
//}

//#define sweap(a) (((a)&0x55555555)<<1)+(((a)&0xaaaaaaaa)>>1)
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=sweap(a);
//	printf("%d\n",ret );
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	int i = 2;
//	int a1 = 0;
//	int a2 = 0;
//	int arr[100];
//	arr[0] = 0;
//	arr[1] = 1;
//	scanf("%d", &n);
//	while(i<100)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//		if (n <= arr[i - 1] && n >= arr[i - 2])
//		{
//			a1 = arr[i - 1];
//			a2 = arr[i - 2];
//			break;
//		}
//		arr[i - 2] = arr[i - 1];
//		arr[i - 1] = arr[i];
//		
//	}
//	int ret = ((fabs(a1 - n)) >= (fabs(a2 - n))) ? fabs(a2 - n) : fabs(a1 - n);
//	printf("%d\n", ret);
//	return 0;
//}


//find(int arr[],int i)
//{
//	
//	
//	if (i>=0)
//	{
//		arr[i] = find(arr[i - 1], i--) + find(arr[i - 2], i--);
//
//	}
//}
//int main()
//{
//	int n = 0;
//	int i = 99;
//	int a1 = 0;
//	int a2 = 0;
//	int arr[100];
//	arr[0] = 0;
//	arr[1] = 1;
//	scanf("%d", &n);
//	find(arr,i);
//	i = 2;
//	while (i<100)
//	{
//		if (n <= arr[i - 1] && n >= arr[i - 2])
//		{
//			a1 = arr[i - 1];
//			a2 = arr[i - 2];
//			break;
//		}
//		i++;
//	}
//	int ret = ((fabs(a1 - n)) >= (fabs(a2 - n))) ? fabs(a2 - n) : fabs(a1 - n);
//	printf("%d\n", ret);
//	return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//change_blank(char arr[], int len)
//{
//    
//    for (size_t i = 0; i <= len+1; i++)
//    {
//        if (arr[i] == ' ')
//        {
//            int tmp = i;
//            for (size_t j = len+1; j >=tmp+1 ; j--)
//            {
//                arr[j+2] = arr[j];
//
//            }
//            arr[tmp] = '%';
//            arr[tmp + 1] = '2';
//            arr[tmp + 2] = '0';
//        }
//    }
//}
//int main()
//{
//    char arr[1000];
//    fgets(arr, 1000, stdin);
//    
//        int len = strlen(arr);
//        arr[len - 1] = '\0';
//        /*if (len>0&&arr[len-1]=='\n')
//        {
//            arr[len - 1] = '\0';
//        }*/
//        change_blank(arr, len);
//    
//    
//    printf("%s\n", arr);
//    return 0;
//}
//
//
////int main()
////{
////	char arr[10] = { "abcd" };
//	printf("%c\n", arr[4]);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    printf("v   v\n");
//    printf(" v v\n");
//    printf("  v\n");
//
//    return 0;
//}\

//#include <stdio.h>
//
//int main() {
//    printf("The size of short is %d bytes.\n", sizeof(int));
//    return 0;
//}

//#include <stdio.h>
//struct S
//{
//    int i;
//    float a;
//    float b;
//    float c;
//
//}s;
//int main()
//{
//    struct S s = { 0 };
//    scanf("%d;%f,%f,%f", &s.i, &s.a, &s.b, &s.c);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", s.i, s.a, s.b, s.c);
//    return 0;
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0;
//	float math = 0.0;
//	float english = 0.0;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, english);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	    for (size_t i = 1; i <= 5; i++)
//	{
//		for (size_t j = 1; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (size_t j = 1; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    long long n = 0;
//    scanf("%lld", &n);
//    int arr[8];
//    int a = 0;
//
//    for (size_t i = 0; i < 8; i++)
//    {
//        if (n == 0)
//            break;
//        a = n % 10;
//        n = n / 10;
//        arr[i] = a;
//
//    }
//    int y = arr[7] * 1000 + arr[6] * 100 + arr[5] * 10 + arr[4];
//    int m = arr[3] * 10 + arr[2];
//    int d = arr[1] * 10 + arr[0];
//    printf("year=%d\n", y);
//    printf("month=%02d\n", m);
//    printf("date=%02d\n", d);
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%4d%2d%2d", &a, &b, &c);
//	printf("%4d %02d %02d\n", a, b, c);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d", &n);
//    int a = n / 3600;
//    if (n >= 3600)
//    {
//        b = (n - 3600*a) / 60;
//        if (n >= 60)
//        {
//            c = (n - 3600 * a - b * 60) / 60;
//        }
//    }
//    else {
//        b = n / 60;
//        if (n >= 60)
//        {
//            c = (n - b * 60);
//        }
//        else {
//            c = n;
//        }
//    }
//    printf("%d %d %d", a, b, c);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    long long n = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%lld", &n);
//    int a = n / 3600;
//    if (n >= 3600)
//    {
//        b = (n - 3600 * a) / 60;
//        c = (n - 3600 * a - 60 * b);
//        if (n >= 60)
//        {
//            c = (n - 3600 * a - b * 60) / 60;
//        }
//    }
//    else {
//        b = n / 60;
//        if (n >= 60)
//        {
//            c = (n - b * 60);
//        }
//        else {
//            c = n;
//        }
//    }
//    printf("%d %d %d", a, b, c);
//    return 0;
//}