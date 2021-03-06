# task_schedule

问题是将相同的字母隔开n个位置，求最少需要多少位置。

思路：
将m个不同的字母以n的步长隔开，需要(m-1)*(n+1)+1个位置。则在此题目中，先将个数最多的字母挑选出来，其个数记为count，则目前最少需要的位置为
(count-1)*(n+1)+1。然后遍历整个map，如果有个数等于count的字母，说明它也少一个位置，则位置++。
注意，个数小于count的，可以依次填充在空位上。如果空位不够，则再开辟一个空位，说明没有一个多余的位置，每个位置都有字母，即为数组长度的位置。
相同的可被隔开（个数不会超过count），不同的直接添加在末尾。
返回值为max(计算所得位置，数组大小）。
