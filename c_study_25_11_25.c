#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	char n;
//	FILE* p=fopen("test.txt", "w");//r表示读,无法写入
//	//perror(fopen);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputc('a', p);
//	fclose(p);
//	p = NULL;
//	 p = fopen("test.txt", "r");
//	n=fgetc(p);
//	printf("%c", n);
//	
//	return 0;
//}




//int main()
//{
//	file* p = fopen("test.txt", "r");
//	if (p == null)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	
//	
//	char arr[20];
//	fgets(arr, 20, p);
//	printf("%s\n", arr);
//	return 0;
//}





//struct S
//{
//	char name[20];
//	int age;
//	int score;
//
//}s;
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	struct S s = { "zhangsan",18,100 };
//	fprintf(stdout, "%s %d %d", s.name, s.age, s.score);
//	//struct S s = { 0 };
//	//fscanf(p, "%s %d %d", s.name, &(s.age), &(s.score));
//	//printf("%s %d %d\n", s.name, s.age, s.score);
//	fclose(p);
//	p = NULL;
//	return 0;
//}




//struct S
//{
//	char name[20];
//	int age;
//	int score;
//
//}s;
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	/*struct S s = { "zhangsan",18,100 };
//	fwrite(&s, sizeof(struct S), 1, p);
//	fclose(p);*/
//	struct S s = { 0 };
//	fread(&s, sizeof(struct S),1,p );
//	printf("%s %d %d\n", s.name, s.age, s.score);
//	p = NULL;
//	return 0;
//}




//struct S
//{
//	char name[20];
//	int age;
//	int score;
//
//}s;
//int main()
//{
//	
//	struct S s = {"zhangsan",20,100};
//	struct S x = { 0 };
//	//printf("%s %d %d\n", s.name, s.age, s.score);
//	char ch[100];
//	sprintf(ch, "%s %d %d\n", s.name, s.age, s.score);
//	printf("%s\n", ch);
//	sscanf(ch, "%s %d %d", x.name, &x.age, &x.score);
//	printf("%s %d %d\n", x.name, x.age, x.score);
//	return 0;
//}



//int main()
//{
//	FILE* p=fopen("test.txt", "r");
//	fseek(p, 2, SEEK_SET);
//	int ch=fgetc(p);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(p));
//	fseek(p, 2, SEEK_CUR);
//	ch = fgetc(p);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(p));
//	rewind(p);
//	ch = fgetc(p);
//	printf("%c\n", ch);
//	return 0;
//}



//int main()
//{
//	int a = 10000;
//	FILE*p=fopen("test.txt", "wb");
//	if (p==NULL)
//	{
//		perror("fopen");
//	}
//	fwrite(&a, 4, 1, p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int c = 0;
//	FILE* p = fopen("test.txt", "r");
//	if (!p)
//	{
//		perror("fopen");
//		return 1;
//	}
//	while ((c = fgetc(p)) != EOF)
//	{
//		putchar(c);
//	}
//	printf("\n");
//	if (ferror(p))
//	{
//		perror("p");
//	}
//	else if (feof(p))
//	{
//		puts("end");fwrite
//	}
//	return 0;
//}




//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (!p)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		fprintf(p, "%d %d %s %s %s\n", i, __LINE__,__FILE__,  __DATE__, __TIME__);
//
//	}
//	fclose((p));
//	p = NULL;
//	return 0;
//}



//#define  L __LINE__
//#define  F __FILE__
//#define  D __DATE__
//#define  T __TIME__
//#define  f FILE
//#define FOR size_t i = 0; i < 10; i++
//
//int main()
//{
//	f* p = fopen("test.txt", "w");
//	if (!p)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (FOR)
//	{
//		fprintf(p, "%d %d %s %s %s\n", i, L,F,  D, T);
//
//	}
//	fclose((p));
//	p = NULL;
//	return 0;
//}








