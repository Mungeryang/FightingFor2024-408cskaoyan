# C/C++  FOR EVERYONR

​								**加州大学圣克鲁兹分校**&copy;copyright&reg;杨桂淼 	心水总结&trade;

> 你来的太晚了，但我转念一想，你来的又太及时了。———董宇辉	

## 运算符优先级

| **优先级** | **运算符**       | **名称或含义**           | **使用形式**             | **结合方向** | **说明**   |
| ---------- | ---------------- | ------------------------ | ------------------------ | ------------ | ---------- |
| **1**      | **[ ]**          | 数组下标                 | 数组名[常量表达式]       | 左到右       | –          |
| **()**     | 圆括号           | (表达式）/函数名(形参表) | –                        |              |            |
| **.**      | 成员选择（对象） | 对象.成员名              | –                        |              |            |
| **->**     | 成员选择（指针） | 对象指针->成员名         | –                        |              |            |
|            |                  |                          |                          |              |            |
| **2**      | **-**            | 负号运算符               | -表达式                  | **右到左**   | 单目运算符 |
| **~**      | 按位取反运算符   | ~表达式                  |                          |              |            |
| **++**     | 自增运算符       | ++变量名/变量名++        |                          |              |            |
| **–**      | 自减运算符       | –变量名/变量名–          |                          |              |            |
| *****      | 取值运算符       | *指针变量                |                          |              |            |
| **&**      | 取地址运算符     | &变量名                  |                          |              |            |
| **!**      | 逻辑非运算符     | !表达式                  |                          |              |            |
| **(类型)** | 强制类型转换     | (数据类型)表达式         | –                        |              |            |
| **sizeof** | 长度运算符       | sizeof(表达式)           | –                        |              |            |
|            |                  |                          |                          |              |            |
| **3**      | **/**            | 除                       | 表达式/表达式            | 左到右       | 双目运算符 |
| *****      | 乘               | 表达式*表达式            |                          |              |            |
| **%**      | 余数（取模）     | 整型表达式%整型表达式    |                          |              |            |
| **4**      | **+**            | 加                       | 表达式+表达式            | 左到右       | 双目运算符 |
| **-**      | 减               | 表达式-表达式            |                          |              |            |
| **5**      | **<<**           | 左移                     | 变量<<表达式             | 左到右       | 双目运算符 |
| **>>**     | 右移             | 变量>>表达式             |                          |              |            |
|            |                  |                          |                          |              |            |
| **6**      | **>**            | 大于                     | 表达式>表达式            | 左到右       | 双目运算符 |
| **>=**     | 大于等于         | 表达式>=表达式           |                          |              |            |
| **<**      | 小于             | 表达式<表达式            |                          |              |            |
| **<=**     | 小于等于         | 表达式<=表达式           |                          |              |            |
| **7**      | **==**           | 等于                     | 表达式==表达式           | 左到右       | 双目运算符 |
| **！=**    | 不等于           | 表达式!= 表达式          |                          |              |            |
|            |                  |                          |                          |              |            |
| **8**      | **&**            | 按位与                   | 表达式&表达式            | 左到右       | 双目运算符 |
| **9**      | **^**            | 按位异或                 | 表达式^表达式            | 左到右       | 双目运算符 |
| **10**     | **\|**           | 按位或                   | 表达式\|表达式           | 左到右       | 双目运算符 |
| **11**     | **&&**           | 逻辑与                   | 表达式&&表达式           | 左到右       | 双目运算符 |
| **12**     | **\|\|**         | 逻辑或                   | 表达式\|\|表达式         | 左到右       | 双目运算符 |
|            |                  |                          |                          |              |            |
| **13**     | **? :**          | 条件运算符               | 表达式1?表达式2: 表达式3 | **右到左**   | 三目运算符 |
|            |                  |                          |                          |              |            |
| **14**     | **=**            | 赋值运算符               | 变量=表达式              | **右到左**   | –          |
| **/=**     | 除后赋值         | 变量/=表达式             | –                        |              |            |
| ***=**     | 乘后赋值         | 变量*=表达式             | –                        |              |            |
| **%=**     | 取模后赋值       | 变量%=表达式             | –                        |              |            |
| **+=**     | 加后赋值         | 变量+=表达式             | –                        |              |            |
| **-=**     | 减后赋值         | 变量-=表达式             | –                        |              |            |
| **<<=**    | 左移后赋值       | 变量<<=表达式            | –                        |              |            |
| **>>=**    | 右移后赋值       | 变量>>=表达式            | –                        |              |            |
| **&=**     | 按位与后赋值     | 变量&=表达式             | –                        |              |            |
| **^=**     | 按位异或后赋值   | 变量^=表达式             | –                        |              |            |
| **\|=**    | 按位或后赋值     | 变量\|=表达式            | –                        |              |            |
|            |                  |                          |                          |              |            |
| **15**     | **，**           | 逗号运算符               | 表达式,表达式,…          | 左到右       | –          |

所以在定义并使用结构体指针的时候，不像调用普通的结构体那样struct.attribute,而是struct->attribute；就是因为运算符的优先级不同。

## **Different from stdio.h and standard.io**

Standard I/O. The pre-process command brings in both printf and now scanf. 

Scanf is a basic routine for doing input. 

By default, most cases we will come from our keyboard.

 **PI.C**

In our case, standard input is defaulted to the computer keyboard. Here we see another directive. It's called a defined directive. 

The define directive does an interesting thing. In our case, standard input is defaulted to the computer keyboard. Here we see another directive. It's called a defined directive. The define directive does an interesting thing.we want this to be documentation.we introduce a program, which is main. We begin with what's called the open brace for a compound statement. The first statement is a declaration statement.

```c
#include<stdio.h>

//define后面不加分号
#define PI 3.1415926

int main(void){
	
	double area = 0.0,radius = 0.0;
	printf("please input the radiuse:\n");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("area = %f",area);
	
	return 0;
}
```

## Introduction

Output is a very important component of programming.

### stdio.h

we see stdio.h, and the .h is an extension that intent that means a header file, and that means that in this file which will be included automatically with our program. So it's called pre-processor because it happens before the C code is compiled. 

So extra code gets added, and that code is the code that we're going to **need for doing printf**. Without it the printf would be undeclared.

### Code process

**int** is a keyword meaning that the program **returns** an integer

**Void** is a keyword that would if it's used as a data type means it's an undefined data type, or in this case it means that the argument list is empty.

### **scanf**

if you don't fully understand it, the scanf, which gets us input.In this case, we want to look for the address of that variable, 

and addresses location in memory. Then here we do the computation. scanf() is found in  <stdio.h>;The & sign means  “store at the location of variable".

So it's very important, in your expressions, to know what domain you're in. By domain, I mean things like integer and double, 

because that's going to tell you what the arithmetic is being done in, and that arithmetic can affect the meaning of an operator, like divide. Divide can be an integer divide, if everything is integer, or it can be a floating point divided, if one of the arguments is floating point.

在学习C语言时，常常会发现有的scanf()里需要&，而有的不需要。

1. 当scanf函数后面接收的是一个地址的时候，此时不需要加“&”->例如传入数组
2. 当sacnf函数后面接收的不是一个地址、而是实际变量的时候，此时需要加“&”->例如传入单一变量

printf输出格式控制：printf(“%([flags ] [width ] [.prec ] [hIL ])type”,var);

对于格式字符串：以 %号开头，用于定义每个数据的输出格式：

d	以十进制形式输出 带 符号整数（正数不输出符号）

ld	输出长整型数

o	以八进制形式输出 无 符号整数（不输出前缀0）

x,X	以十六进制形式输出 无 符号整数（不输出前缀0x）

u	以十进制形式输出 无 符号整数

f	以小数形式输出单、双精度实数

lf	按long double类型输出

e,E	以指数形式输出单、双精度实数

g,G	按数据精度以%f或%e中较短的输出宽度输出单、双精度实数

c	输出单个字符

s	输出字符串

% [对齐方式] [输出最小宽度] 整数类型。对齐方式用默认为右对齐，若为"-"负号，则为左对齐；输出最小宽度n，若实际位数小于n，则补以空格或0。

% [输出最小宽度] [ . 精度] 实数类型	最小宽度n，包括整数，小数点及小数部分的总位数，默认右对齐，前加负号为左对齐；精度m，若实际位数大于m，则四舍五入截去超过部分，一般实数默认输出6位。

------------------------------------------------
版权声明：本文为CSDN博主「亲亲Friends」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/u014261408/article/details/90139849

版权声明：本文为CSDN博主「亲亲Friends」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。


## Lexical Elements and Data Types

### Character sets and tokens

1. A token can be an identifier

2. main is a legal identifier

3. A token can be punctuation such as ; 

4. A token can be an operator such as  + or /

### Comments

It's important for documentation and readability. In order to be able to maintain or modify the program and understand its use, we want the program to be literate. So we could let say, add some more comments if we want, let me add some other comments here.

### keywords

The table below lists all keywords reserved by the C language. When the current programming language is C or C++, these keywords cannot be abbreviated, used as variable names, or used as any other type of identifiers.

| `auto`     | `else`   | `long`     | `switch`   |
| ---------- | -------- | ---------- | ---------- |
| `break`    | `enum`   | `register` | `typedef`  |
| `case`     | `extern` | `return`   | `union`    |
| `char`     | `float`  | `short`    | `unsigned` |
| `const`    | `for`    | `signed`   | `void`     |
| `continue` | `goto`   | `sizeof`   | `volatile` |
| `default`  | `if`     | `static`   | `while`    |
| `do`       | `int`    | `struct`   | `_Packed`  |
| `double`   |          |            |            |

[**keywords**](https://en.cppreference.com/w/c/language/arithmetic_types#Character_types)

### identifiers

23 my_dna is not an identifier because the first character of that sequence is a digit, so that's not allowed. So digit is not allowed anywhere but in the first character. Underscores and alphabet are allowed anywhere including the first characters.

when you want something that's for counting, you can use i, j, and k. Also you frequently can use n as another underscored integer, those would all be good choices. 

### expression

->**自增自减的运算逻辑**

a = 5 b = 7

**++a + b++ = 13**

short, long, and unsigned. Short it means use less data. Long means you use more, a bigger range. So short can mean a smaller range typically, you're using fewer bytes.

If it was 2.0 divided by 3 or 2.0 divided by 3.0 or 2 divided by 3.0 where one of the arguments or both the arguments are double then indeed it would be in the floating point type. You would have a type of floater doubles and your result would be 0.666. So this mistake gets made often when you are thinking you want to do something like average over some integer data and you forget that dividing can be either an integer operation or a floating point operation, you can get a mistake. 

### List of Escape Sequences in C

| Escape Sequence |      Meaning       |
| :-------------: | :----------------: |
|       \a        |   Alarm or Beep    |
|       \b        |     Backspace      |
|       \f        |     Form Feed      |
|       \n        |      New Line      |
|       \r        |  Carriage Return   |
|       \t        |  Tab (Horizontal)  |
|       \v        |    Vertical Tab    |
|       \\        |     Backslash      |
|       \'        |    Single Quote    |
|       \"        |    Double Quote    |
|       \?        |   Question Mark    |
|      \nnn       |    octal number    |
|      \xhh       | hexadecimal number |
|       \0        |        Null        |

### int types

On your typical modern machine, an int is stored in 32-bits. That's 32 zeros and ones and to see even worthwhile especially if you're going to go into computer science to learn how to work in binary.

Now, when you're working with an end stored in 32-bits. Then what you can represent is limited and it's limited to plus or minus two billion, and I've written it out here explicitly. You can go positively up to 2,147, 436, 647 and your smallest number, your largest negative number, another way to put it is a 2,147,483,648. It's not symmetric because of the fancy way people represent integers on the machine. It's called a two's complement representation. Typically, the first bit is in fact the bit that affects how you interpret the sign.

Short it means use less data. Long means you use more, a bigger range. So short can mean a smaller range typically, you're using fewer bytes. You'll see in a second when I write an example that from my machine short is **two bytes**, ordinary, int is **four bytes** as we've already said, and then long will be **eight bytes**.

We can also use **u or U** and **l or L** to specify the type of an integer constant as an **unsigned long int**. 89ul - is of type unsigned long int.

Unsigned Integers (often called "uints") are just like integers (whole numbers) but have the property that they don't have a + or - sign associated with them. Thus they are always **non-negative** (zero or positive). We use uint's when we know the value we are counting will always be non-negative. For example, if we are counting the number of players in a game, we could use a uint because there will always be 0 or more players.

The format specifiers are used in C for input and output purposes. Using this concept the compiler can understand that what type of data is in a variable during taking input using the scanf() function and printing using printf() function. Here is a list of format specifiers.

| Format Specifier |             Type              |
| :--------------: | :---------------------------: |
|        %c        |           Character           |
|        %d        |        Signed integer         |
|     %e or %E     | Scientific notation of floats |
|        %f        |         Float values          |
|     %g or %G     |      Similar as %e or %E      |
|       %hi        |    Signed integer (short)     |
|       %hu        |   Unsigned Integer (short)    |
|        %i        |       Unsigned integer        |
| %l or %ld or %li |             Long              |
|       %lf        |            Double             |
|       %Lf        |          Long double          |
|       %lu        | Unsigned int or unsigned long |
|   %lli or %lld   |           Long long           |
|       %llu       |      Unsigned long long       |
|        %o        |     Octal representation      |
|        %p        |            Pointer            |
|        %s        |            String             |
|        %u        |         Unsigned int          |
|     %x or %X     |  Hexadecimal representation   |
|        %n        |        Prints nothing         |
|        %%        |      Prints % character       |

## Flow of control and simple functions

### The conditional statement if and if-else

在处理0/1逻辑运算时，if与while语句的简写等价表达：

```c
if(a)与if(a!=0)等价；while(a)表示当a!=0时执行循环，其等价于while(a!=0)
if(!a)与if(a==0)等价；while(!a)表示当a=0时执行循环，其等价于while(a==0)

```



when the first argument evaluates false, we needn't evaluate the second argument. So we avoid evaluating the second argument. 

That's called **short circuit evaluation**.

true table:

|      | T    | F    |
| ---- | ---- | ---- |
| T    | T    | F    |
| F    | F    | F    |

You should get out of it how to use an if-else. By the way, a simpler kind of statement is just an if, and the if-statement, you have if expression and then you execute the statement if it's true. So if you have an expression that evaluates to zero, then you omit the statement. Indeed you could have turned that if-else into two if-statements, but that would be not as elegant and also somewhat inefficient because you would be evaluating the relation speed less than 65 twice.

### The iterative statement while

What we do is recheck first to see if the expression is zero. If the expression is zero, the statement is not done. It's omitted and we just skip to whatever is next. We can think of that as false. Though really in C false is zero and true is non-zero. However, **if the expression is non-zero**, then we execute the statement that's sitting under the while. Then, we repeat. We go back and ask is the expression is zero we continue. That just keeps going until we see the expression is zero.

函数原型：int getchar(void);           返回类型为int,参数为void		头文件：#include<stdio.h>

返回值：getchar返回的是字符的ASCII码值（整数）。getchar在读取结束或者失败的时候，会返回EOF。(EOF意思是end of file,本质上是-1）

读取方式：只能输入字符型,输入时遇到回车键才从缓冲区依次提取字符。

结束输入的方式：以Enter结束输入（空格不结束），接受空格符。

舍弃回车符的方法：以Enter结束输入时，接受空格，会舍弃最后的回车符。

->while ((ch=getchar()) != 'EOF')

getchar先读取一个字符放到ch里面去，如果这个字符不等于EOF，就进入循环，打印这个字符。当getchar读到文件末尾或者结束时，它会返回一个EOF，此时结束循环。

The while loop expression	**while((c = getchar()) !=  EOF)**		is used to read a char from the input  until it sees the special value defined EOF.

EOF，为End Of File的缩写，通常在文本的最后存在此字符表示资料结束。C语言中，EOF常被作为文件结束的标志。还有很多文件处理函数处错误后的返回值也是EOF，因此常被用来判断调用一个函数是否成功。

### The for statement and its while analog

Keyword for expression 1; expression two ; and then expression 3.

e1 is most typically used as an initializer, just like in our simple example. e2 is typically, well, that's always the terminating condition. So if it's going to work and it's going to be over a finite number of times, then this f determinate, that's where you can make some interesting mistakes, and get what's called an infinite loop. So this has to be tested. e3 is typically, again, this all typical, the typical use is either increment or decrement. So the terminating condition frequently involves mostly an integer, expression of variable and then incrementing that integer or decrementing it leads to a termination condition. think about i++ and ++i.

```c
#include <stdio.h>
int main() {
   int i=5,j;
   j=i++;
   printf ("\nafter postfix increment i=%d j=%d", i,j);
   i=5;
   j=++i;
   printf ("\n after prefix increment i=%d j=%d",i,j);
   return 0;
}
```

the output is:

```
after postfix increment i=6 j=5
after prefix increment i=6 j=6
```

### oddball operators-conditional and comma

二目/三目运算的逻辑：

c = (a < b)? a:b

means: if a < b: c = a else c = a

->**express? expr1:expre2**

```c
#include<stdio.h>

int main(void){
	int speed;
	printf("Enter a speed as a integer:");
	scanf("%d",&speed);
	speed = (speed <= 65) ? (65):(speed <= 70) ? (70):(90);
	switch (speed) {
	case 65:
		//TODO
		printf("safe");
		break;
	case 70:
		//TODO
		printf("little dangerous");
		break;
	case 90:
		printf("very dangerous");
		break;
	default:
		//TODO
		printf("incorrect speed");
		break;
	}
	return 0;
}
```

### Break and continue and switch

break与continue的的用法以及区别：

1. 当它们用在循环语句做循环体时，break用于立即**退出本层循环**，而continue仅仅**结束本次循环**（本次循环体内不执continue语句后的其它语句，但下一次循环还会继续执行。
2. 如果有多层循环时，break只会跳出本层循环，不会跳出其他层的循环
3. break可用于switch语句，表示跳出整个switch语句块，而continue则不能单独的用于switch语句。但是continue可以用于循环内部的switch语句

In a switch statement, basically you switched on an integral expression. So simple one might be the integer i, and then you have a bunch of cases and those cases can,Be critical cases where you want to do different things depending on some small value of i.

what you're looking at syntactically is switch an **integral expression**, it can't be floating point, it must be integral. But it could be something like a short or a long in, or ASCII value for character.If there is no default, then you just don't do anything and you leave.

Switch多路选择结构，常用语三个及以上问题的多选方案。

```c
switch (speed) {
	case 65:
		//TODO
		printf("safe");
		break;
	case 70:
		//TODO
		printf("little dangerous");
		break;
	case 90:
		printf("very dangerous");
		break;
	default:
		//TODO
		printf("incorrect speed");
		break;
	}
```



## functions, recursion, arrays, and pointers

### types of functions

Functions are important because they are crucial to the reuse of code.They're especially crucial if they exist in libraries. Libraries like standardio.h, standardlive.h, these are universally useful libraries, and we don't have to rewrite them. So we have to understand how to use them.

Our syntax for a function. We have a types such as int or void. We have a function name, and the function name is a form of documentation like printf, or rand, or main. Then we have a parameter list. Then you have the body of the function, which is typically this bracing close what we call block. The block starts with a bunch of declarations if needed, and then a bunch of executable statements.

**void**

The function does not need any return statement

**int**

The function can return any value,the function exits at the end of its compound statement/block definition. 

### return

A return statement is a flow of control keyword return, and we've already seen it.

At the end of a function in **main**, what it's meaning is that main returns of **value zero**, but where does return it to? Main is the program that you're executing, it returns it to the operating system, and it's used by the operating system sometimes to figure out whether if there was an error in the program. So return of zero means *the program finished in an expected or orderly way*, a normal exit.

people generally when they're returning expression even if they don't need to, because of clarity stylistically they do use parenthesization.

## Storage class

[详解四种存储变量](https://blog.csdn.net/weixin_44426035/article/details/105867312?ops_request_misc=&request_id=&biz_id=102&utm_term=c%E8%AF%AD%E8%A8%80%E5%AD%98%E5%82%A8%E7%B1%BB%E5%9E%8B&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-1-105867312.142^v51^pc_rank_34_2,201^v3^add_ask&spm=1018.2226.3001.4187)



**auto**:This is the default storage class for all the variables declared inside a function or a block. Hence, the keyword auto is rarely used while writing programs in C language. Auto variables can be only accessed within the block/function they have been declared and not outside them (which defines their scope). Of course, these can be accessed within nested blocks within the parent block/function in which the auto variable was declared. However, they can be accessed outside their scope as well using the concept of pointers given here by pointing to the very exact memory location where the variables reside. They are assigned a garbage value by default whenever they are declared. *在函数体中声明则只能在当前函数体中使用,在main函数以及其他函数外声明即为全局变量*

**extern:**Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used. Basically, the value is assigned to it in a different block and this can be overwritten/changed in a different block as well. So an extern variable is nothing but a global variable initialized with a legal value where it is declared in order to be used elsewhere. It can be accessed within any function/block. Also, a normal global variable can be made extern as well by placing the ‘extern’ keyword before its declaration/definition in any function/block. This basically signifies that we are not initializing a new variable but instead we are using/accessing the global variable only. The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program. For more information on how extern variables work, have a look at this [link](https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/). *如果一个文件调用另一个文件中的变量，则在调用文件中需要使用extern声明变量*

**static**:This storage class is used to declare static variables which are popularly used while writing programs in C language. Static variables have the property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope. So we can say that they are initialized only once and exist till the termination of the program. Thus, no new memory is allocated because they are not re-declared. Their scope is local to the function to which they were defined. Global static variables can be accessed anywhere in the program. By default, they are assigned the value 0 by the compiler.*静态变量如果没有被初始化，则自动初始化为0。静态变量只能够初始化一次*

**register:**This storage class declares register variables that have the same functionality as that of the auto variables. The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free registration is available. This makes the use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program. If a free registration is not available, these are then stored in the memory only. Usually few variables which are to be accessed very frequently in a program are declared with the register keyword which improves the running time of the program. An important and interesting point to be noted here is that we cannot obtain the address of a register variable using pointers. *声明为register的变量在由内存调入到CPU寄存器后，则常驻在CPU的寄存器中*

### recursion->递归

In the recursive case, we have a test to see if we're what we're going to call the base case.So if we're at the base case, n equals zero and we're going to print blastoff. If we're not at the base case, then we have to do the recursion.

## Pointers and  Arrays

> 认真学好指针！

### array

Int data square bracket, a hundred square bracket, semicolon. So as with normal declaration is a types this could be any of the standard types like double long char and identifier that should indicate what we're processing. 

```c
//数组创建：int是数组类型；arr是名字；100是数组长度
int arr[100];
//string数组
char str[] = "abc";
```

Wi-Ki:

**Recursion** (adjective: *recursive*) occurs when a thing is defined in terms of itself or of its type. Recursion is used in a variety of disciplines ranging from [linguistics](https://en.wikipedia.org/wiki/Linguistics) to [logic](https://en.wikipedia.org/wiki/Logic). The most common application of recursion is in [mathematics](https://en.wikipedia.org/wiki/Mathematics) and [computer science](https://en.wikipedia.org/wiki/Computer_science), where a [function](https://en.wikipedia.org/wiki/Function_(mathematics)) being defined is applied within its own definition. While this apparently defines an infinite number of instances (function values), it is often done in such a way that no infinite loop or infinite chain of references ("crock recursion") can occur.

```c
#include<stdio.h>

int main(void){
	
	const int SIZE = 5;
	int grades[5] = {78, 57, 85, 99, 66};
	double sum = 0.0;
	double ave = 0.0;
	printf("my scores are:\n");
	for(int i = 0;i < SIZE;i++){
		sum += grades[i];
	}
	printf("sum=%lf\n",sum);
	ave = sum / SIZE;
	printf("ave=%lf\n",ave);
	return 0;

}
```

### pointers-传说中的指针

简而言之，指针只有两大重要作用：传递和偏移。

Exactly how is an **array stored** in memory? What we have to understand is an array has a place where it's stored and it starts at what's called its base address. That's because we want a bunch of elements. 

理解指针就要理解数组在计算机中的存储原理和地址的含义

we have to have a place to start, and then it runs contiguously through as much memory as is needed. That gets allocated automatically in this case by the compiler. The array has a very strong relationship with another data type called a pointer.

 A simple data type like an integer, when we say integer a inside a block, it means create a variable in memory. So when we think of a variable, we think of its name. That's how we use it in the code but we think it has a location and memory, and inside that location is some stored value interpreted as an integer. So an address calculation for an array in C, base address plus the offset, the index times the size required, the size in bytes required to store that individual datatype.

But if you just want to be a simple programmer, it may be enough to just understand that indexing works for you. But really to get to the next level, you want to really understand the notion of address.

If we tried to print the value of P, we would get some address. If we were to dereference it, star is a dereferencing. If we were to dereference P, the value there would be the integer value。

Very important that you get to understand pointer, variable, memory address.

### 函数	值传递VS引用传递

call--by-value 按值调用

call by reference 引用调用

```c
#include<stdio.h>
#include<stdlib.h>

int SumArr(int A[]){
	
	int i,sum = 0;
	int size = sizeof(A)/sizeof(A[0]);
	printf("Subfunc - size of A =%d,size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
	for(i = 0;i < size;i++){
		sum += A[i];
	}
}

int main(void){
	
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = SumArr(A);
	printf("the sum = %d\n",total);
	printf("mian - size of A =%d,size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
	return 0;
	
}
```

在子函数中，只是拷贝的主函数中数组的首地址，而不是把主函数中所有的数组元素传入到子函数的数组中。无论是传入普通类型还是指针类型。

When using a reference declaration in a function header to simulate call-by-reference, it means the referenced variable in the calling environment can be changed.

Keep in mind this is what scanf() does.  

Unlike many programming languages an array name in C is just a pointer to a base address and there is no way to know its size.  

了解一下变量类型在数组中所占有的内存大小：

| types |  size   |
| :---: | :-----: |
|  int  | 4-bytes |
| char  | 1-bytes |
| float | 4-bytes |

```c
int main{
    int a  =5;
    int *p;
    p = &a;//p就是a的地址
    printf("%p",p);//指针变量
    printf("%p",&a);//a的地址
    printf("%p",&p);//指针p的地址-“地址的地址”
    printf("%d",*p);//指针的解引用-Dereference
}
```



#### 指针的偏移

```c
	int arr[] = {12,23,34};
	int *p = arr;
	printf("%p\n",&arr[1]);
	printf("%p\n",arr+1);
	printf("%p\n",&arr+1);//&arr+1是跳过了整个数组去寻值
	printf("%p\n",p+1);
	printf("%d\n",p[1]); 
	printf("%d",*(p+2));
```



### 动态内存申请

引入**#include<stdlib.h>**，头文件；调用**malloc**申请内存。

数组一开始定义就确定好了，数组是放在栈空间。C语言数组长度固定是因为其固定在整型、浮点型、字符型、数组变量的**栈空间**中，而占空间的大小是在编译时确定好的，如果栈空间不确定，那就要存放在**堆空间**。

- 栈空间->教室大小/长度固定
- 堆空间->长度不固定

**必须先申请内存在进行操作**！！！！！

```c
LinkList CreatList2(LinkList &L){
	
	//必须先申请内存在进行操作
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode *s;
	LNode *r = L;//等价于LinkList r=L;
	//L = (LinkList)malloc(sizeof(LNode));
	scanf("%d",&x);
	while(x != 9999){
		s = (LinkList)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d",&x);
	}
	r->next = NULL;
	return L;
}
```

您比如说这个尾插法，我一开始是这么写的：

```c
	int x;
	//L = (LinkList)malloc(sizeof(LNode));
	LNode *s;
	LNode *r = L;//等价于LinkList r=L;
	L = (LinkList)malloc(sizeof(LNode));
```

程序的执行顺序是从上到下的，切记；所以内存后申请总是爆错。

修改顺序后，立马就对了：

```c
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode *s;
	LNode *r = L;//等价于LinkList r=L
```

x.malloc必须写在前面，血的教训啊!:cry:

### C语言中C++的引用

在严蔚敏老师的《数据结构》一书中，伪代码给出的是使用C++的方式，所以在编译器中创建文件时，一定要把文件后缀改成.cpp文件而不是.c文件。

在参数传递与调用的过程中，体现出来了C++对于参数传递和调用的便捷性。

```c++
void change(int &a){
	a = a + 1;
}
int main(){
    
    int i = 10;
    change(i);
    printf("i = %d",i);
    return 0;
}
```

->为什么我们需要在形参的地方使用C++的引用？

在子函数中去改变对应的形参赋值后，子函数结束后，对应主函数的实参就发生了变化。

如果没有使用引用，那么在子函数中给形参赋值；子函数结束后，主函数中的实参不会发生变化。

其实说白了就是，你在子函数中要不要改变实参的值->看实际需求，如果调用的子函数就是用来去改变实参的，那么就必须加上引用，否则，就不需要加引用，形参就是一个辅助变量。借助形参，去实现函数功能。

如果不理解，任何情况下都加上&

### 结构体定义时的小细节区别对比-typedef

结构体定义前加与不加typedef的区别是在调用结构体的时候发现的。

首先对于不同方式创建结构体：

```c
//定义typedef结构体
typedef struct student{
	int ID;
	char name[10];
	char sex;
}stu;

//定义无typedef结构体
struct student{
	int ID;
	char name[10];
	char sex;
}stu;
```

两种创建方式虽然功能上大体一致，但是对于stu这个别名的使用上确有这千差万别。

首先对于typedef定义的结构体来说，stu是可以在主函数中去实例化一个对象的。定义了结构体类型`student`和`student`的类别名`stu`

```c
	stu s;
	s.ID = 1;
	s.name = 'ss';
	s.sex = 'M';
```

这样书写完全没问题；但是如果创建ADT之前不加typedef，这样创建就会报错。不加typedef,stu就是一个单纯的实例化对象了，只能在主函数去使用属性，而不能再去实例化其他变量。定义了结构体类型`student`和`student`的对象实例`stu`

```c
	stu.ID = 1;
	stu.name = 'ss';
	stu.sex = 'M';
```

stu s会报错。

结构也是一种数据类型, 可以使用结构变量, 因此像其它类型的变量一样, 在使用结构变量时要先对其定义。

定义结构变量的一般格式为:

```c
struct 结构名
{
    类型 变量名;
    类型 变量名;
    ...
} 结构变量;
```

结构名是结构的标识符不是变量名。

另一种常用格式为:

```c
typedef struct 结构名
{
    类型 变量名;
    类型 变量名;
    ...

} 结构别名;
```

另外注意: 在C中，`struct`不能包含函数。在C++中，对`struct`进行了扩展，可以包含函数。

## 文件类型关系

1. 只有.h文件的Package可以是**接口或模板**(template)的定义；
2. 只有.cpp文件的Package可以是一个**程序**的入口。
3. 简单讲，一个**Package就是由同名的.h和.cpp**文件组成。当然可以少其中任意一个文件。

.cpp是C++文件的扩展名，.cpp主要是进行函数定义的，类中函数的声明和调用是在.h中的，.h文件主要是把函数进行封装，在写很多代码的时候，用上.h有很好的作用，这时候我们只要给对方公司*.h文件就行了，这样既提供了必要的信息，又保护了我们的核心代码。在.cpp中对.h文件进行调用时，要用#include.xxxh。建议按照**.h *.cpp配对分开写。

1. .cpp内用于：

   - 函数实现（包括全局函数（默认）、静态函数）
   - 全局变量、静态变量定义
   - 静态函数声明，静态变量声明.h内用于

2. h内用于：

   - 全局函数声明，注意**静态函数**不包括在内。

   - 全局变量声明，无静态变量。

> 版权声明：本文为CSDN博主「菜鸟程序员小黄」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
>    原文链接：https://blog.csdn.net/m0_55671922/article/details/115552516

## 逻辑结构与存储结构

数据存储的逻辑结构有：集合结构、链式结构、树状结构、图结构

存储结构有：顺序存储和链式存储

### 线性表

特点：

1. 元素个数是有限的
2. 表中数据的数据类型全部相同->每个元素占有相同的内存空间
3. 所有元素逻辑上是连续的，排序有先后顺序

线性表是独立于数据结构的逻辑结构不是存储结构，不要轻易把数组和链表与线性表混淆。

优点：

可以随机存取表中的任意一个元素，存储密度高，每个元素只存取数据元素

缺点：

插入和删除时需要移动大量元素，变化较大，难以确定存储空间大小；需要分配连续的存储空间，不够灵活。

### 单链表

单链表的增删改查

重点掌握单链表的**头插法**与**尾插法**的插入思路。

```c
#include<stdio.h>
#include<stdlib.h>

//在此程序中，*LinkList是变量的指针；LinkList为指针变量。

//单链表的增删改查
//线性表的链式表示就是单链表

#define Maxsize 50
#define InitSize 100

//定义一个整型类型的变量
typedef int ElemType;

//单链表结构创建-8个字节
typedef struct LNode {//单链表的结构

	ElemType data;//数据域
	struct LNode* next;//指针域
}LNode,*LinkList;
//LinkList为结构体指针等价于struct LNode*
//别名LNode可以和上面保持一致


//头插法插入新的节点
//创建单链表->带有头结点
//头结点只需要头指针指向，啥也不存
LinkList CreatList1(LinkList &L) {

	LNode* q;
	int x;
	L = (LinkList)malloc(sizeof(LNode));//带头结点的链表
	L->next = NULL;
	scanf_s("%d", &x);
	while (x != 9999) {
		q = (LinkList)malloc(sizeof(LNode));
		q->data = x;
		q->next = L->next;
		L->next = q;
		scanf_s("%d", &x);
	}
	return L;
}

//尾插法创建单链表
LinkList CreatList2(LinkList &L) {

	int x;
	L = (LinkList)malloc(sizeof(LNode));//带头结点的链表
	//在这里需要注意的是，r本身就是表尾节点,指向链表尾部
	LNode* s, * r = L;//等价于LinkList s,r=L;
	scanf_s("%d", &x);
	while (x != 9999) {
		s = (LinkList)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;//r指向新的表尾节点
		scanf_s("%d", &x);
	}
	r->next = NULL;//尾节点指针赋值为空
	return L;
}

//查找节点
LNode* GetElem(LinkList L, int i) {

	int j = 1;
	//初始指向虚拟头结点的下一个节点
	LNode* p = L->next;
	if (i == 0) {
		return L;
	}
	if (i < 1) {
		return NULL;
	}
	//p->非空
	while (p && j < i) {

		p = p->next;
		j++;
	}
	return p;
}

//任意两个节点之间插入节点
//第i个位置插入值为e的节点
bool InsertFrontList(LinkList L,int i,ElemType e) {

	LinkList p = GetElem(L,i - 1);
	if (NULL == p) {
		return false;
	}
	LinkList s = (LNode*)malloc(sizeof(LNode));//为新插入的节点申请内存空间
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

bool InsertBackList(LinkList L,ElemType e) {

	//L = (LinkList)malloc(sizeof(LNode));//带头结点的链表
	while (L->next != NULL) {
		L = L->next;
	}
	LNode* q;
	int x;
	scanf_s("%d", &x);
	while (x != 9999) {
		q = (LinkList)malloc(sizeof(LNode));
		q->data = x;
		L->next = q;
		q->next = NULL;
		scanf_s("%d", &x);
	}
	return L;

}

//无论是中间插入还是删除，找到需要操作节点的前驱节点是关键

//删除第i个位置的节点
bool DeleteList(LinkList L,int i) {

	//找到要删除元素的前驱结点
	LinkList p = GetElem(L, i - 1);
	LinkList q = p->next;
	if (p == NULL) {

		return false;//要删除的位置不存在
	}
	p->next = q->next;//断链
	free(q);
	q = NULL;
	return true;

}


void PrintList(LinkList L) {

	//头结点
	L = L->next;
	while (L != NULL) {
		printf("%d\t", L->data);
		L = L->next;
	}
}

//查找第几个元素
LinkList LocateElem(LinkList L, ElemType e) {

	int j = 1;
	LinkList p = L->next;
	while (p != NULL && p->data != e) {
		p = p->next;
		j++;
	}
	return p;

}

int main() {

	//定义链表头,结构体指针类型
	LinkList L;
	LinkList search;//用来存储拿到的某一个节点
	LinkList search1;
	printf("请在下方输入单链表的值：（^_^大于5个元素且输入9999终止^_^）\n");
	CreatList1(L);
	printf("头插法的结果为：");
	PrintList(L);
	search = GetElem(L, 2);
	if (search != NULL) {

		printf("\n按序号查找成功！~\n");
		printf("该位置的值为：%3d\n", search->data);
	}
	search1 = LocateElem(L, 5);
	/*
	if (search1 != NULL) {

		printf("\n按序号查找成功！~\n");
		printf("该的值为：%3d", search->data);
	}
	*/
	InsertFrontList(L, 3, 30);
	PrintList(L);
	printf("\n-----------\n");
	printf("删除后的结果为：\n");
	DeleteList(L, 3);
	PrintList(L);
	printf("\n-----------\n");
	printf("请在下方输入单链表的值：（^_^大于5个元素且输入9999终止^_^）\n");
	CreatList2(L);
	printf("尾插法的结果为：");
	PrintList(L);
	return 0;

}
```



### 栈

只允许在一端进行插入或者删除的线性表，栈顶（top）。后进先出->LIFO



## 两种重要的计算机思维

两种重要的编程思维在日常练习中极其重要，对于计算思维的培养是决定一个程序员能走多远的关键所在。在平时的编程练习时要注重对于两种思维的培养与训练。

### 递归-逆向思考



### 分治-化繁为简

对于分治算法的理解水平和应用的得心应手的程度，是衡量一个程序眼计算素养的标尺。这一关无法突破就无法成为一个四级工程师。

对于分治算法理解的三个层次：

1. 了解皮毛，解决一些算法习题
2. 灵活运用计算思维，解决大问题
3. 掌握精髓，解决以前从未解决的问题

分治算法的步骤描述：

1. 将复杂的问题分成若干个简单的子问题进行解决。->**分割**
2. 解决每一个子问题，若果子问题很大继续递归分解。->**解决**
3. 对子问题的结果进行合并。->**合并**



## for循环的几种书写方法

### 下标循环

```c++
for(int i = 0;i < nums.size();i++){
    //操作
    ......        
        }
```

如果事先声明了索引**下标**，则不需要在for循环中进行下标的初始化。

```c++
int i = 0;
for(;i < nums.size();i++){
    //操作
    ......
}
```

**死循环**形式

```c++
for(;;){
    //操作
    ......         
}
```



### 迭代器循环

```c++
vector<char>myvector(arc,arc+23);
vector<char>::iterator iter;
 
//for循环遍历 vector 容器
for (iter = myvector.begin(); iter != myvector.end(); ++iter) {
    cout << *iter;
}
```

### for(auto ite : array)

 C++ 11 标准中，除沿用前面介绍的用法外，为 for 循环添加了新的语法格式

- 旧格式的 for 循环可以**指定循环的范围**
- 而 C++11 标准增加的 for 循环，只会**逐个遍历** expression 参数处**指定序列**中的每个元素

**for(auto a:b)**中b为一个容器或者数组，效果是利用a遍历并获得b容器中的每一个值，但是a无法影响到b容器中的元素。

**for(auto &a:b)**中加了引用符号，可以对容器中的内容进行赋值，即可通过对a赋值来做到容器b的内容填充。

```c++
1、数组
 int array[] = {1, 2, 3, 4, 5};
 for(auto e : array)
    cout << e << endl;
 等价于
 for(int i = 0; i < 5; i++)
     cout << array[i]<<endl;

2、字符串
string str = "hello world";
for(auto ch : str)
   cout << ch <<endl;
等价于
for(int i = 0; i <str.size(); i++)
    cout << str[i] <<endl;
  
3、vector
vector<int> m_v = {1, 2, 3, 4};
for(auto e : m_v)
    cout << e <<endl;
 等价于
 for(int i = 0; i < m_v.size(); i++)
     cout <<v[i]<<endl;
4、map
map<int,string> m = {{1, "abc"}, {2, "bca"}, {3, "cab"}};
for(auto e : m)
    cout <<e.first<<"  "<< e.second<<endl;
等价于
for(map<int, string>::iterator it = m.begin();it != m.end(); it++)
cout <<it->first<<"  "<<it->second<<endl;
————————————————
版权声明：本文为CSDN博主「A阿哲」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/zhanghaizhe/article/details/103460084
```

## 基本的语法

最近写c++代码是收到了一个疑惑？就是语句中带有？（问号）是语句理解不好

其实语句中带有问号的c++语句，是if-else if-else的简便方式

该操作符是三元的，其一般形式为：

- EXP1? EXP2: EXP3


EXP1，EXP2和EXP3是表达式，注意冒号的用法和位置。

这个写法和Python中的匿名函数相似。

给Python的匿名函数举一个例子:

```python
lambda x : x*2
```

### C++匿名函数

所谓匿名函数，其实类似于python中的lambda函数，其实就是没有名字的函数。使用匿名函数，可以免去函数的声明和定义。这样匿名函数仅在调用函数的时候才会创建函数对象，而调用结束后立即释放，所以匿名函数比非匿名函数更节省空间。

## 数据类型

**1、预定义类型**

**整型**

c++有四种整型类型：**short、int、long、long long**，每种都有signed(有符号，默认)、unsigned(无符号)两种分类，有符号整数既可以表示非负整数，又可以表示负整数；但是，无符号整数不能表示负数，只能表示非负整数。

●　short至少16位

●　int至少与short一样长

●　long至少32位，且至少与int一样长

●　long long至少64位，且至少与long一样长

**字符型**

|   类型   |    含义     | 该类型数据所占的最小比特位数 |
| :------: | :---------: | :--------------------------: |
|   char   |    字符     |   8位（即可表示28个字符）    |
| wchar_t  |   宽字符    |             16位             |
| char16_t | Unicode字符 |             16位             |
| char32_t | Unicode字符 |             32位             |

**布尔型**

布尔类型(bool)是C++新增的一种基本数据类型，就是将int型定义为bool型，将int型的0和1两个值分别定义为bool类型的两个值true和false。

**浮点型**

|  类型  |       说明       |
| :----: | :--------------: |
| double | 64位双精度浮点型 |
| float  | 32位单精度浮点型 |

**空类型**

关键字void定义的类型，不能用于普通变量的声明和普通的操作，只能用于指针型变量，函数返回值和函数参数。

**指针类型**

指针，用来描述内存地址，并通过提供指针操作来实现与内存相关的程序功能。**<类型>* <指针变量>;**

其中<类型>决定了指向的内存空间的大小。

指针变量也是一种变量，有着自己的内存空间，该空间上存储的是另一个变量的内存空间。

**2、自定义数据类型**

**数组类型**

数组类型是一种有固定多个同类型的元素按一定次序所构成的数据类型。

2.1、一维数组类型  int dp[5]

2.2、二维数组类型  int dp[2] [3] 

**结构体数据类型**

1、结构体

结构体是由一系列具有相同类型或者不同类型的数据构成的数据集合。

```c++
struct 名称{

   数据类型 变量名1；

   数据类型 变量名2；

   .... 

   数据类型 变量名n；

 }结构体变量名;
```

结构体数组:

```c++
struct Info{

   int age;

   char name[32];

}info[SIZE];
```

**枚举类型**

枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。

```c++
enum 枚举名{ 

     标识符[=整型常数], 

     标识符[=整型常数], 

	 ... 

     标识符[=整型常数]

} 枚举变量;
```

## 函数

### 定义函数

在 C++ 中，函数由一个函数头和一个函数主体组成。下面列出一个函数的所有组成部分：

- **返回类型：**一个函数可以返回一个值。**return_type** 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字 **void**。
- **函数名称：**这是函数的实际名称。函数名和参数列表一起构成了函数签名。
- **参数：**参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
- **函数主体：**函数主体包含一组定义函数执行任务的语句。

**一个函数就是一个功能**，一般把一个大型程序划分为若干个程序模块。无论把函数分为多少个程序模块，其中只能有一个main函数，程序总是从main函数开始执行的。c++继承了c语言中面向函数的语言特性，在其之上又加入了面向对象的函数设计思想。学会设计并使用函数。

主函数写的很简单，它的作用就是调用各个子函数，程序的各部分功能是由各个子函数组合实现的，主函数相当于总调度。

### 函数分类

（1）系统函数，即库函数

由编译系统提供的函数，可以直接通过头文件调用；这就是为什么在调用函数时必须在程序最前面添加#include<>的原因。

（2）用户自定义的函数

（1无参函数

调用时不必给出参数

（2有参函数

在调用函数时要给出必要的参数。

**类型名	函数名（形式参数列表）**

{

​		**声明部分;**

​		**执行语句;**

}

### 函数参数

如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的**形式参数**。在定义函数时，函数名后面括号中的变量名称为形式参数；在主函数中调用函数时，函数名后面括号中的参数为**实际参数**。

形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。

| 调用类型                                                     | 描述                                                         |
| :----------------------------------------------------------- | :----------------------------------------------------------- |
| [传值调用](https://www.runoob.com/cplusplus/cpp-function-call-by-value.html) | 该方法把参数的实际值赋值给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。 |
| [指针调用](https://www.runoob.com/cplusplus/cpp-function-call-by-pointer.html) | 该方法把参数的地址赋值给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。 |
| [引用调用](https://www.runoob.com/cplusplus/cpp-function-call-by-reference.html) | 该方法把参数的引用赋值给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数 |

函数返回值

通过函数的调用使得主函数得到一个**确定的函数值**，这就是函数的返回值。

### 调用函数与递归调用

创建 C++ 函数时，会定义函数做什么，然后通过调用函数来完成已定义的任务。

当程序调用函数时，程序控制权会转移给被调用的函数。被调用的函数执行已定义的任务，当函数的返回语句被执行时，或到达函数的结束括号时，会把程序控制权交还给主程序。

在调用一个函数过程中又出现直接或者间接调用函数本身，称为函数**递归调用**。

### 指针参数调用

要想改变主调函数中的值，必须传入函数的地址，而且必须通过*+地址去赋值，无论在这个变量时什么类型的。

```c
void f(int *p){
    //被调用的时候得到了某个变量的地址
}
int main(){
    int i = 0;
    f(&i);
    //传递地址类型的参数
}
在函数里面可以通过这个指针访问外面这个i
```

注：在传递数组长度sizeof时，必须在main函数中传递。如果利用指针传递参数，那么子函数中返回的sizeof返回的是int*a的长度而不是int a[ ]的长度； int *a是首地址即 a[0]的sizeof。

### Lambda 函数与表达式

C++11 提供了对匿名函数的支持,称为 Lambda 函数(也叫 Lambda 表达式)。

Lambda 表达式把函数看作对象。Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。

### C++ 数学运算

在 C++ 中，除了可以创建各种函数，还包含了各种有用的函数供您使用。这些函数写在标准 C 和 C++ 库中，叫做**内置**函数。您可以在程序中引用这些函数。

C++ 内置了丰富的数学函数，可对各种数字进行运算。下表列出了 C++ 中一些有用的内置的数学函数。

为了利用这些函数，您需要引用数学头文件 **<cmath>**。

| 序号 |                         函数 & 描述                          |
| :--: | :----------------------------------------------------------: |
|  1   | **double cos(double);** 该函数返回弧度角（double 型）的余弦。 |
|  2   | **double sin(double);** 该函数返回弧度角（double 型）的正弦。 |
|  3   | **double tan(double);** 该函数返回弧度角（double 型）的正切。 |
|  4   |      **double log(double);** 该函数返回参数的自然对数。      |
|  5   | **double pow(double, double);** 假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。 |
|  6   | **double hypot(double, double);** 该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。 |
|  7   |      **double sqrt(double);** 该函数返回参数的平方根。       |
|  8   |          **int abs(int);** 该函数返回整数的绝对值。          |
|  9   | **double fabs(double);** 该函数返回任意一个浮点数的绝对值。  |
|  10  | **double floor(double);** 该函数返回一个小于或等于传入参数的最大整数。 |

### C++中直接调用的函数

1、sqrt(x)

取x的平方根。

2、pow(x,y)

值为x的y次方。

3、abs(x)

取整数的绝对值。

fabs(x)

求精度更高的double、float型的绝对值。

4、floor(x)

返回一个小于或等于x的最大整数。

5、setw(x)

空x个空格。

6、strcpy(s1,s2)

复制字符串s2到字符串s1。

7、strlen(s1)

返回字符串s1的长度。

8、strcat(s1,s2)

连接字符串 s2 到字符串 s1 的末尾。

9、strchr(s1,ch)

返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。

10、strstr(s1,s2)

返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。

11、strcmp(s1,s2)

如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
原文链接：https://blog.csdn.net/qq_55196230/article/details/122525491

### 常用的字符串函数



## 指针

### 什么是指针？

**指针**是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。

```c++
type *var-name;
```

在这里，**type** 是指针的基类型，它必须是一个有效的 C++ 数据类型，**var-name** 是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。但是，在这个语句中，星号是用来指定一个变量是指针。以下是有效的指针声明：

```c++
int    *ip;    /* 一个整型的指针 */
double *dp;    /* 一个 double 型的指针 */
float  *fp;    /* 一个浮点型的指针 */
char   *ch;    /* 一个字符型的指针 */
```

所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

**&**与*****区别使用方式：* p是一个值；p是一个地址；**两者完全不相同**。代表着p指向的地址的值，简单来说就是取值；&是取地址符号，取的是地址；p是指针，可以理解为所指向的值的地址，* p就是取p指针指向的地址的值，&a就是取a的地址。

&是取地址符号，其返回的是一个变量的地址；而*是一个单目运算符，用来访问指针的值所表示的地址上的变量，其返回的是根据地址所对应的数值；我们也俗称叫做“**解引用**”，可以作为左值使用。

指针的运算符&与*起到互作用：

int xptr = &x；

*xptr = x；

*&xptr -> *(&xptr) -> *(xptr的地址) -> 得到那个地址上的变量 -> xptr

&*xptr -> &( *xptr) -> &(x) -> 得到x的地址，也就是xptr -> xptr

> [百度百科]单目运算是指运算符包括[算术运算符](https://baike.baidu.com/item/算术运算符/9324947?fromModule=lemma_inlink)、[逻辑运算符](https://baike.baidu.com/item/逻辑运算符/4123505?fromModule=lemma_inlink)、位逻辑运算符、位移运算符、[关系运算符](https://baike.baidu.com/item/关系运算符/352774?fromModule=lemma_inlink)、自增自减运算符。->只需要一个变量参与即可完成相应的计算过程。
>
> [翁恺]左值之所以叫左值，是因为出现在赋值号左边的不是一个变量而是一个值(或者是表达式的结果)，是一个特殊的值，所以叫左值。a[0] = 2、*p = 3.

```c
int a = 5;//变量的声明与定义
int *p = a;//指针变量的声明与定义
32位架构之下scanf("%d",i)；不会报错->因为整数和地址是一样大的
对于这个*而言，它可以靠近变量本身也可以靠近关键字，本身没有实际的区别
```

->变量的值是内存的地址；普通变量的值是实际的值；指针变量的值是具有实际值的变量的地址。

在当使用*+变量名作为参数是，其定义的类型为指针类型，所以在传入参数时，务必传入变量的地址，而不是单纯的传入一个变量名。只有主调函数参数传入地址，被调函数才能根据定义的指针类型参数去复用地址，从而达到了改变主调函数中的值的操作。

```c
 void swap(int *a,int *b){
     int temp = *a;
     *a = *b;
     *b = temp;
 }
```

以上面的交换函数为例，调用swap函数时，必须传入的是两个地址(&+变量名)；这是主调函数int *a,int *b才能根据传入的地址去解析地址所对应的数值。在内存中(无论是在堆空间还是栈空间)存放好的变量是不怕被覆盖的，换言之，他们是随时做好准备而去被覆盖的。

这也是值传递和地址传递的区别。主调函数发生值传递后，传入的参数会在被调函数中的栈区中自己开辟新的空间存放传进来的参数值。这也是所谓的C语言的特性之一：单向值传递。而主调函数传入地址后，被调函数拿到传入的地址即解析，到堆区主调函数中(这里说的不严谨，因为当主调函数与被调函数都定义在栈区时，参数的传递也只在栈区中传递)去改变主调函数中参数的值。理解堆区和栈区是参数传递过程的中的重点问题。

**应用场景：**

1. 函数返回多个值的时候：swap交换函数、寻找min与max函数 and so on…
2. 函数返回运算的状态可能会用到指针进行返回。让函数返回某些特殊的不属于有效范围内的值表示出错。

```c
int divide(int a,int b,int *res){
    int ret = 1;
    if(b == 0) ret = 0;
    else{
        *result = a/b;
    }
    return ret;
}
int main(){
    int a = 2;
    int b = 10;
    int c;
    if(divide(a,b,&c)){
        printf("%d%d%d",a,b,c);
    }
    
}
```

初学者使用指针的常见错误：

- 定义了指针变量，但是还没有开始指向任何变量，就开始使用指针。->野指针的产生

C99标准下const与指针：

->指针的const表示一旦得到了某个变量的地址，不能在指向其他的变量。指针不能被修改

```c
int *const q = &i;//q是const
*q = 26;//OK
q++；//ERROR
```

->const所指的int表示不能通过有这个指针去修改所指向的变量。所指的东西不能被修改

```c
const int *p = &i;
*p = 26;//ERROR
i = 26;//OK
p = &j;//OK
```



### 数组指针

数组参数的等价：

- int sum(int *a,int n);
- int sum(int *,int n);
- int sum(int a[ ],int n);
- int sum(int [ ],int n);

数组与指针几点特性：

1. 数组变量是特殊的指针，数组本身就是表达地址。
2. []可以对数组做，也可以对指针做。
3. *可以对数组做，也可以对指针做。
4. 数组变量是const指针，所以不能被赋值。

其实数组在传入到子函数时，本质上就是传入子函数的**首地址**。

指针函数参数，具备输入输出特性：

main函数：

```c
int main(){
	
	test01();
	test02();
	test03();
	return 0;
}
```

输入特性：主调函数分配内存，被调函数中使用内存

```c
//栈区内存分配
void func(char *c){
	
	strcpy(c,"helloworld!");
}

void test02(){
	char buf[100] = {0};
	func(buf);
	printf("%s\n",buf);
	
}
//堆区内存分配

void PrintString(char *str){
	
	printf("%s\n",str);
}
void test01(){
	
	//堆区内存分配
	char *p = malloc(sizeof(char)*64);
	memset(p,0,64);
	strcpy(p,"helloworld!");
	PrintString(p);
	
}
```

输出特性：被调函数分配内存，主调函数中使用内存

```c
//输出特性：被调函数创建内存，主调函数使用内存

void allocateSpace(char **pp){
	
	char *temp = malloc(sizeof(char)*64);
	memset(temp,0,64);
	strcpy(temp,"helloworld!");
	*pp = temp;
	
	
}
void test03(){
	
	char *p = NULL;
	allocateSpace(&p);
	printf("%s\n",p);
	
	
}
```

**数组指针与指针数组**

-  数组指针：是指一个指向数组的指针，它其实*还是一个指针*，只不过是*指向数组*而已	int (*p)[10]

- 指针数组：是指一个数组里面*装着指针*，也即指针数组*是一个数组* int *a[10]

  

指针数组的使用：

```c
#include <stdio.h>
int main(){
    int a = 16, b = 932, c = 100;
    //定义一个指针数组
    int *arr[3] = {&a, &b, &c};//也可以不指定长度，直接写作 int *arr[]
    //parr 是指向数组 arr 的指针，确切地说是指向 arr 第 0 个元素的指针，
    //它的定义形式应该理解为int *(*parr)，括号中的*表示 parr 是一个指针，括号外面的int *表示 parr 指向的数据的类型。
    //arr 第 0 个元素的类型为 int *，所以在定义 parr 时要加两个 *。
    int **parr = arr;
    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);//16, 932, 100
    printf("%d, %d, %d\n", **(parr+0), **(parr+1), **(parr+2));//16, 932, 100
 
    return 0;
}


#include <stdio.h>
int main(){
    char *str[3] = {
        "c.biancheng.net",
        "C语言中文网",
        "C Language"
    };
    printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
    /*
        运行结果：
        c.biancheng.net
        C语言中文网
        C Language
    */
 
    return 0;
}
```

数组指针的使用：

```c
#include<stdio.h>
int main(void)
{
    char a[5]={'A','K','C','G','L'};    
    char (*p)[5]=&a;//&a代表的是整个数组的首地址
    //char (*p)[5]=a;这样是错误的，因为a代表第一个元素的首地址
    printf("%c %c %c",**p,*(*p+1),*(*p+3));//输出：A K G
    return 0;
}
```



### 结构体指针

 **->**前是指针，而 . 前是结构体变量

**`.`用于类的实例，而`->`用于类的指针**

`.`：成员访问表达式指定由其左操作数指定的结构或联合的命名成员，它具有与左操作数相同的值类别。

`->`：通过指针表达式的成员访问指定由其左操作数指向的结构或联合类型的命名成员。它的值l类别始终是左值。

简单点说就是：

- A->a表示A是指向结构体的指针
- A.a表示A是结构体
- A->a等效于(*A).a

->比如C++中一个类Class Student;里面有个公有成员变量test

如果你声明这个类的对象Student s;那么你要对test操作要用"."	 s.test

如果你声明这个类的对象Student *s为指针类型的话，那么你要对test操作要用"->"	s->test



结构体指针的等价性：

int *p =  &结构体变量；

- 结构体变量名.成员名
- (*p).成员名
- p->成员名

### 函数指针

内存中每个指令都顺序存放的，每个指令都有一个与其相对应的地址；而函数反应到内存中就是一大块指令的集合。

```c
#include<stdio.h>

int Add(int a,int b){
    return a + b;
}
int main(){
    int c;
    int (*p)(int ,int);
    p = &Add;
    c = (*p)(2,3);
    ------------------
    p = Add;
    c = p(2,3);
    ------------------
    printf("%d",c);
    return 0;
    //程序得到的结果为5
}
```



### 水煮易混指针

- int *a[5]

这是一个**指针数组**，每一个元素都是一个int *指针变量,指向int类型的地址。指向 *a[5]时应该使用二级指针而不是一级指针。

- int (*a)[5]

这是一个**数组指针**，它是一个指针变量，占有8个字节存地址编号，它指向一个数组，二维数组加一偏移后指向下一行，也可以将&+一维数组赋值给它。

- int **p

这是一个**指针的指针**，存放的是保存指针的地址。

- int *f(void)

它是一个**函数**的声明，返回的是一个函数的地址->int *类型。

- int (*f)(void)

f是个**函数的指针变量**，存放函数的地址，它指向的函数必须有一个int类型的返回值，没有参数。

## 结构体

结构体的作用：`把一些相关的变量组合起来，以一个整体形式对对象进行描述`

【注】:

1. 只有结构体变量才分配地址，而结构体的定义是不分配空间的
2. 结构体中各成员的定义和之前的变量定义一样，但在定义时也不分配空间
3. 结构体变量的声明需要在主函数之上或者主函数中声明，如果在主函数之下则会报错
4. c语言中的结构体不能直接进行强制转换，只有结构体指针才能进行强制转换
5. 相同类型的成员是可以定义在同一类型下

定义结构体变量以后，系统就会为其分配内存单元。

**在对结构体变量初始化时，要对结构体成员一一赋值，不能跳过前面成员变量，而直接给后面成员赋初值。**

用结构体指针变量访问结构体变量成员有以下两种方式：
			(*p).属性 //这里的括号不能少
			p->属性



## 全局变量与宏

### 全局变量

定义在函数的外部的变量称为全局变量，全局变量具有全局的生存期和作用域。他们与任何函数都无关，任何函数都可以调用。没有初始化的全局变量会被赋予0值，指针会得到NULL值，他们的初始化在main函数之前。全局变量禁止套娃

```c
int gall = 12;
void f(){
    gall += 2;
    printf("value in f is %d",gall);
    
}

int main(){
    f();
    printf("value in main is %d",gall);
    
}
```

### 静态全局变量

在本地变量定义时前面加上static就变成了静态本地变量。函数离开时，静态本地变量会保持其原来的值，静态本地变量的初始化只会在第一次进入这个函数时做，以后进入函数会保持和上次离开时的值。

```c
#include<stdio.h>
int gall = 12;
//int gall = 12;
void f(){
    int all1 = 2;//不加static为本地变量
    static int all2 = 2; //加static
    //遵守的原则：以后进入函数会保持上次离开时的值
    printf("value in f is %d",all);
    all += 2;
    printf("value in f is %d",all);
    
}

int main(){
    f();
    f();
    f();
  
}
实际上在内存中：gall地址0x3800c，all2地址0x38010两者是紧挨着的，而静态本地变量与本地变量all1区相隔十万八千里。
```

静态本地变量实际上是特殊的全局变量，他们位于相同的内存区域。静态本地变量具有全局的生存区，函数内局部作用域。全局生存期，本地作用域。

指针作为返回值返回本地变量是危险的，返回全局变量或者静态本地变量是安全的，最好的做法是返回指针。

小贴士：

1. 不要使用全局变量来作为函数之间的参数传递的结果
2. 尽量避免使用全局变量
3. *使用全局变量和静态本地变量时函数的线程是不去安全的

### 编译预处理与宏

#include:

#开有就是编译预处理指令，他们不是C语言的指令，但是他们不可或缺。#define来定义一个宏。

#define <name> <value>

宏：#define PI 3.14；因为不是C语言的语句所以结尾没必要加分号！名字必须是一个单词，值可以是任何东西。宏也可以带着参数，形成函数的宏。

#define cube(x) (x * x * x)

一切都要有括号，整个值都要有括号

#define MIN(a,b)	((a>b)?(b):(a))

### #ifndef的用法

```c
#ifndef <标识>
#define <标识>

......
......

#endif
```

\#ifndef起到的效果是防止一个源文件(.cpp)两次包含同一个头文件(.h)，而不是防止两个源文件包含同一个头文件。它是`if not define` 的简写，是宏定义的一种，实际上确切的说，这应该是预处理功能三种（宏定义、文件包含、条件编译）中的一种——条件编译。

<标识>在理论上来说可以是自由命名的，但每个头文件的这个“标识”都应该是唯一的。标识的命名规则一般是头文件名全大写，前后加下划线，并把文件名中的“.”也变成下划线，如：stdio.h

#ifndef _STDIO_H_
		#define _STDIO_H_

......

\#endif

使用#ifndef可以避免下面这种错误：如果在h文件中定义了全局变量，一个c文件包含同一个h文件多次，如果不加#ifndef宏定义，会出现变量重复定义的错误；如果加了#ifndef，则不会出现这种错误。

**条件指示符#ifndef 的最主要目的是防止头文件的重复包含和编译。**

### const关键字

关键字const用来定义常量，如果一个变量被const修饰，那么它的值就不能再被改变。与前面的#define(预编译指令)相比，const具有如下的优点：

1. 预编译指令只是对值进行简单的替换，不能进行类型检查
2. 可以保护被修饰的东西，防止意外修改，增强程序的健壮性
3. 编译器通常不为普通const常量分配存储空间，而是将它们保存在符号表中，这使得它成为一个编译期间的常量，没有了存储与读内存的操作，使得它的效率也很高

需要注意的是，用const修饰变量时，一定要给变脸初始化，否则之后就不能再进行赋值了。

## C++的引用

准确来说就是给变量**起别名**；准确来说实际的作用和指针类似。->共同操纵内存

```c
int a = 10;//栈区存放内存地址
int &b = a;
cout  << "a ="<< a << endl;
cout  << "b ="<< b << endl;
b = 20;
cout  << "a ="<< a << endl;
cout  << "b ="<< b << endl;
```

1. 引用必须初始化，必须开始的时候就要初始化。int &b是错误的；int &b = 一个变量名;
2. 引用一旦初始化后，就不可以更改了。

### 引用作为函数的参数

作用：函数传参时，可以利用引用技术让形参修饰实参。

优点:可以简化指针修改实参。

```c
//交换函数三种方法实现
//值传递
void swap(int a,int b){
    int temp  = a;
    a = b;
    b  =temp;
    
}
//地址传递
void swap(int *a,int *b){
    int temp  = *a;
    *a = *b;
    *b  =temp;
    
}
swap(&a,&b);
//引用传递
void swap(int &a,int &b){
    int temp  = *a;
    *a = *b;
    *b  =temp;
}
swap(a,b);//本质上a就是上面子函数中形参的别名 
```

通过引用参数产生的效果和使用指针的产生的效果是一样的，引用的语法更加简介清晰。

### 引用作为函数的返回值

- 不要返回局部变量的引用

```c
int& func(){
    int a = 1;
    return a;
}

int main(){
    
    int &ref = func();
    cout << "ref=" << ref <<endl;//第一次打ref的值是1，因为编译器做了保留
    cout << "ref=" << ref <<endl;//第二次打是个乱码、错误值，因为局部变量释放
}
```

- 函数的调用可以作为左值

```c
int& func(){
    static int a = 1;
    return a;
}

int main(){
    
    int &ref = func();
    cout << "ref=" << ref <<endl;
    cout << "ref=" << ref <<endl;//结果都是1
    
    func() = 200;
    cout << "ref=" << ref <<endl;
    cout << "ref=" << ref <<endl;//结果都是200
}
```



```c
void test(){
    static int a = 10;
    return a;
}
int &ref = test();
cout  << "ref ="<<ref << endl;
cout  << "ref ="<<ref << endl;

test() = 1000;//函数的调用可以作为左值
cout  << "ref ="<<ref << endl;
cout  << "ref ="<<ref << endl;
```

### 引用的本质

引用的本质在C++中内部的实现就是一个指针常量。引用一旦初始化，就不可以进行更改。

C++推荐使用引用技术，因为语法方便，所有的指针操作编译器都帮我们做好了。

```c
//编译器发现是引用的话，转化为 int* const ref = &a;
void func(int &ref){
    int ref = 100;
}

int main(){
    //自动转换为 int* const ref = &a;指针常量是指针指向不可以改变，也说明了为什么引用不可以更改。
    int &ref = a;
    ref = 20;//内部发现ref是引用以后，自动帮我们转换为：*ref = 20；
    
    cout << "a" << a <<endl;
    cout << "ref" << ref <<endl;
    
    func(a);
    return 0;
}
```

修饰形参放置

```c
void  PrintValue(const int &x){
    x = "新值";//加上const以后，这句话就会报错
    cout << "val = " << endl;
}

//对于常量的引用
int main(){
    int a = 10;
    int &ref = a;
    //以上内容是合法的，但是如果左值赋给了一个新的数值就会引起非法操作
    ref = 20;//这样操作是非法的，20下面会加上红色波浪线报错提示。
  
    //加上const之后，编译器将代码修改为 int temp = 20 const int &ref = temp;
    const int &ref = 20;
    
    int x = 10;
    PrintValue(x);//为了避免在子函数中对实参进行修改，可以在形参前面加上const关键字
    cout << "val = " << endl;
}
```



## 动态内存分配

1. 程序运行过程中，需要根据自身大小自由分配空间
2. 按需分配
3. 分配在堆区，一般使用特定的函数进行分配

->free函数释放p指针指向的内存。内存大小有限，好借好还、再借不难。

free(p);

### malloc

```c
#include<stdio.h>
#include<stdlib.h>
void *malloc(int size){
    
}//在堆区中分配一块长度为size的连续内存块，用来存放内存说明符号指定的数据类型，函数返回 void *指针

int main(){
    
    int *p = (int *)malloc(size);//(int *)注意强转
}

```

返回值：

- 分配内存空间的起始地址(分配成功)
- NULL(分配失败)

### calloc

在内存堆中，申请n块，每块sizeof(指定数据类型)个字节的字节的连续区域。

```c
#include<stdio.h>
#include<stdlib.h>
void *calloc(int size){
    
}//在堆区中分配一块长度为size的连续内存块，用来存放内存说明符号指定的数据类型，函数返回 void *指针

int main(){
    //本质上就是一个二维的数组指针
    datatype *p = (datatype *)calloc(n,sizeof(datatype));//(datatype *)注意强转
}
```

### memset函数

```c
void *memset(void *ptr,int value,size_t num);
//memset函数是将ptr指针指向的内存空间的num个字节全部赋值为value；
int *str = (int *)malloc(sizeof(int)*100);
if(!str) return;
memset(str,0,100);
for(int i = 0;i < sizeof(str)/sizeif(int);i++){
    printf("%d\t",str[i]);
}

```

## 文件操作

### 初识文件

文件是用来存放程序、文档、音频、视频数据、图片等数据。文件是存放在磁盘上的数据集合。

**磁盘文件：**一组相关数据的集合，通常存放在外部介质上，使用时才调入内存

**设备文件：**在OS中把每一个与主机相连的输入、输出设备看做一个文件，把他们的输入、输出等同于磁盘文件的读和写。

键盘：标准输入文件

屏幕：标准输出文件

C语言中文件的操作：

FILE *fopen(const char *filename, const char *mode);

返回值：

fopen函数返回新打开文件的**文件指针**；

如果此文件不能打开，则返回**NULL指针**。

"r"	打开文件仅供读取	必须存在

"w"	创建新文件仅供写入	若存在，则清空后再写入

"a"	打开文件附加写入	若不存在，则创建新文件写入

"r+"	打开文件供读取并写入	必须存在

"w+"	创建新文件供读取并写入	若存在，则清空后再写入

"a"	打开文件读取并附加写入	若不存在，则创建新文件写入

```c
FILE* fp = fopen('file','r');
if(fp){
    fscanf(fp,...);
    fclose(fp);
}
else{
    
}
```

## 编码、运算与变量

数据存储量的量级增长：

1字节1KB=8比特bits

1兆字节1MB=1024KB

1吉字节1GB=1024MB

1太字节1TB=1024GB

千万亿字节1PB拍字节 = 1024TB

百亿亿字节1EB艾字节 = 1024PB

十万亿亿字节1ZB泽字节 = 1024EB

一亿亿亿字节1YB尧字节 = 1024ZB

一千亿亿亿字节1BB = 1024YB

### 补码的作用

组成原理要考！

计算机的CPU无法进行减法运算，只能做加法运算。CPU有一个逻辑单元交加法器，只能进行加法操作。CPU中包含三部分：加法器、移位器、译码器。对于减法操作：2-5->2+(-5)的操作。由于计算机只能存储0和1，编写程序来看-5是如何存储的。

在数据的存储中，有两种存储形式，*大端存储和小端存储。*所有的数据都是在内存当中存的，而内存当中的基本单位是**字节**数据访存的基本单位是字节的话，那么一个整形变量（int）就有四个字节，那么就意味着数据在存储过程中会被划分为四块。**数据按照字节序为单位，也有高权值位，低权值位之别的。按空间来划分的话，有高地址，低地址之分。**

两种存储方案：
	*大端*：按照字节位单位，低权值位数据存储在高地址处，就叫做大端；
	*小端*：按照字节位单位，低权值位数据存储在低地址处，就叫做小端。

我们以 int a = -10 为例：

（因为int类型占有四个字节，而一个字节等于8个bite位）

（说明:数据在内存中是以**补码**的形式存储的）

所以将其转化为二进制原码为:

10000000 00000000 00000000 00001010

反码(符号位不变，其他位按位取反):

11111111 11111111 11111111 11110101

补码（反码+1）：

11111111 11111111 11111111 11110110

转化为十六进制为:

ＦＦ　ＦＦ　ＦＦ　Ｆ６

大端存储：	低地址->高地址：ＦＦ　ＦＦ　ＦＦ　Ｆ６

小段存储：	高地址->低地址：Ｆ６  ＦＦ　ＦＦ　ＦＦ　



5		0000 0101->一个字节 原码

-5	取反后加1：1111 1010->1111 1011 用补码来表示负数

对于有符号数而言，最高位为1表示负数，最高位为0表示正数。最高位为1则自然表示该数据的补码，加1取反则得到相反数 

### 反码的作用

反码是计算机中一种机器码的表示。对于单个数值(二进制的0和1)而言，对其进行反操作就是将0变成1，将1变成0。正数的反码和原码一致，负数的反码就是在其原码的基础之上，符号位不变的情况下，其他位置取反。

反码是历史遗留的残物。作用就是解决对于负数补码的求值。

负数的补码=负数的原码->负数的反码->反码加1



### int数值型

括号可以缺省，无符号只能存储非负数。

- 整型变量的类型：
- 有符号基本整型：(signed)int
- 有符号短整型：(signed)short(int)
- 有符号长整型：(signed)long(int)
- 无符号基本整型：unsigned int
- 无符号短整型：unsigned short(int)
- 无符号长整型：unsigned long(int)

|      数据类型       | 字节数 |                     范围                     |
| :-----------------: | :----: | :------------------------------------------: |
|     (signed)int     |   4    |             $-2^{31}$~$2^{31}-1$             |
| (signed)short(int)  |   2    |             $-2^{15}$~$2^{15}-1$             |
|  (signed)long(int)  |   4    | $-2^{31}$~$2^{31}-1$ 或 $-2^{63}$~$2^{63}-1$ |
|    unsigned int     |   4    |                $0$~$2^{32}-1$                |
| unsigned short(int) |   2    |                   0-65535                    |
| unsigned long(int)  |   4    |       $0$~$2^{32}-1$ 或 $0$~$2^{64}-1$       |

Linux OS下long类型占有8个字节

为啥符号位的字节数要比符号位少一次幂呢？因为符号位



最小的负数是：

1000 0000 0000 0000 0000 0000 0000 0000

而不是：

1111 1111 1111 1111 1111 1111 1111 1111

> 避免溢出现象的发生：
>
> 掌握字符型数值的取值范围！



### 浮点型数据

在C语言中，浮点型数据用double和float表示。float占用4个字节，double占用8个字节。与整数形式不同，浮点数存储是按照指数形式存储的。系统会把一个浮点数分成小数部分M和指数部分E，分别存放。

0/1表示符号位，指数部分有8位，小数部分有23位。

浮点数的取值范围要看指数部分的取值：指数部分有效位数是8位，所以范围就是$2^{-127到128}$,求得的结果用科学计数法表示就是下面float的范围。有效部分是小数部分，23位就是2的23次方=8388608不能表示到9999999.

|  数据类型   | 位数 |            范围            | 有效位数 |
| :---------: | :--: | :------------------------: | :------: |
|    float    |  32  |   $10^{-37}$~^10{38}-1$    |   6-7    |
|   double    |  64  |  $10^{-307}$~^10{308}-1$   |  15-16   |
| long double | 128  | $10^{-4931}$~$10^{4932}-1$ |  18-19   |

IEEE-754标准:

0x:40 90 00 00:

0o:0 **100 0000 1**001 0000 0000 0000 0000 0000



### 字符串常量

转义字符：

\n 换行

\t 横向跳格

\r 回车

\ \ 反斜杠

\b 退格

\0 空字符用于标识字符串的结尾，不是空格，无法打印



### 位运算

```c
<<:左移
>>:右移
~: 按位取反
|: 按位或
^: 按位异或
&: 按位与
```

一个变量左移与右移之后类似于++或者—–其本身很不会发生改变，除非对其自身进行赋值。

**左移：**丢弃高位，低位以0补充，相当于乘以2.申请内存是需要用到左移。例如要申请一个G的内存，可以使用malloc(1<<20)。

**右移：**低位丢弃，正数高位补0，负数高位补1，相当于除以2。移位对于乘除法来说效率要高，负数右移对偶数来说是除以2，但是对于技术来说是先减1后除以2.-无符号数右移时的高位补1.

**异或：**相同的数字进行异或是结果为0；任何数字和0异或的结果时其本身。数字位相同为0，相异为1。

**按位取反：**数位上的0变成1,1变成0。正数按位取反的结果是其相反数-1.

**按位与和按位或：**用两个数字的每一维进行与和或。与是前者，或是后者。

- & 与：全1则1，有0则0
- | 或：全0为0，有1则1
- ~ 非：按未取反
- ^ 异或：相同为0，不同为1
- \>> 右移
- << 左移

两个数取异或后得到的结果再分别与自身取异或，便可以得到两个数交换的结果。





















------



## C++ 基本的输入输出

C++ 标准库提供了一组丰富的输入/输出功能，我们将在后续的章节进行介绍。本章将讨论 C++ 编程中最基本和最常见的 I/O 操作。

C++ 的 I/O 发生在流中，流是字节序列。如果字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存，这叫做**输入操作**。如果字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等），这叫做**输出操作**。

### I/O 库头文件

下列的头文件在 C++ 编程中很重要。

|   头文件   | 函数和描述                                                   |
| :--------: | :----------------------------------------------------------- |
| <iostream> | 该文件定义了 **cin、cout、cerr** 和 **clog** 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。 |
| <iomanip>  | 该文件通过所谓的参数化的流操纵器（比如 **setw** 和 **setprecision**），来声明对执行标准化 I/O 有用的服务。 |
| <fstream>  | 该文件为用户控制的文件处理声明服务。我们将在文件和流的相关章节讨论它的细节。 |

C++ 编译器根据要输出变量的数据类型，选择合适的流插入运算符来显示值。<< 运算符被重载来输出内置类型（整型、浮点型、double 型、字符串和指针）的数据项。

流插入运算符 << 在一个语句中可以多次使用，如上面实例中所示，**endl** 用于在行末添加一个**换行符**。

using namespace std的意思是使用命名空间 std。C++标准库中的类和函数是在命名空间 std中声明的，因此程序中如果需要用到 C++标准库，（此时就需要用 #include命令行）用using namespace std作声明，表示要用到命名空间 std中的内容。

如果程序有输入或输出时，必须使用#include <iostream>命令以提供必要的信息，同时要用using namespace std; 使程序能够使用这些信息，否则程序编译时将出错。

cin>>输入流>>endl；

cin>>变量1>>变量2>>变量3>>变量n>>endl；

cout<<输出流<<endl;

cout<<表达式1<<表达式2<<表达式3<<表达式n<<endl；

在定义流对象时，系统会在**内存**中开辟一段**缓冲区**，用来暂存输入输出流的数据。先把插入的数据顺序存放输出缓冲区中，直到输出缓冲区满或遇到 cout语句中的 endl；此时将缓冲区中已有的数据一起输出，并清空缓冲区。输出流中的数据在系统默认的设备( 一般为显示器) 输出。

不能用 cin语句把空格字符和回车换行符作为字符输入给字符变量，它们将被跳过。如果想将空格字符或回车换行符(或任何其他键盘上的字符)输入给字符变量，用getchar函数。在组织输入流数据时，要仔细分析 cin语句中变量的类型，按照相应的格式输入，否则容易出错。

C++还保留了C语言中用于输入和输出单个字符的函数，使用很方便。其中最常用的有 **getchar**函数和**putchar**函数。在C 语言中是用 printf函数进行输出，用 scanf函数进行输入的。 C++保留了C语言的这一用法。

常用I/O流控制符	描述

dec	转换整数的基数为十进制

oct	转换整数的基数为八进制

hex	转换整数的基数为十六进制

showbase	在输出中显示基数指示符

uppercase	十六进制输出时一律用大写字母

scientific	科学计数法显示浮点数

fixed	定点小数形式显示浮点数

showpoint	把带有小数点的浮点数值输入到流中

showpos	正整数前带有"+"号

unitbuf	输出操作后立即刷新流

left	输出数据在本域宽范围内左对齐

right	输出数据在本域宽范围内右对齐

------------------------------------------------
版权声明：本文为CSDN博主「亲亲Friends」的原创文章

1. 在C++下，若要使用C中已有库中的函数如stdio，文件包含方式为前面加一个c，同时去掉.h后缀，如#include < cstdio >，同时必须加上using namaspace;对于其他类似的函数同样
2. 对于C++特有的库，直接用去掉.h后缀的文件包含，并加上using namaspace

".h"头文件将所有名字放在global namespace中，在新的方式下（指的是诸如cstdio这样的头文件），名字是放在namespace **std中的。因此，新的方式是所有应用推荐的方式，除非是要编写与C严格兼容的程序**

## Standard Template Library-STL

标准模板库（Standard Template Library，STL）是惠普实验室开发的一系列软件的统称。STL的代码从广义上讲分为三类：algorithm（算法）、container（容器）和iterator（[迭代器](https://baike.baidu.com/item/迭代器/3803342)）；在C++标准中，STL被组织为下面的**13个头文件**：<algorithm>、<deque>、<functional>、<iterator>、<vector>、<list>、<map>、<memory>、<numeric>、<queue>、<set>、<stack>和<utility>。

C++ 对模板（Template）支持得很好，STL 就是借助模板把常用的数据结构及其算法都实现了一遍，并且做到了**数据结构和算法的分离**。STL封装了很多实用的容器，省时省力，能够让你将更多心思放到解决问题的步骤上，而非费力去实现数据结构诸多细节上，**像极了用python时候的酣畅淋漓**。

P.S. 如果你对STL源码颇有兴趣，那你不妨拜读C++大师[侯捷](https://link.zhihu.com/?target=https%3A//baike.baidu.com/item/%E4%BE%AF%E6%8D%B7/1760197%3Ffr%3Daladdin)的杰作《**STL源码剖析**》。

STL是提高C++编写效率的一个利器.

### STL六大部件

- 容器（Containers）
- 分配器（Allocators）
- 算法（Algorithm）
- 迭代器（Iterators）
- 适配器（Adapters）
- 仿函数（Functors）

### vector

#include < vector >

vector是变长数组，支持随机访问，不支持在任意位置O(1)插入。为了保证效率，元素的增删一般应该在**末尾**进行。

声明:

​       \#include < vector >    头文件 //引用vector是必须在头文件添加的

​       vector< int > a;       相当于一个长度动态变化的int数组 //初始化动态数组

​       vector< int > b[233];   相当于第一维长233，第二维长度动态变化的int数组

​       struct rec{…};

​       vector< rec > c;       自定义的结构体类型也可以保存在vector中 //结构体数组

#### size/empty

size函数返回vector的**实际长度**（包含的元素个数），empty函数返回一个bool类型，表明vector是否为空。二者的时间复杂度都是**O(1)**。

-> 所有的STL容器都支持这两个方法，含义也相同，之后我们就不再重复给出。

#### lear

   clear函数把vector清空。

#### 迭代器

迭代器就像STL容器的“**指针**”，可以用星号“*”操作符解除引用。

一个保存int的vector的迭代器声明方法为：

vector< int >::iterator it;

vector< int >::iterator是迭代器引用，it是迭代器的命名。

vector的迭代器是“随机访问迭代器”，可以把vector的迭代器与一个整数相加减，其行为和指针的移动类似。可以把vector的两个迭代器相减，其结果也和指针相减类似，得到两个迭代器对应下标之间的距离。

#### begin/end

begin函数返回指向vector中**第一个元素**的迭代器。例如a是一个非空的vector，则***a.begin()**与**a[0]**的作用相同。

所有的容器都可以视作一个“**前闭后开**”的结构，end函数返回vector的尾部，即第n个元素再往后的“边界”。*a.end()与a[n]都是越界访问，其中n=a.size()。

#### front/back

front函数返回vector的**第一个元素**，等价于*a.begin() 和 a[0]。

back函数返回vector的**最后一个元素**，等价于*==a.end() 和 **a[a.size() – 1]**。

#### push_back() and pop_back()

a.push_back(x) 把元素x**插入**到vector a的**尾部**。

b.pop_back() **删除**vector a的**最后一个元素**。

### queue

#include < queue >

头文件queue主要包括循环队列queue和优先队列priority_queue两个容器。

声明

​       queue< int > q;

​       struct rec{…}; queue< rec > q;    //结构体rec中必须定义小于号

​       priority_queue< int > q;    // 大根堆

​       priority_queue<int, vector< int >, greater< int > q;   // 小根堆

​       priority_queue<pair<int, int>>q;

#### 循环队列 queue

##### push 

从队尾插入

##### pop 

从队头弹出

##### front 

返回队头元素

##### back 

返回队尾元素

#### 优先队列 priority_queue

#####        push 

把元素插入堆

#####        pop 

删除堆顶元素

#####        top 

查询堆顶元素（最大值）

### stack

#include < stack >

头文件stack包含栈。

声明

​       stack< int > st;

#### push

向栈顶插入

#### pop 

弹出栈顶元素



### deque

#include < deque >

双端队列deque是一个支持在**两端**高效插入或删除元素的连续线性存储空间。它就像是vector和queue的结合。与vector相比，deque在头部增删元素仅需要O(1)的时间；与queue相比，deque像数组一样支持随机访问。

#### begin/end

返回deque的头/尾迭代器

#### front/back 

队头/队尾元素

#### push_back 

从队尾入队

#### push_front 

从队头入队

#### pop_back 

从队尾出队

#### pop_front 

从队头出队

#### clear 

清空队列

### set

#include < set >

头文件set主要包括set和multiset两个容器，分别是“**有序集合**”和“有序多重集合”，即前者的元素不能重复，而后者可以包含若干个相等的元素。set和multiset的内部实现是一棵红黑树，它们支持的函数基本相同。

声明

​    set< int > s;

​	struct rec{…}; set< rec > s;   // 结构体rec中必须定义小于号

​	multiset< double > s;

#### size/empty/clear

​    与vector类似

#### 迭代器

set和multiset的迭代器称为“双向访问迭代器”，不支持“随机访问”，支持星号(*)解除引用，仅支持“++”和“—–”两个与算术相关的操作。

设it是一个迭代器，例如set< int >::iterator it;

若把it++，则it会指向“下一个”元素。这里的“下一个”元素是指在元素从小到大排序的结果中，排在it下一名的元素。同理，若把it--，则it将会指向排在“上一个”的元素。

#### begin/end

返回集合的首、尾迭代器，时间复杂度均为O(1)。

s.begin() 是指向集合中最小元素的迭代器。

s.end() 是指向集合中最大元素的下一个位置的迭代器。换言之，就像vector一样，是一个“前闭后开”的形式。因此--s.end()是指向集合中最大元素的迭代器。

#### insert

s.insert(x)把一个元素x插入到集合s中，时间复杂度为O(logn)。

在set中，若元素已存在，则不会重复插入该元素，对集合的状态无影响。

#### find

s.find(x) 在集合s中查找等于x的元素，并返回指向该元素的迭代器。若不存在，则返回s.end()。时间复杂度为O(logn)。

#### lower_bound/upper_bound

这两个函数的用法与find类似，但查找的条件略有不同，时间复杂度为 O(logn)。

s.lower_bound(x) **查找大于等于x的元素中最小的一个**，并返回指向该元素的迭代器。

s.upper_bound(x) **查找大于x的元素中最小的一个**，并返回指向该元素的迭代器。

#### erase

设it是一个迭代器，s.erase(it) 从s中删除迭代器it指向的元素，时间复杂度为O(logn)

设x是一个元素，s.erase(x) 从s中删除所有等于x的元素，时间复杂度为O(k+logn)，其中k是被删除的元素个数。

#### count

s.count(x) 返回集合s中等于x的元素个数，时间复杂度为 O(k +logn)，其中k为元素x的个数。

### map

#include < map >

map容器是一个键值对key-value的映射，其内部实现是一棵以key为关键码的红黑树。Map的key和value可以是任意类型，其中key必须定义小于号运算符。类比Python中的字典

声明

​       map<key_type, value_type> name;

​       例如：

​       map<long, long, bool> vis;

​       ->map<string, int> hash;//哈希结构重点理解，熟练运用

​       map<pair<int, int>, vector<int>> test;

#### size/empty/clear/begin/end

均与set类似

#### insert/erase

与set类似，但其参数均是pair<key_type, value_type>

#### find

h.find(x) 在变量名为h的map中查找key为x的二元组。

#### []操作符

hash[key] 返回key映射的value的引用，时间复杂度为O(logn)。

[]操作符是map最吸引人的地方。我们可以很方便地通过hash[key]来得到key对应的value，还可以对h[key]进行赋值操作，改变key对应的value。

## 常用库函数

### 常用库函数

万能头文件 #include<bits/stdc++.h>

#include< algorithm >

#### reverse 翻转

翻转一个vector：

reverse(a.begin(), a.end());

翻转一个数组，元素存放在下标1~n：

reverse(a + 1, a + 1 + n);

#### unique 去重

返回去重之后的尾迭代器（或指针），仍然为前闭后开，即这个迭代器是去重之后末尾元素的下一个位置。该函数常用于离散化，利用迭代器（或指针）的减法，可计算出去重后的元素个数。

把一个vector去重：

int m = unique(a.begin(), a.end()) – a.begin();

把一个数组去重，元素存放在下标1~n：

int m = unique(a + 1, a + 1 + n) – (a + 1);

#### random_shuffle 随机打乱

用法与reverse相同 

#### sort

对两个迭代器（或指针）指定的部分进行快速排序。可以在第三个参数传入定义大小比较的函数，或者重载“小于号”运算符。



把一个int数组（元素存放在下标1~n）从大到小排序，传入比较函数：

int a[MAX_SIZE];

bool cmp(int a, int b) {return a > b; }

sort(a + 1, a + 1 + n, cmp);



把自定义的结构体vector排序，重载“小于号”运算符：

struct rec{ int id, x, y; }

vector< rec > a;

bool operator <(const rec &a, const rec &b) {

​    return a.x < b.x || a.x == b.x && a.y < b.y;

}

sort(a.begin(), a.end());

 

#### lower_bound/upper_bound 二分

lower_bound 的第三个参数传入一个元素x，在两个迭代器（指针）指定的部分上执行二分查找，返回指向第一个大于等于x的元素的位置的迭代器（指针）。

upper_bound 的用法和lower_bound大致相同，唯一的区别是查找第一个大于x的元素。当然，两个迭代器（指针）指定的部分应该是提前排好序的。

 

在有序int数组（元素存放在下标1~n）中查找大于等于x的最小整数的下标：

int I = lower_bound(a + 1, a + 1 + n,x) – a;

 

在有序vector< int > 中查找小于等于x的最大整数（假设一定存在）：

int y = *--upper_bound(a.begin(), a.end(), x);

### string函数

#### string的构造函数的形式

#include<string>引入第三方库，库中常用的方法：

string str：生成空字符串

string s(str)：生成字符串为str的复制品

string s(str, strbegin,strlen)：将字符串str中从下标strbegin开始、长度为strlen的部分作为字符串初值

string s(cstr, char_len)：以C_string类型cstr的前char_len个字符串作为字符串s的初值

string s(num ,c)：生成num个c字符的字符串

string s(str, stridx)：将字符串str中从下标stridx开始到字符串结束的位置作为字符串初值

####  string的大小和容量：

1. **size()**和length()：返回string对象的字符个数，他们执行效果相同。 

2. max_size()：返回string对象最多包含的字符数，超出会抛出length_error异常
2. capacity()：重新分配内存之前，string对象能包含的最大字符数

#### string的字符串比较：

C ++字符串支持常见的比较操作符（>,>=,<,<=,==,!=），甚至支持string与C-string的比较。在使用>,>=,<,<=这些操作符的时候，根据“**当前字符特性**”将字符按**字典顺序**进行逐一得 比较。字典排序靠前的字符小，比较的顺序是从前向后比较，遇到不相等的字符就按这个位置上的两个字符的比较结果确定两个字符串的大小(前面减后面)。

另一个功能强大的比较函数是成员函数**compare()**。他支持多参数处理，支持用**索引值**和**长度**定位子串来进行比较。   他返回一个整数来表示比较结果，返回值意义如下：**0：相等 1：大于 -1：小于**

#### string的插入：push_back() 和 insert()

push_back(‘插入的字符’)是尾插入法

insert(s.begin(),‘插入的字符’)是特殊位置的插入法

```c
	// 方法一：append()
    string s1("abc");
    s1.append("def");
    cout<<"s1:"<<s1<<endl; // s1:abcdef
	// 方法二：+ 操作符
    string s2 = "abc";
    /*s2 += "def";*/
    string s3 = "def";
    s2 += s3.c_str();
```

#### string的遍历：借助迭代器 或者 下标法

```c
// 方法一： 下标法

    for( int i = 0; i < s1.size() ; i++ )
    {
        cout<<s1[i];
    }
    cout<<endl;

    // 方法二：正向迭代器

    string::iterator iter = s1.begin();
    for( ; iter < s1.end() ; iter++)
    {
        cout<<*iter;
    }
    cout<<endl;

    // 方法三：反向迭代器
    string::reverse_iterator riter = s1.rbegin();
    for( ; riter < s1.rend() ; riter++)
    {
        cout<<*riter;
    }
    cout<<endl;
```

#### string的删除：erase()

1. iterator erase(iterator p);//删除字符串中p所指的字符

2. iterator erase(iterator first, iterator last)*;//删除字符串中迭代器* 区间[first,last)上所有字符

#### string的字符替换：

1. string& replace(size_t pos, size_t n, const char *s);//将当前字符串从pos索引开始的n个字符，替换成字符串s

2. string& replace(size_t pos, size_t n, size_t n1, char c); //将当前字符串从pos索引开始的n个字符，替换成n1个字符c

3. string& replace(iterator i1, iterator i2, const char* s);//将当前字符串[i1,i2)区间中的字符串替换为字符串s

####  string的大小写转换：tolower()和toupper()函数 或者 STL中的transform算法



#### string的查找：find

```c
string s("I like C++ and Python.");
// 1. 查找一个字符串
cout << s.find("chicken") << endl;        // 结果是：9
// 2. 从下标为6开始找字符'i'，返回找到的第一个i的下标
cout << s.find('i',6) << endl;            // 结果是：11
// 3. 从字符串的末尾开始查找字符串，返回的还是首字母在字符串中的下标
cout << s.rfind("chicken") << endl;       // 结果是：9
// 4. 从字符串的末尾开始查找字符
cout << s.rfind('i') << endl;             // 结果是：18--因为是从末尾开始查找，所以返回第一次找到的字符
```

#### string的排序：sort(s.begin( ),s.end( ))

string s = "cdefba";    

sort(s.begin(),s.end());

#### string的分割/截取字符串：strtok() & substr()

```c
string s1("0123456789");
string s2 = s1.substr(2,5); // 结果：23456-----参数5表示：截取的字符串的长度
-------------------
char str[] = "I,am,a,student; hello world!";

const char *split = ",; !";
char *p2 = strtok(str,split);
while( p2 != NULL )
{
  cout<<p2<<endl;
  p2 = strtok(NULL,split);
}
```

### C语言中的字符串处理函数

#### strlen

函数功能：计算字符串str1的长度
		返回值：一个int值
		注意：字符串的长度不包括字符’\0’

```c
char str1[20] = "We are csdn!";
int size = strlen(str1);
printf("%d\n", size);  //size = 12
```

#### strcpy

函数功能：将字符串str2复制到字符串str1中，并覆盖str1原始字符串，可以用来为字符串变量赋值
		返回值：str1
		注意：1）字符串str2会覆盖str1中的全部字符，2）字符串str2的长度不能超过str1

```c
char str1[] = "We are Chinese!";
char str2[] = "Hello!";
strcpy_s(str1, str2); //str = Hello!
```



#### strcat

原型：strcat(str1,str2);
		功能：将字符串str2添加到字符串str1的尾部，也就是拼接两个字符串

原型2：strncat(str1,str2,n);
		功能2：将字符串str2的前n个字符添加到字符串str1的尾部

```c
char str1[20] = "We are csdn!";
char str2[] = "Hello!";
strcat_s(str1, str2);
printf("str1 = %s\n", str1);  //str1 = We are csdn!Hello!
```



#### strcmp

原型：strcmp(str1,str2);
		功能：比较两个字符串，如果两个字符串相等，则返回0；
		若str1大于str2（对于大于的理解，是指从两个字符串的第一个字符开始比较，若两个字符相同，则继续比较，若发现两个字符不相等，且str1中该字符的ASCII码大于str2中的，则表示str1大于str2），返回一个正数（这个正数不一定是1）；
		若str1小于str2，返回一个负数（不一定是-1）；若字符串str1的长度大于str2，且str2的字符与str1前面的字符相同，则也相对于str1大于str2处理

原型2：strncmp(str1,str2,n);
		功能2：**比较两个字符串的前n个字符**

```c
char str1[] = "Wearecsdn!";
char str2[] = "Wearecsdn!";
char str3[] = "Wearea!";
char str4[] = "Wearef!";
int cmp1 = strcmp(str1, str2);        //cmp1=0
int cmp2 = strcmp(str1, str3);        //cmp2=1
int cmp5 = strncmp(str1, str2, 5);    //cmp5=0
int cmp6 = strncmp(str1, str3, 5);    //cmp6=0
```



## 程序中的科学计数法

今天学c看到`const int a=1e6+10`不是很理解,原来是科学计数法的表示形式。

`const int a=1e6+10`=1000010；$1*10^6+10$

`6.555e6+10`=6555010；$6.555*10^6+10$



## 面向对象

## VS Code 基本配置

### 编译C/C++程序

首先在自己的电脑上配置MinGw64，之后将其添加到环境变量当中去。

之后新建一个文件夹，注意要用英文命名，通过vs code打开。

最后写一段程序，在运行选项栏里选择以非调试模式运行，生成.vs code文件夹，里面包含了launch.json和tasks.json文件。

launch.json文件的配置：

```json
{
    // 使用 IntelliSense 了解相关属性。 
    // 悬停以查看现有属性的描述。
    // 欲了解更多信息，请访问: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "g++.exe - 生成和调试活动文件",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\exe\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "E:\\mingw64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "将反汇编风格设置为 Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++.exe 生成活动文件"
        }
    ]
}
```

tasks.json文件的配置：

```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe 生成活动文件",
            "command": "E:\\mingw64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\exe\\${fileBasenameNoExtension}.exe",
                "-fexec-charset=GBK"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "调试器生成的任务。"
        }
    ],
    "version": "2.0.0"
}
```

### 常见错误

`undefined reference to 'WinMain'	collect2.exe: error: ld returned 1 exit status`

解决办法：没有在c/cpp文件中写出main函数,而且**main**别写错！！

### 编译Python程序-jupyter lab



## 经典概念辨析

编译器是对代码进行编译，转换为包含在目标文件中的机器语言版本(字节码)，生成扩展名为.o/.obj的目标文件；解释器是

### 标识符和关键字

标识符：编写程序时使用字符集中的字符组合成一系列“**单词**”代表变量、常量、函数等。用于声明的这些“单词”称为标识符。

用户自定义的标识符：由程序员定义说明的标识符，包括程序中使用的变量名、符号常量名、函数名、结构体类型名、共用体类型名等。

自定义标识符的定义遵循规则：

1. 只由英文、数字、或 _（下划线） 组成
2. 第一个字符只能是英文字母或下划线，不能是数字
3. 大小写英文字母代表不同的字符
4. 不能是C/C++语言的关键字

关键字：系统预定说明的标识符称为关键字

1.数据类型关键字
		char、int、short、long、float、double、signed、unsigned、struct、union、enum、void
		2.存储类型关键字
		auto、register、static、extern
		3.流程控制关键字
		if、else、switch、default、case、while、do、for、break、continue、return、goto
		4.其他关键字
		sizeof、typedef、const、volatile

正确标识符命名：  smart  _decision  high3  Area

不正确标识符命名：5smart(以数字开头)
                                      	  Bomb?(含有特殊字符？)
                                            High.balance(把下划线“_”与“.”混淆)  
                                            float（不能用C语言中的关键字）



### 变量的声明和定义

声明的两种方式：

一种是需要建立存储空间的：

例如：int a ;在声明的时候就已经建立了存储空间。这种声明是”定义性声明(defining declaration)”，即我们平时所说的“定义”。

另一种是不需要建立存储空间的：

只是告诉编译器某变量已经在别处定义过了。例如：extern int a。其中，变量a是在别处定义的。这种声明是”引用性声明(referncing declaration)”，即我们平时所说的“声明”。

例子：

int a; //定义性声明，分配存储空间，初值不确定

int b = 0; //定义性声明，分配存储空间，赋初值

extern int c; //引用性声明，不分配存储空间，只是告诉编译器这个变量已经在别处定义过了

### 函数的声明和定义

函数的定义和声明也是一样，定义需要分配存储空间；声明只是告诉编译器这个函数已经在别处定义过了。函数的定义和声明比较好区分。有函数体的即为定义，不带函数体即为声明。

```c
//声明
double sqrt(double x);


//定义
double sqrt(double x)

{

    return x*x;

}
```



# c++零基础入门99题——夜深人静写算法

1.函数2235

给你两个整数 `num1` 和 `num2`，返回这两个整数的和。

```c++
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
        
    }
};
```

2.库函数69

给你一个非负整数 x ，计算并返回 x 的 算术平方根 。

由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。

注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。

```c++
class Solution {
public:
    int mySqrt(int x) {
        //库函数的使用
        return (int)sqrt(x);

    }
};
```

## 7.29-7.30错误总结与复盘（强基计划）

1.数组的二维遍历初始值的设定(2006)

```c++
for(int i = 0;i < nums.size();i++){
    for(int j = i;j < nums.size();j++){
        .......;
    }
}
```

2.冒泡排序

```c++
int temp;
for(int i = 0;i < nums.size();i++){
    for(int j = 0;j < nums.size();j++){
        if(nums[j] > nums[j+1]){
            temp = nums[j];
            nums[j+1] = nums[j];
            nums[j] = nums[j+1];
        }
    }
}
```

3.sum的位置(1672)

```c++
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxv = 0;
        //一个是放在这里
        //int sum = 0;
        for(int i =0;i < accounts.size();i++){
            //一个是放在这里
            int sum = 0;
            for(int j = 0;j < accounts[i].size();j++){
                sum += accounts[i][j];
            }
            maxv = max(maxv,sum);
        }
        return maxv;
    }
};
放在初始求得是全部数组中每行的和；放在后面求的是二维数组中单独行的和。
```

4.二分查找应用条件是——**有序数组**

结合矩阵中元素的搜索

```c++

```

5. /2和>>1的区别：（c++)

>1.操作对象类型不同是右移符百号，它在操度作时只允许整数
>	/是除法，它可以操作不同类型的数据：浮点数除法最终结果是浮点数，整数除法的最终结果是整数。
>	只有当被操作数数据类型为知大于0的整数时，运算道结果才是内相同的。
>	2.运算效率不同
>	右移操作通常情况下，会比整数除法速度快。涉及容到浮点数的除法速度是最慢的。
>	3.优先级不同
>	右移运算的优先级比除法低，在同时参与的运算中，先计算乘除，后计算左移或右移

## 8月-10错误总结与复盘（强基计划）

加深对递归函数调用的过程理解与实战书写；只有过程清晰了，才能跟高的运用递归函数去提高效率。

scanf与scanf_s安全性问题：

#define _CRT_SECURE_NO_WARNINGS->解除安全隐患

同样gets也不再支持而改用**gets_s**









```c
#include<stdio.h>
//进程数量->题目中是五个
void process(){
}
void cpu(){
    process();
    func1();
    func2();
    func3();
    func4();
    func5();
    
}
void func1(){
    //x=操作的实现
}
void func2(){
    //x++操作的实现
}
void func3(){
    //x--操作的实现
}
void func4(){
    //！？？操作的实现
}
void func5(){
    //操作的实现
}

int main(){
    cpu();
}
```

