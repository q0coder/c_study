#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    float a, b;
//    scanf("%f %f", &a, &b);
//    printf("%.2f\n", (a / ((b / 100) * (b / 100))));
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//    double a;
//    scanf("%lf", &a);
//   
//    float v = ((4.0 / 3.0) * (3.1415926) *( a * a * a));
//    printf("%.3lf\n", v);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    char n;
//
//    while ((scanf(" %c", &n)) == 1)
//    {
//        printf("%c\n", (n + 32));
//    }
//
//    return 0;
//}

//010-2
//100
//1010-10
//100 0000 0000-1024
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", (2 << (a-1)));
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int arr[5];
//    float ave,s=0;
//    for (size_t i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//        s += arr[i];
//    }
//    ave = s / 5;
//    printf("%.1f\n", ave);
//    return 0;
//}


//#include <stdio.h>
//#include<math.h>
//int main() {//12345
//    int n = 0, s = 0,j=0,count=1;
//    for (size_t i = 10001; i <= 99999; i++)
//    {
//        j = i;
//        s = 0;
//        count = 1;
//        while (1)
//        {
//            j /= 10;
//            if (j == 0)
//                break;
//            
//           // int c = pow(10, count);
//            n = i % (int)pow(10, count);
//            
//            s += n * j;
//            count++;
//            
//        }
//        if (s == i)
//            printf("%d\n", s);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 9999; i <= 99999; i++)
//    {
//        int a = i / 10000;
//        int a1 = i % 10000;
//        int b = i / 1000;
//        int b1 = i % 1000;
//        int c = i / 100;
//        int c1 = i % 100;
//        int d = i / 10;
//        int d1 = i % 10;
//        if ((a * a1) + (b * b1) + (c * c1) + (d * d1) == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	qsort
//}



//#include <stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//    return (*((int*)e2) - *(int*)e1);
//}
//int main(){
//int n = 6;
//int arr[6];
//scanf("%d", &n);
//for (size_t i = 0; i < n; i++)
//{
//    scanf("%d", &arr[i]);
//}
//qsort(arr, n, 4, cmp);
//for (size_t i = 0; i < 5; i++)
//{
//    printf("%d ", arr[i]);
//}
//return 0;
//    }


//
//#include <stdio.h>
//
//int main() {
//    char arr[100];
//    int i = 0;
//    int countA = 0;
//    int countB = 0;
//    while (1)
//    {
//        scanf("%c", &arr[i]);
//        if (arr[i] == '0')
//            break;
//        i++;
//    }
//    i = 0;
//    while (1)
//    {
//        
//        if (arr[i] == 'A')
//        {
//            countA++;
//        }
//        else if (arr[i] == 'B')
//        {
//            countB++;
//        }
//        else {
//            break;
//        }
//        i++;
//    }
//    if (countA > countB)
//        printf("A");
//    else if (countA < countB)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char a, b;
//    while (scanf("%c ", &a) == 1)
//    {
//        if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'i' || a == 'I' || a == 'O' || a == 'o' || a == 'U' || a == 'u') {
//            printf("Vowel\n");
//
//        }
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d%d", &a, &b) == 1)
//    {
//        if (a == b)
//            printf("%d=%d", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d>%d\n", a, b);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a;
//    float b;
//    while (scanf("%d", &a) == 1)
//    {
//        if (a < 0)
//        {
//            b = 0;
//            printf("%f\n", b);
//
//        }
//        else if (a == 0)
//        {
//            b = 1.0 / 2;
//            printf("%f\n", b);
//
//        }
//        else {
//            b = 1;
//            printf("%f\n", b);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d%d", &a, &b) == 2)
//    {
//        double BMI = ((double)a / (((double)b / 100.0) * ((double)b / 100.0)));
//        if (BMI < 18.5)
//            printf("Overweight\n");
//        else if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        else if (BMI > 23.9 && BMI <= 27.9)
//            printf("Obese\n");
//        else
//            printf("Underweight\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//#include<math.h>
//#include<complex.h>
//int main() {
//    float a, b, c;
//    float n = 0.0f;
//    float x1=0.0f, x2=0.0f;
//    while (scanf("%f%f%f", &a, &b, &c) == 3)
//    {
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            n = b * b - 4 * a * c;
//            if (n == 0)
//            {
//                x1 = (b) / (2 * a);
//
//                printf("x1=x2=%.2f\n", x1);
//            }
//            else if (n > 0)
//            {
//                x1 = ((-b) + sqrt(n)) / (2 * n);
//                printf("x1=%.2f;x2=%.2f\n", x1, x2);
//            }
//            else {
//                x1 = ((-b) / (2 * a));
//                x2 = ((-n) / (2 * a));
//                printf("x1=%.2f+%.2fi\n", x1, x2);
//                printf("x1=%.2f-%.2fi\n", x1, x2);
//
//            }
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = "1.0";
//	char b = "3.0";
//	float c = (float)a + (float)b;
//	printf("%.4f", c);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d", &a) == 1)
//    {
//        for (size_t i = 0; i < a; i++)
//        {
//            for (size_t i = 0; i < a - i; i++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d", &a) == 1) {
//        for (size_t i = 0; i < (2 * a + 1); i++)
//        {
//            if (i < (a + 1))
//            {
//                for (size_t j = 0; j < a - i; j++)
//                {
//                    printf(" ");
//                }
//                for (size_t j = 0; j <= i; j++)
//                {
//                    printf("* ");
//                }
//            }
//            else
//            {
//                for (size_t j = 0; j < i - a; j++)
//                {
//                    printf(" ");
//                }
//                for (size_t j = 0; j <= 2*a-i; j++)
//                {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a, b, n;
//    char arr[5][5];
//    while (scanf("%d", &a) == 1)
//    {
//        n = a;
//        for (size_t i = 0; i < a; i++)
//        {
//            for (size_t j = 0; j < a; j++)
//            {
//                if (i == j)
//                    arr[i][i] = '*';
//                else if (i + j == a-1)
//                {
//                    arr[i][j] = '*';
//                }
//                else
//                {
//                    arr[i][j] = ' ';
//                }
//            }
//
//        }
//        for (size_t i = 0; i < a; i++)
//        {
//            for (size_t j = 0; j < a; j++)
//            {
//
//                printf("%c", arr[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int x = 1;
//    int count = 1;
//    scanf("%d", &n);
//    int arr[20 - 1];
//    for (size_t i = 0; i < n - 1; i++)
//    {
//        arr[i] = i + 2;
//    }
//    while (1)
//    {
//        for (size_t i = x; i < n - 1; i++)
//        {
//            if (arr[i] % 2 == 0)
//            {
//                arr[i] = 0;
//            }
//
//        }
//        x++;
//
//        if (x == n - 2)
//            break;
//    }
//    for (size_t i = 0; i < n - 1; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//            count++;
//        }
//         
//    }
//    printf("%d\n", count);
//    return 0;
//}


