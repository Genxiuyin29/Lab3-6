#include <stdio.h>

int main(void) {
  float r,h,area;

  printf("Enter Radius : ");
  scanf("%f",&r);
  printf("Enter Hight : ");
  scanf("%f",&h);

  area = (2*3.14*r)*h+2*(3.14*r*r);

  printf("Area = %0.2f",area);
  return 0;
}