https://www.acwing.com/file_system/file/content/whole/index/content/4186207/

小明在他的果园里种了一些苹果树，这些苹果树排列成一个圆。

为了保证苹果的品质，在种植过程中要进行疏果操作。

为了更及时地完成疏果操作，小明会不时地检查每棵树的状态，根据需要进行疏果。

检查时，如果发现可能有苹果从树上掉落，小明会重新统计树上的苹果个数（然后根据之前的记录就可以判断是否有苹果掉落了)。

在全部操作结束后，请帮助小明统计相关的信息。

输入格式
第 1
 行包含一个正整数 N
，表示苹果树的棵数。

第 1+i
 行( 1≤i≤N
)，每行的格式为 mi,ai1,ai2,…,aimi
。其中，第一个正整数 mi
 表示本行后面的整数个数。后续的 mi
 个整数表示小明对第 i
 棵苹果树的操作记录。若 aij(1≤j≤mi)
 为正整数，则表示小明进行了重新统计该棵树上的苹果个数的操作，统计的苹果个数为 aij
；若为零或负整数，则表示一次疏果操作，去掉的苹果个数是 |aij|
。

输入保证一定是正确的，满足:

ai1>0
，即对于每棵树的记录，第一个操作一定是统计苹果个数（初始状态，此时不用判断是否有苹果掉落)；
每次疏果操作保证操作后树上的苹果个数仍为正。
输出格式
输出只有一行，包含三个整数 T、D、E
。其中，

T
 为全部疏果操作结束后所有苹果树上剩下的苹果总数（假设每棵苹果树在最后一次统计苹果个数操作后苹果不会因为疏果以外的原因减少);
D
 为发生苹果掉落的苹果树的棵数;
E
 为相邻连续三棵树发生苹果掉落情况的组数。
对于第三个统计量的解释：N
 棵苹果树 A1,A2,…,AN
 排列成一个圆，那么 A1
 与 A2
 相邻，A2
 与 A3
 相邻，......，AN−1
 与 AN
 相邻，AN
 与 A1
 相邻。如果 Ai−1,Ai,Ai+1
 这三棵树都发生了苹果掉落的情况，则记为一组。形式化的，有

E=|{Ai|Drop(Pred(Ai))∧Drop(Ai)∧Drop(Succ(Ai))}|

其中，Drop(Ai)
 表示苹果树 Ai
 是否发生苹果掉落的情况，Pred(Ai)
 表示 Ai
 的前一棵树 Ai−1
 （如果 i>1
）或者 AN
（如果 i=1
），Succ(Ai)
 表示 Ai
 的后一棵树 Ai+1
（如果 i<N
）或者 A1
（如果 i=N
）。

数据范围![image](https://github.com/user-attachments/assets/ed3f01c0-805e-4a00-9853-ddfb27fcb59c)
mi≤1000
,对于所有 1≤i≤N
。
|aij|≤106
，对于所有 1≤i≤N,1≤j≤mi
。

输入样例1：
4
4 74 -7 -12 -5
5 73 -8 -6 59 -4
5 76 -5 -10 60 -2
5 80 -6 -15 59 0
输出样例1：
222 1 0
样例1解释
全部操作结束后，第 1
 棵树上剩下的苹果个数为 74−7−12−5=50
，第 2
 棵为 59−4=55
，第 3
 棵为 60−2=58
，第 4
 棵为 59−0=59
。

因此 T=50+55+58+59=222
。

其中，第 3
 棵树在第 2
 次统计之前剩下的苹果个数为 76−5−10=61>60
，因此发生了苹果掉落的情况。

可以检验其他的树没有这种情况，因此 D=1
。

没有连续三棵树都发生苹果掉落的情况，因此 E=0
。

输入样例2：
5
4 10 0 9 0
4 10 -2 7 0
2 10 0
4 10 -3 5 0
4 10 -1 8 0
输出样例2：
39 4 2
样例2解释
第 1、2、4、5
 棵树发生了苹果掉落的情况，因此 D=4
。

其中，连续三棵树都发生苹果掉落情况的有 (5,1,2)
 和 (4,5,1)
，因此 E=2
。
