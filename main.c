#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void z1()
{
int row, col, mcol, mrow = 9, n, m;
mcol = 9;
printf("\n");
for (row = 1, m = 1; m <= mrow; ++m) {
for (col = 1, n = 1; n <= mcol; n++)
printf("%5d", mcol);
mcol--;
printf("\n");
}
}
void z0()
{
int row, col, mcol, mrow = 9;
mcol = 1;
printf("\n");
for (row = 1 ; row <= mrow; ++row) {
for (col = 1 ; col <= mcol; col++)
printf("%5d", col * row);
printf("\n");
mcol++;
}
}
void z01()
{
int row, col = 1, mcol, mrow = 1;
mcol = 9;
printf("\n");
for (row = 9 ; row >= mrow; row--) {
for (col = 1; col <= row; col++)
printf("%5d", col * row);
printf("\n");
}
}
void main()
{
z1();
}
