// Rabota2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <locale.h>
#include <vector>
#include <algorithm>

using namespace std;

				//1.	В целочисленном массиве k(n), заданном случайным образом, 
				//много повторяющихся элементов.Найти(в процентах) частоту появления 
				//каждого из m наиболее часто встречающихся элементов(m << n).

//struct pointer{
//	int value;
//	int *mas;
//	struct pointer *next;
//};
//
//void newelem(int *value);
//
//int maxsize, numbersize;
//int *m, *k;
//struct pointer *head = new  pointer;
//struct pointer *q = new  pointer;
//
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	srand(time(0));
//
//	
//	head->value = 0;
//	head->mas = NULL;
//	head->next = NULL;
//	numbersize =10+rand()%100;
//	maxsize = 100+rand()%1000;
//	
//
//	int *m = new int[maxsize];
//	int *k = new int[numbersize];
//
//	for (int i = 0; i < numbersize; i++)
//		k[i] = 0;
//
//	for (int i = 0; i < maxsize; i++) 
//	{
//		m[i] =rand() % numbersize;
//		k[m[i]]++;
//	}
//
//	for (int i = 0; i < numbersize; i++) 
//	{
//		newelem(&k[i]);
//	}
//
//	q = head;
//
//	for (int i = 0; i < 3; i++) 
//	{
//		
//        int a=q->mas-k;
//		double o = (double)(q->value);
//		o = (double)(o / (double)((double) (maxsize) / 100));
//		printf("%d часто встречающийся элемент %d \n",i+1,a);
//		printf("Процент появления %d \n", (int)(o) );
//		q = q->next;
//	}
//
//	free(m);
//	free(k);
//	free(head);
//	free(q);
//
//	getchar();
//
//    return 0;
//}
//
//void newelem(int *value) 
//{
//		if (head->value < *value)
//		{
//			struct pointer *p = new  pointer;
//			p->next = head;
//			p->value = *value;
//			p->mas = value;
//			head = p;
//		}
//		else
//		{
//			if (head->next==NULL)
//			{
//				struct pointer *p = new pointer;
//				p->mas = value;
//				p->value = *value;
//				p->next = NULL;
//				head->next = p;
//			}
//			else
//			{
//				struct pointer *p = new pointer;
//				struct pointer *cur = new pointer;
//				p = head->next;
//				while (p == NULL || p->value > *value)
//				{
//					cur = p;
//					p = p->next;
//				}
//
//				struct pointer *temp = new pointer;
//				temp->mas = value;
//				temp->value = *value;
//				temp->next = p;
//				cur->next = temp;
//			}
//		}
//}

					/*2.	Медиана.В массиве a(2n + 1), не содержащем одинаковых элементов, 
					найти средний по величине элемент, то есть такой, что в массиве a ровно n элементов 
					меньше его и столько же элементов больше его.Массив a сохранить(не сортировать), 
					дополнительных массивов не использовать.*/
//struct str
//{
//	int value;
//	struct str *next;
//};
//
//int* m,*k,massize,numbersize;
//struct str *head = new str;
//
//void add(int *value);
//
//int main()
//{
//	srand(time(0));
//	setlocale(LC_ALL, "RUS");
//	head->value = 0;
//	head->next = NULL;
//
//	massize = 50 + rand() % 200;
//	numbersize = (massize*2);
//
//	if (massize % 2 == 0)
//		massize++;
//
//	int *m = new int[massize];
//	int *k = new int[numbersize];
//
//	for (int i = 0; i < numbersize; i++)
//		k[i] = 0;
//
//	for (int i = 0; i < massize; i++) 
//	{
//		int q = rand() %numbersize;
//		while (k[q]>0)
//		{
//			q = rand() %numbersize;
//		}
//		k[q]++;
//		m[i] = q;
//
//	}
//	free(k);
//	for (int i = 0; i < massize; i++)
//	{
//		add(&m[i]);
//	}
//
//	struct str *p = new str;
//	p = head;
//
//	for (int i = 0; i <((massize-1)/2) ; i++)
//	{
//		p = p->next;
//	}
//
//	printf("Средний элемент равен %d \n", p->value);
//
//	p = head;
//	printf("Весь ммассив: \n");
//	for (int i = 0; i < massize; i++) 
//	{
//		printf(" %d \n", p->value);
//		p = p->next;
//	}
//
//	getchar();
//return 0;
//}
//
//
//void add(int *value) 
//{
//	
//	
//		if (head->value == 0)
//			head->value = *value;
//		else
//		{
//			if (head->value < *value) 
//			{
//				struct str *p = new str;
//				p->value = *value;
//				p->next = head;
//				head = p;
//			}
//			else
//			{
//				if (head->next == NULL)
//				{
//					struct str *p = new str;
//					p->next = NULL;
//					p->value = *value;
//					head->next = p;
//				}
//				else
//				{
//					struct str *p = new str;
//					struct str *cur = new str;
//					cur = head;
//					p = head->next;
//					
//					while (p->value > *value)
//					{
//						cur = p;
//						p = p->next;
//						if (p == NULL)
//							break;
//					}
//						
//					struct str *temp = new str;
//					temp->value = *value;
//					temp->next = p;
//					cur->next = temp;
//				}
//			}
//		}
//	
//}