#include <stdio.h>
int main() {
float x = 7654.123456789f;
printf("%d %d %8d\n",1234,-567,8910);
printf("%d %3d %+8d\n",1234,-567,8910);
printf("%f %15f %15.3f\n",x,x,x);
printf("%g %15e %15.3f\n",x,x,x);
return 0;
}
