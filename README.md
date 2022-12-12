# C 基礎學習

[參考資源](https://leolistudio.com/how-to-use-vscode-write-cpp/)

## 使用工具:
1. Visual Stdio Code
2. [MinGW Installer](https://zh-tw.osdn.net/projects/mingw/releases/68260)
3. 將 C:\MinGW\bin 加入環境變數 (看當時安裝的位置決定)
4. 設定 c_cpp_properties.json，在打開C語言檔案時，按下F1，輸入: C/C++: Edit Configurations (UI)，編譯器路徑 選擇：../g++.exe 的選項，IntelliSense 模式 選擇：gcc-x64 的選項
5. 設定 tasks.json，按 F1，於命令列輸入：Tasks: Configure Default Build Task，然後選擇：C/C++ g++.exe 建置使用中檔案，即可完成設定
6. 設定 launch.json， F5，選擇：g++.exe 建置及偵錯使用中的檔案。即可完成所有設定並開始 compile code and show printf message on cmd

---

## CMD指令:

1. where gcc -> 找出gcc.exe的位置

---

## 變數名稱規則:

1. 開頭必為英文字母
2. 名稱中不能含有 .
3. 不使用中文
4. 不使用運算符&保留字元
5. 名稱不超過255字元

## 資料型態、所需的記憶體:
※ 1byte=8bit
1. 字元char: 1byte
2. 短整數short: 2byte
3. 整數(16位元)int: 2byte
4. 整數(32位元)int: 4byte
5. 長整數long: 4byte
6. 單精度浮點數float: 4byte
7. 倍精度浮點數double: 8byte

## printf("控制字串", 引述);

1. 整數: %d
2. 浮點數: %f
3. 倍精度浮點數: %lf
4. 字元: %c
5. 字串: %s
6. 換行: \n

## scanf("控制字串", 引數);

1. 控制字串: 可輸入多個變數 (多變數以空格區分)
2. 引數: 把想儲存的變數名稱前加&符號
