#include <stdio.h>

// 可自定义段，并在段内存入变量
int tmpVar __attribute__((__section__(".selfvar"))) = 1000;

// 或者指定在某一段内定义函数
static int __attribute__((__section__(".init"))) Add(int A, int B) {
  return A+B;
}

int main(void) {
  int a, b, c;
  a = 10;
  b = 15;
  c = Add(a, b);
  printf("%d", c);
  return 0;
}
