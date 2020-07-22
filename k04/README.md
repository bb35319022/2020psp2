# 課題4 レポート

bb35319022 小池真白

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明
 l.5:構造体を定義

 l.20:データファイル名をfname1に格納する

 l.24:fname1で指定したファイルの先頭アドレスをfp1に読み込む

 l.32:データファイル名をfname2に格納する

 l.36:fname2で指定したファイルの先頭アドレスをfp2に読み込む

 l.45:学籍番号を入力する

 l.49:ファイルを一行ずつbufに読み込み、可能な限り以下の動作を繰り返す

 l.51:fp1を読み込み、data[i].gender,data[i].heightに格納する

 l.52:fp2を読み込みdata[i].IDに格納する

 l.56:学籍番号を出力する

 l.57~60:genderが1の時Male、そうでない時Femaleを出力する

 l.63:身長を出力する

 l.68:学籍番号がリストに存在しないとき　No data　を出力する

 l.73:iに1を足す

## 入出力結果

例えば，ID 45313125のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```

例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```

## 修正履歴
[comment #20200722]
- i = i++; と書いてはいけません.  
`i++;` または `i=i+1;` にしてください. 
- mainプログラム中に 13 という生の値を入れるのはあまりよくないので,  `#define ID_NUM 14` (ID_NUMはIDの個数を示す)としてmain内では13の代わりに `ID_NUM-1` を使う方が良いです. 
また, ファイルの行数からIDの個数が分かると思うので, 読み込んだ行数をカウントしておく変数を用意しておいて, その変数を使用するという手もあります. 
