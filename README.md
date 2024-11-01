# C/C++ Tutorial

## 參考資源

1. [VScode安裝C/C++教學](https://leolistudio.com/how-to-use-vscode-write-cpp/)
2. [~~C++與演算法~~](https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/index.html)
3. [~~交大 - 計算機概論與程式設計 Introduction to Computers and Programming~~](http://ocw.nctu.edu.tw/course_detail.php?bgid=0&gid=0&nid=192)
4. [~~C++~~](https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/index.html)
5. [語言技術:C++ Gossip](https://openhome.cc/Gossip/CppGossip/)
6. [cplusplus tutorial](https://cplusplus.com/doc/tutorial/)
7. [山姆大叔談 C++：從歷史談起，再給個定義—Modern C++ 解惑](https://ithelp.ithome.com.tw/users/20120425/ironman/2507)

---

## 使用工具

1. Visual Stdio Code
2. 下載並解壓縮[MinGW-w64](https://www.mingw-w64.org/downloads/#pre-built-toolchains-and-packages)
   1. 選擇[LLVM-MinGW](https://github.com/mstorsjo/llvm-mingw/releases)
   2. 將解壓縮後的資料夾路徑加入到Windows環境變數
3. [CodeRunner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner): 使用`Ctrl + N`就可以進行編譯

---

## Table of content

- [C/C++ Tutorial](#cc-tutorial)
  - [參考資源](#參考資源)
  - [使用工具](#使用工具)
  - [Table of content](#table-of-content)
  - [CMD指令](#cmd指令)
  - [基礎練習](#基礎練習)
    - [變數名稱規則](#變數名稱規則)
    - [資料型態、所需的記憶體](#資料型態所需的記憶體)
    - [printf](#printf)
    - [scanf](#scanf)
  - [Chapter 01 基本觀念](#chapter-01-基本觀念)
    - [1-1 低階語言](#1-1-低階語言)
    - [1-2 高階語言](#1-2-高階語言)
    - [1-3 物件導向 (Object Oriented Programming)](#1-3-物件導向-object-oriented-programming)
    - [Algorithm 演算法](#algorithm-演算法)
  - [Chapter 02 Variable 變數](#chapter-02-variable-變數)
    - [2-1 Combination rule](#2-1-combination-rule)
    - [2-2 sizeof](#2-2-sizeof)
    - [2-3 Literals](#2-3-literals)
    - [2-4 Escape sequences 逃脫字元](#2-4-escape-sequences-逃脫字元)
    - [2-5 遞迴 Recursion](#2-5-遞迴-recursion)
    - [2-6 Console](#2-6-console)
  - [Chapter 03](#chapter-03)
    - [3-1 cin](#3-1-cin)
    - [3-2 資料轉型](#3-2-資料轉型)
    - [3-3 Control Structures 控制結構](#3-3-control-structures-控制結構)
    - [3-4 Boolean Operator](#3-4-boolean-operator)
  - [Chapter 04](#chapter-04)
    - [4-1 strlen](#4-1-strlen)
    - [4-2 strcmp](#4-2-strcmp)
  - [Chapter 05 Variable](#chapter-05-variable)
  - [Chapter 06 Conversion](#chapter-06-conversion)
  - [Chapter 07 Logical Operation](#chapter-07-logical-operation)
    - [7-1 xor](#7-1-xor)
  - [Other](#other)
    - [直譯\&編譯語言](#直譯編譯語言)
      - [編譯語言](#編譯語言)
      - [直譯語言](#直譯語言)

## CMD指令

1. `where gcc` -> 找出gcc.exe的位置

---

## 基礎練習

### 變數名稱規則

1. 開頭必為英文字母(大小寫分開判斷)
2. 名稱中不能含有 `.`
3. 不使用中文
4. 不使用運算符&保留字元
5. 名稱不超過**255**字元

### 資料型態、所需的記憶體

※ 1byte = 8bit

| Data Type |  Size  | Format String | Range |
| :-------: | :----: | :-----------: | :---: |
| char      | 1byte  | %c            | |
| unsigned int | 4byte | %u          | 0~4294967295 |
| unsigned short int | 2byte | %hu   | 0~65535 |
| short int | 2byte  | %hd           | -32768~32767 |
| int       | 4byte  | %d            | -2147483648~2147483647 |
| long int  | 4byte  | %ld           | -2147483648~2147483647 |
| float     | 4byte  | %f            | -1.2E-38~3.4E+38 |
| double    | 8byte  | %lf           | -1.7E-308~1.7E+308 |
| long double | 16byte | %Lf           | -3.4E-4932~1.1E+4932 |
| boolean   | 8byte  | %d           | false(0) or true(1) |

### printf

```C++
#include <iostream>
#include <string>
using namespace std;

cout << "Hello World" << endl;
```

Format string:

- 整數: `%d`
- 浮點數: `%f`
- 倍精度浮點數: `%lf`
- 字元: `%c`
- 字串: `%s`
- 換行: `\n`

※ 透過Terminal可以將`cout`的訊息輸出到`.txt`檔案中: `.\main.ext > main.txt`

### scanf

```C++
#include <iostream>
#include <string>
using namespace std;

int number;
cin >> number;
```

## Chapter 01 基本觀念

Introduction to Computers and Programming

### 1-1 低階語言

共有兩種:

1. Machine Language (機器語言)
2. Assembly Language (組合語言)

### 1-2 高階語言

例如: C, C++, C#, Python and Java...等(現代較常使用的語言)

### 1-3 物件導向 (Object Oriented Programming)

> Object Oriented Programming，簡稱為OOP

資料物件: 把許多資料，組裝成一個整體來看

### Algorithm 演算法

> 定義: Step by step sequence of instruction 一步一步的指令序列

流程:

1. Terminal 端點: 開始或結束點
2. Input/Output(I/O): 輸入輸出
3. Process: Procedure, 處理程序
4. Flow Line: 指向
5. Decision: 決定或決策
6. Loop: 迴圈、遞增遞減，大量重複做一樣的事情
7. Predefined: 預先定義好的一個process
8. Connector: 連接

## Chapter 02 Variable 變數

- 變數其實是**Memory location**，會被assignment到一個記憶體位置
- Declare be for use -> 宣告後才能使用
- Alphabetical: 按字母順序
- Built in: 內建
- Programming-Created data type(程式設計語言)，並自己定義acceptable values
- Type mismatches: 資料型態錯誤
- 如果在int輸入浮點數，則會產生Implicit(隱含的)，或是Automatic(自動的)，自動型別轉換

### 2-1 Combination rule

identifiers要使用有意義的名稱

**Case Sensitivity**: 敏感的語言，大小寫英文都視為**不同的變數**，例如: C++、Python、Java

### 2-2 sizeof

```c++
// 讀取object記憶體大小
sizeof(Variable)
```

### 2-3 Literals

> 常數，包含數值、字元、字串，在程式裡不會改變的，都稱之為常數

稱為Literal的原因: Programming literal type

### 2-4 Escape sequences 逃脫字元

escape sequence char (character)

- `\n` ->  換行
- `\t` ->  Tab
- `\\` ->  \
- `\"` ->  "
- `\r` ->  游標移回行首，Carriage return
- `\a` ->  電腦的嗶聲
- `\0` ->  空白

### 2-5 遞迴 Recursion

1. Post increment: 後置遞
2. Pre increment: 前置遞

### 2-6 Console

連續輸出: cascading

## Chapter 03

### 3-1 cin

- 與cin搭配: Extraction operator
- 讓使用者能夠清楚知道目前的I/O，Maximize user friendly Input Output
- cin / cou array時，C/C++會自動在最後一個字元加上`'\0'`來標記結束

### 3-2 資料轉型

1. Type coercion: 自動轉型
2. Type casting: 手動轉型

### 3-3 Control Structures 控制結構

flow control主要有兩種方式:

1. Selection: select statements(聲明)，用敘述句來執行
   1. Boolean expression (布林表達式)，其中很重要的是: Relational expressions (關係表達式)
   2. 用許多表示式比較operands (Math: 運算數)
2. Repetition

### 3-4 Boolean Operator

1. `&&` : Logical **and**, example: `x<5 && x<10`
2. `||` : Logical **or**, example: `x<5 || x<4`
3. `!` : Logical **not**, example: `!(x<5 && x<10)`

---

## Chapter 04

`string.h`函式庫: 只適用於char array

### 4-1 strlen

```C++
// return: 字串長度
strlen()
```

- 回傳值: int (代表陣列長度)
- 是不包含`'\0'`的長度
- 通常搭配for迴圈使用

### 4-2 strcmp

```C++
// 比較兩個字串
strcmp(string_01, string_02)
```

- `strcmp(string_01, string_02)`
- return value: int (結果值)
- 比較`string_01`與`string_02`之大小
  - `string_01` < `string_02` -> -1
  - Equal -> 0
  - `string_01` < `string_02` -> -1
- 常用於判斷兩個字串是否相同

## Chapter 05 Variable

與C語言相同，C++的變數宣告都是先指定data type，且可以透過**指定運算子**(Assignment Operator)進行賦值。

Example:

```C++
int age = 18;
```

## Chapter 06 Conversion

Ref: [arithmetic.cpp](./open_home_learn/arithmetic.cpp)

主要的型態轉換有2種:

- Implicit conversion (隱性轉換): 在多種型態的計算中，長度較長的data type會成為目標型態，較小的型態都會成為目標型態。
  
  Example:

  ```C++
  int num = 20;
  cout << num / 3;
  ```

- Explicit conversion (顯性轉換): 加上轉型語法(cast)進行強制轉換data type，針對不同使用情形，設計了4種轉型方式:
  - static_cast

    Example:

    ```C++
    int x = 20;
    int y = 3;
    // 轉換成double
    cout << static_cast<double>(a) / b;
    ```

  - const_cast
  - reinterpret_cast
  - dynamic_cast

## Chapter 07 Logical Operation

### 7-1 xor

xor按照步驟解說([logical.cpp](./open_home_learn/logical.cpp))

1. `ch = 'A'` : A在ASCII碼中代表的值為**65**
2. `ch = ch ^ 0x7` : 十六進制的0x7代表的是7，轉換成二進制為`00000111`，而`A`的二進制為`01000001`，做xor比較得到`01000110`，換成十進制則為`2+4+2^6=6+64=70`，換成ASCII碼則為`F`。
3. 將`01000110`與`00000111`(0x7)做xor，則得到`01000001`，也就是原本的`A`。
4. 因此使用相同數值進行xor，可以進行簡單的encode & decode。

## Other

### 直譯&編譯語言

參考資料: [C++ 30天屠龍記](https://ithelp.ithome.com.tw/articles/10214510)

#### 編譯語言

編譯語言會在執行程序時，先透過編譯器將程序編譯成電腦讀得懂的機器碼(machine language)，這個文件就是一個執行檔(Unix)，`.exe`(Windows)，多數為靜態語言

代表: C/C++, R, Rust, Go, Visual Basic, Swift and Obj-C等

#### 直譯語言

直譯語言的運行器會將一行一行的程式碼，先後編譯成機器碼，讓程序檢測更靈活(符合人性)，
本身彈性更大，但緩慢的運行速度，是直譯語言的最大壞處，許多直譯語言的模塊，都是用編譯語言寫成，也被認為是Scripting Language

代表: Javascript, Python and Shellscript
