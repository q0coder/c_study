#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int n = 0, m;
//    int arr1[3][3];
//    int arr2[3][3];
//    int count = 0;
//    scanf("%d%d", &m, &n);
//    for (size_t i = 0; i < m; i++)
//    {
//        for (size_t j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (size_t i = 0; i < m; i++)
//    {
//        for (size_t j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//
//    }
//    for (size_t i = 0; i < m; i++)
//    {
//        for (size_t j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//
//    }
//    float e = (count / (float)(m*n)) * 100.0;
//    printf("%.2f", e);
//    return 0;
//
//}


//#include <stdio.h>
//#include<string.h>
//int main() {
//    char arr1[20];
//    int i = 0;
//    char arr2[20] = { "admin admin" };
//    fgets(arr1, 20, stdin);
//    while (1)
//    {
//        if (arr1[i] == '\n')
//        {
//            arr1[i] = '\0';
//            break;
//        }
//        i++;
//    }
//    if (strcmp(arr1, arr2) == 0)
//        printf("Login Success!\n");
//    else
//        printf("Login Fail!\n");
//    return 0;
//}


//
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    int flag = 1;
//    int count = 0;
//    for (size_t i = 1; i <= 2019; i++)
//    {
//        a = i;
//        while (1)
//        {
//            if (a == 0)
//                break;
//            b = a % 10;
//            if (b == 9)
//            {
//                flag = 0;
//                count++;
//                break;
//            }
//            a /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//

//#include <stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//    return (*(int*)e1 - *(int*)e2);
//}
//int main() {
//    int a, b;
//    scanf("%d", &a);
//    int arr[7 + 1];
//    for (size_t i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &b);
//    arr[a] = b; 
//        qsort(arr, 8, 4, cmp);
//    for (size_t i = 0; i <= a; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int arr[10];
//    for (size_t i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int j = 9; j >= 0; j--)
//    {
//        printf("%d ", arr[j]);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//    return (*(int*)e1- *(int*)e2);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[6];
//    for (size_t i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int b = 0;
//    scanf("%d", &b);
//    for (size_t i = 0; i < n; i++)
//    {
//        if (b == arr[i])
//            arr[i] = 0;
//    }
//    qsort(arr, n, 4, cmp);
//    for (size_t i = 1; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//   
//    float s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
//    float arr1[5];
//    float arr2[5];
//    float arr3[5];
//    float arr4[5];
//    float arr5[5];
//    for (size_t i = 0; i < 5; i++)
//    {
//        scanf("%f", &arr1[i]);
//        s1 += arr1[i];
//    }
//    for (size_t i = 0; i < 5; i++)
//    {
//        scanf("%f", &arr2[i]);
//        s2 += arr2[i];
//    }for (size_t i = 0; i < 5; i++)
//    {
//        scanf("%f", &arr3[i]);
//        s3 += arr3[i];
//    }for (size_t i = 0; i < 5; i++)
//    {
//        scanf("%f", &arr4[i]);
//        s4 += arr4[i];
//    }
//    for (size_t i = 0; i < 5; i++)
//    {
//        scanf("%f", &arr5[i]);
//        s5 += arr5[i];
//    }
//    for (size_t i = 0; i < 5; i++)
//    {
//        printf("%.1f ", arr1[i]);
//    }
//    printf("%.1f\n", s1);
//    for (size_t i = 0; i < 5; i++)
//    {
//        printf("%.1f ", arr2[i]);
//    }
//    printf("%.1f\n", s2);
//    for (size_t i = 0; i < 5; i++)
//    {
//        printf("%.1f ", arr3[i]);
//    }
//    printf("%.1f\n", s3);
//    for (size_t i = 0; i < 5; i++)
//    {
//        printf("%.1f ", arr4[i]);
//    }
//    printf("%.1f\n", s4);
//    for (size_t i = 0; i < 5; i++)
//    {
//        printf("%.1f ", arr5[i]);
//    }
//    printf("%.1f\n", s5);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int m = 0, n = 0;
//    scanf("%d%d", &n, &m);
//    int arr[1][2];
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x = 0, y = 0;
//    scanf("%d%d", &x, &y);
//    printf("%d\n", arr[x - 1][y - 1]);
//    return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1,const void* e2)
//{
//    return (*(int*)e1 - *(int*)e2);
//}
//int main() {
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[2][2];
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    qsort(arr, 4, 4, cmp);
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    int n, m;
//    int i = 0, j = 0;
//    scanf("%d%d", &n, &m);
//    int arr[2][2];
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    char t;
//    int a1, a2;
//    scanf(" %c%d%d", &t, &a1, &a2);
//    for (size_t i = 0; i < k; i++)
//    {
//        if (t == 'r')
//        {
//            for (size_t j = 0; j < m; j++)
//            {
//                int tmp = arr[a1 - 1][j];
//                arr[a1 - 1][j] = arr[a2 - 1][j];
//                arr[a2 - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (size_t i = 0; i < n; i++)
//            {
//                int tmp = arr[i][a1 - 1];
//                arr[i][a1 - 1] = arr[i][a2 - 1];
//                arr[i][a2 - 1] = tmp;
//            }
//        }
//
//    }
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//



//#include <stdio.h>
//
//int main() {
//    char arr[3][3];
//    for (size_t i = 0; i < 3; i++)
//    {
//        for (size_t j = 0; j < 3; j++)
//        {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//
//    for (size_t i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == 'K' && arr[i][1] == 'K' && arr[i][2] == 'K')
//            printf("KiKi wins!\n");
//        if (arr[i][0] == 'B' && arr[i][1] == 'B' && arr[i][2] == 'B')
//            printf("BoBo wins!\n");
//    }
//    for (size_t j = 0; j < 3; j++)
//    {
//        if (arr[0][j] == 'K' && arr[1][j] == 'K' && arr[2][j] == 'K')
//            printf("KiKi wins!\n");
//        if (arr[0][j] == 'B' && arr[1][j] == 'B' && arr[2][j] == 'B')
//            printf("BoBo wins!\n");
//    }
//    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'K')
//        printf("KiKi wins!\n");
//    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'B')
//        printf("BoBo wins!\n");
//    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == 'K')
//        printf("KiKi wins!\n");
//    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == 'B')
//        printf("BoBo wins!\n");
//
//    return 0;
//}



//#include <stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//    return (*(int*)e1 - *(int*)e2);
//}
//int main() {
//    long long n = 0;
//    scanf("%lld", &n);
//    long long arr[5];
//
//    for (size_t i = 0; i < n; i++)
//    {
//        scanf("%lld", &arr[i]);
//    }
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < n; j++)
//        {
//            if (arr[i] == arr[j] && i != j)
//                arr[i] = 0;
//        }
//    }
//    qsort(arr, n, 8, cmp);
//    for (size_t i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%lld ", arr[i]);
//    }
//
//    return 0;
//}