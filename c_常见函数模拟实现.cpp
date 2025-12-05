#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//size_t my_strlen(const char* str)
//{
//    size_t len = 0;
//    while (str[len] != '\0')
//    {
//        len++;
//    }
//    return len;
//}



//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    while ((*dest++ = *src++) != '\0')
//        ;
//    return ret;
//}



//char* my_strcat(char* dest, const char* src) 
//{
//    char* ret = dest;   
//    while (*dest != '\0')
//    {
//        dest++;//因为是从其末尾开始追加，所以我们要先找到其末尾
//    }
//    while ((*dest++ = *src++) != '\0')
//        ;
//    return ret;
//}




//int my_strcmp(const char* str1, const char* str2) 
//{
//    while (*str1 == *str2) 
//    {
//        if (*str1 == '\0')
//        {
//            return 0;
//        }
//        str1++;
//        str2++;
//    }
//    return *(unsigned char*)str1 - *(unsigned char*)str2;
//}

//#include <stdio.h>

//char* my_strstr(const char* str1, const char* str2)
//{
//    const char* p = str1;
//    while (*p != '\0')
//    {
//        const char* temp_1 = p;
//        const char* temp_2 = str2;
//        while (*str1 == *str2 && *str2 != '\0') 
//        {
//            str1++;
//            str2++;
//        }
//        if (*str2 == '\0')
//        {
//            return (char*)p;  
//        }
//        p++;  
//    }
//    return NULL;  
//}


//#include <stdio.h>
//#include <string.h>   
//#include <stdlib.h>    
//void bubble_qsort(void* base, size_t nmemb, size_t size,
//    int (*compar)(const void*, const void*)) {
//    if (base == NULL || nmemb <= 1 || size == 0 || compar == NULL) {
//        return;  
//    }
//    char* arr = (char*)base;  
//    void* temp = malloc(size);
//    if (temp == NULL) {
//        return;  
//    }
//    for (size_t i = 0; i < nmemb - 1; i++) {
//        int swapped = 0;
//        for (size_t j = 0; j < nmemb - 1 - i; j++) {
//            void* elem1 = arr + j * size;
//            void* elem2 = arr + (j + 1) * size;
//            if (compar(elem1, elem2) > 0) { 
//                memcpy(temp, elem1, size);
//                memcpy(elem1, elem2, size);
//                memcpy(elem2, temp, size);
//                swapped = 1;
//            }
//        }
//        if (!swapped) break;  
//    }
//    free(temp);
//}

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp) (const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width);
//				flag = 0;
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//	}



//#include <stdio.h>
//
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//    char* d = (char*)dest;         
//    const char* s = (const char*)src;
//    for (size_t i = 0; i < n; i++) {
//        d[i] = s[i];
//    }
//    return dest;
//}


//
//void* my_memset(void* s, int c, size_t n) 
//{
//    unsigned char* p = (unsigned char*)s;
//    unsigned char value = (unsigned char)c;  // 只取低 8 位
//    for (size_t i = 0; i < n; i++) {
//        p[i] = value;
//    }
//    return s;
//}


//int my_memcmp(const void* s1, const void* s2, size_t n) 
//{
//    const unsigned char* p1 = (const unsigned char*)s1;
//    const unsigned char* p2 = (const unsigned char*)s2;
//    while (n-- > 0) 
//    {
//        if (*p1 != *p2) 
//        {
//            return *p1 - *p2;  
//        }
//        p1++;
//        p2++;
//    }
//    return 0;
//}