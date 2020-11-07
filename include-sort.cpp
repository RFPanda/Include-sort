#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <locale.h> 
#include <iostream>
using namespace std;
void Sort(int n, int mass[]){
  int j, k;
  for (int i = 1; i < n; i++)
  {
    j = mass[i];
    k = i - 1;
    while (k >= 0 && mass[k] > j)
    {
      mass[k + 1] = mass[k];
      k = k - 1; }
    mass[k + 1] = j;
  }}

int main()
{setlocale(LC_ALL, "rus");
  int n;
  cout << "Введите размер массива до 500: ";
  cin>> n;
  int mass[500];
  cout << "Введите элементы массива: ";
  for (int i = 0; i < n; i++)
    cin >> mass[i];
  Sort(n, mass);
  cout << "Отсортированный массив: ";
  for (int i = 0; i < n; i++)
    cout << mass[i]<<" ";
  printf("\n");
  return 0;}
