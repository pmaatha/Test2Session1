#include <stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the points\n");
  scanf("%f,%f,%f,%f,%f,%f",x1,y1,x2,y2,x3,y3);
  
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int area;
area= (0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
  return area;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int is_triangle)
{
  if(is_triangle==0)
    printf("%d is not a triangle\n", is_triangle);
  else
    printf("%d is triangle\n", is_triangle);
}
int main()
{
  float x1,y1,x2,y2,x3,y3,area;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,area);
    return 0;
  
}
