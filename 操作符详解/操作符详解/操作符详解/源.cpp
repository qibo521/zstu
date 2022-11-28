#include<stdio.h>//ÊÖ»úC
int m = 33, n = 66;
m = m ^ n; n = n ^ m; m = m ^ n;
printf("%d", m, n);


