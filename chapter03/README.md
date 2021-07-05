# Chapter 3: Data types

## Section 3.1: Interpreting Declarations

The following set of operators with identical precedence and associativity are reused in declarators, namely:

* The unary * "deference" operator which denotes a pointer.
* The binary [] "array subscription" operator which denotes an array.
* The (1+n)-ary () "function call" operator which denotes a function.
* The () grouping parentheses which override the precedence and associativity of the rest of the listed operators.

The above three operators have the following precedence and associativity:

|Operator|Precedence|Associativity|
|:------:|:--------:|:-----------:|
|[](Array subscription)|1|Left-to-right|
|()(Function call)|1|Left-to-right|
|*(dereference)|2|Right-to-left|

When interpreting declarations, one has to start from the identifier outwards and apply the adjacent operators in the correct order as per the above table.

|Expression|Interpretation|
|:--------:|:------------:|
|thing[X]|an array of size x of ...|
|thing(t1, t2, t3)|a function taking t1, t2, t3 and returning ...|
|*thing|a pointer to ...|

**Examples**
```c
char *names[20];
```
[] takes precedence over *, so this is: `names` is an array of size 20 of a pointer to `char`.

```c
char (*place)[10];
```
The parentheses override the precedence, the * is applied first: `place` is a pointer to an array of size 10 of `char`.

```c
int fn(long, short);
```
`fn` is a function taking `long, short`and returning `int`.

```c
int *fn(void);
```
`fn` is taking `void` and returning a pointer to `int`

## Section 3.2: Fixed width integer types.

Included in the header \<stdint.h>. These types are optional.

```c
/* Commonly used types */
uint32_t u32 = 32; /* 32 bits wide */
uint8_t u8 =  255; /* 8 bits wide */
int64_t i64 = -65; /* 64 bit in two's complement representation */
```

## Section 3.3: Integer types and constants.

Signed integers:
```c
signed char c = 127; /* 1 byte */
signed short int si = 32767; /* 16 bits */
signed int i = 32767; /* 16 bits */
signed long int li = 2147483647; /* 32 bits */
```

Unsigned integers
```c
unsigned int i = 65535;
unsigned short = 2767;
unsigned char = 255;
```

Different types of integer constants (*literals*):
```c
int d = 42; /* decimal */
int o = 052; /* octal */
int x = 0xaf; /* hexadecimal */
int X = 0XAf; /* Letters 'a' through 'f' case insensitive represents 10 through 15 */
```

Decimal constants are always signed. Hex start with Ox or OX and Octal with 0. The latter two can be signed or unsigned.
```c
long int i = 0x32; /* no suffix represent int, or long int */
unsigned int ui = 65535u; /* u or U represent unsigned, or long int */
long int li = 65536l; /* l or L represent long int */
```

## Section 3.4: Floating point constants:

Three types of floating points, float, double and long double:
```c
float f = 0.314f; /* suffix f or F denotes type of float */
double d = 0.314; /* no suffix denotes double */
long double ld = 0.314l; /* l or L denotes long double */

double x = 1.; /* valid, fractional part is optional */
double y = .1; /* valid, whole number part is optional */

double sd = 1.2e3; /* decimal fraction 1.2 is scaled by 10^3 */
```

## Section 3.5: String literals:

A string literal in C is a sequence of chars, terminated by a literal zero.
```c
char* str = "Hello, world"; /* string literal */

char a1[] = "abc"; /* a1 is char[4], {'a','b','c','\0'} */
char a2[4] = "abc"; /* same as a1 */
char a3[3] = "abc"; /* same as a1 without '\0' */
```
String literals are not modifiable.

String literals are concatenated at compile.

String literals support different character sets.