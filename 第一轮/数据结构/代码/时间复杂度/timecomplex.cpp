#include <cstdio>
#include <iostream>

using namespace std;

int sum = 0, n = 100;  /* 执行一次 */
sum = (1 + n) * n / 2; /* 执行一次 */
printf（ "%d", sum）;  /* 执行一次 */

int sum = 0, n = 100;    /* 执行1次 */
sum = （1 + n） * n / 2; /* 执行第1次 */
sum = （1 + n） * n / 2; /* 执行第2次 */
sum = （1 + n） * n / 2; /* 执行第3次 */
sum = （1 + n） * n / 2; /* 执行第4次 */
sum = （1 + n） * n / 2; /* 执行第5次 */
sum = （1 + n） * n / 2; /* 执行第6次 */
sum = （1 + n） * n / 2; /* 执行第7次 */
sum = （1 + n） * n / 2; /* 执行第8次 */
sum = （1 + n） * n / 2; /* 执行第9次 */
sum = （1 + n） * n / 2; /* 执行第10次 */
printf（ "%d", sum）;    /* 执行1次 */

n++;         /* 执行次数为1 */
function(n); /* 执行次数为n */
int i, j;
for (i = 0; i < n; i++) /* 执行次数为n×n */
{
    function(i);
}
for (i = 0; i < n; i++) /* 执行次数为n（n + 1）/2 */
{
    for (j = i; j < n; j++)
    {
        /* 时间复杂度为O(1)的程序步骤序列 */
    }
}
