# C/C++ Tutorial

## 參考資源

1. [VScode安裝C/C++教學](https://leolistudio.com/how-to-use-vscode-write-cpp/)

2. [C++與演算法](https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/index.html)

3. [交大 - 計算機概論與程式設計 Introduction to Computers and Programming](http://ocw.nctu.edu.tw/course_detail.php?bgid=0&gid=0&nid=192)
---
## 使用工具:
1. Visual Stdio Code
2. [下載MinGW Installer](https://zh-tw.osdn.net/projects/mingw/releases/68260)
   1. 將 **C:\MinGW\bin** 加入Windows環境變數
   2. 設定c_cpp_properties.json，在打開cpp檔案時，按F1，輸入: ```C/C++: Edit Configurations (UI)```，編譯器路徑選擇：../g++.exe 的選項，IntelliSense 模式 選擇：gcc-x64 的選項
   3. 設定tasks.json，按F1，於命令列輸入: ```Tasks: Configure Default Build Task```，然後選擇: C/C++ g++.exe 建置使用中檔案，即可完成設定
   4. 設定launch.json，按F5，選擇: g++.exe 建置及偵錯使用中的檔案。即可完成所有設定並開始 compile code and show printf message on cmd

---

## Table of content
- [C/C++ Tutorial](#cc-tutorial)
  - [參考資源](#參考資源)
  - [使用工具:](#使用工具)
  - [Table of content](#table-of-content)
  - [CMD指令](#cmd指令)
  - [基礎練習](#基礎練習)
    - [變數名稱規則:](#變數名稱規則)
    - [資料型態、所需的記憶體:](#資料型態所需的記憶體)
    - [printf](#printf)
    - [scanf](#scanf)
  - [Ch01](#ch01)
    - [低階語言](#低階語言)
    - [高階語言](#高階語言)
    - [OOP 物件導向 (Object Oriented Programming)](#oop-物件導向-object-oriented-programming)
    - [Algorithm 演算法](#algorithm-演算法)
  - [Ch02](#ch02)
    - [Variable 變數](#variable-變數)
    - [Combination rule](#combination-rule)
    - [sizeof](#sizeof)
    - [Literals](#literals)
    - [Escape sequences 逃脫字元](#escape-sequences-逃脫字元)
    - [遞迴](#遞迴)
    - [console](#console)
  - [Ch03](#ch03)
    - [cin](#cin)
    - [資料轉型](#資料轉型)
    - [Control Structures 控制結構](#control-structures-控制結構)
    - [Boolean Operator](#boolean-operator)
  - [Ch04](#ch04)
    - [strlen()](#strlen)
    - [strcmp()](#strcmp)
  - [Other](#other)
    - [直譯/編譯語言](#直譯編譯語言)
      - [編譯語言](#編譯語言)
      - [直譯語言](#直譯語言)

## CMD指令

1. ```where gcc``` -> 找出gcc.exe的位置

---

## 基礎練習

### 變數名稱規則:

1. 開頭必為英文字母(大小寫分開判斷)
2. 名稱中不能含有 `.`
3. 不使用中文
4. 不使用運算符&保留字元
5. 名稱不超過255字元

### 資料型態、所需的記憶體:
※ 1byte=8bit
1. char: 1byte
2. unsigned int: 4byte, %u
   * Range: 0 ~ 4294967295
3. unsigned short int: 2byte, %hu
   * Range: 0 ~ 65535
4. short int: 2byte %hd
   * Range: -32768 ~ 32767
5. int: 4byte (Normally), %d
   * Range: -2147483648~2147483647
6. long int: 4byte, %ld
   * Range: -2147483648~2147483647
7. float: 4byte, %f
   * Range: 1.2E-38 ~ 3.4E+38
8. double: 8byte, %lf
   * Range: 1.7E-308 ~ 1.7E+308
9.  long double: 16byte, %Lf
    * Range: 3.4E-4932 ~ 1.1E+4932
10. boolean: 8byte, true or false

### printf
```C++
printf("控制字串", 參數);
```
1. 整數: %d
2. 浮點數: %f
3. 倍精度浮點數: %lf
4. 字元: %c
5. 字串: %s
6. 換行: \n

### scanf
```C++
scanf("控制字串", 參數);
```
1. 控制字串: 可輸入多個變數 (多變數以空格區分)
2. 參數: 把想儲存的變數名稱前加&符號

## Ch01

Introduction to Computers and Programming

### 低階語言
共有兩種:
1. Machine Language (機器語言)
2. Assembly Language (組合語言)

### 高階語言
例如: C, C++, C#, Python, Java... 我們常用的語言

### OOP 物件導向 (Object Oriented Programming)

1. 資料物件: 把許多資料，組裝成一個整體來看

### Algorithm 演算法

> 定義: Step by step sequence of instruction, 一步一步的指令序列

流程:
1. Terminal 端點: 開始或結束點
2. Input/Output(I/O): 輸入輸出
3. Process: Procedure, 處理程序
4. Flow Line: 指向
5. Desion: 決定或決策
6. Loop: 迴圈、遞增遞減，大量重複做一樣的事情
7. Predefined: 預先定義好的一個process
8. Connector: 連接

## Ch02

### Variable 變數
* 變數其實是Memory location，會被assignment到一個記憶體位置
* Declare be for use, 宣告後才能使用
* Alphabetical: 按字母順序
* Built in: 內建
* Programming-Created data type(程式設計語言), 並自己定義 acceptable values
* Type mismatches: 資料型態錯誤
* 如果在int輸入浮點數，則會產生Implicit(隱含的)，或是Automatic(自動的)，自動型別轉換

### Combination rule
identifiers要使用有意義的名稱
* Case sensitivity: 敏感的語言，大小寫英文都視為相同變數，例如: C++, Python, Java

### sizeof
```c++
// 讀取object記憶體大小
sizeof(Variable)
```

### Literals
解釋:
> 常數，包含數值、字元、字串，在程式裡不會改變的，都稱之為常數

稱為Literal的原因: Programming literal type

### Escape sequences 逃脫字元
escape sequence char (character)
* ```\n``` : 換行
* ```\t``` : Tab
* ```\\``` : \
* ```\"``` : "
* ```\r``` : 游標移回行首，Carriage return
* ```\a``` : 電腦的嗶聲
* ```\0``` : 空白

### 遞迴
1. Post increment: 後置遞
2. Pre increment: 前置遞

### console

* 連續輸出: cascading

## Ch03

### cin
* 與cin搭配: Extraction operator
* 讓使用者能夠清楚知道目前的I/O，Maximize user friendly Input Output
* cin / cou array時，C++會自動在最後一個字元加上`'\0'`來標記結束

### 資料轉型
1. Type coercion: 自動轉型
2. Type casting: 手動轉型

### Control Structures 控制結構
flow control主要有兩個方式:
1. Selection: select statements(聲明)，用敘述句來執行
   * Boolean expression (布林表達式)，其中很重要的是: Relational expressions (關係表達式)
   * 用許多表示式比較operands (Math: 運算數)
2. Repetition

### Boolean Operator
1. ```&&``` : Logical **and**, example: x<5 && x<10
2. ```||``` : Logical **or**, example: x<5 || x<4
3. ```!``` : Logical **not**, example: !(x<5 && x<10)

---

## Ch04
string.h函式庫
* 只適用於char array

### strlen()
功能: 得到字串長度
* 回傳值: int (代表陣列長度)
* 是不包含`'\0'`的長度
* 通常搭配for迴圈使用

### strcmp()
功能: 比較字典順序
* `strcmp(string_01, string_02)`
* 回傳值: int (結果值)
* string_01比string_02順序
  * 較前: `-1`
  * 相同: `0`
  * 較後: `-1`
* 常用於判斷兩個字串是否相同

## Other

### 直譯/編譯語言
參考資料: [C++ 30天屠龍記](https://ithelp.ithome.com.tw/articles/10214510)

#### 編譯語言
編譯語言會在執行程序時，先透過編譯器將程序編譯成電腦讀得懂的機器碼(machine language)，
這個文件就是一個執行檔(Unix)，.exe (Windows)，多數為靜態語言

代表: C/C++, R, Rust, Go, Visual Basic, Swift, Obj-C等

#### 直譯語言
直譯語言的運行器會將一行一行的程式碼，先後編譯成機器碼，讓程序檢測更靈活(符合人性)，
本身彈性更大，但緩慢的運行速度，是直譯語言的最大壞處，許多直譯語言的模塊，都是用編譯語言寫成，
也被認為是Scripting Language

代表: Javascript, Python, Shellscript