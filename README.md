What's this?
==========
ECPU = E(ducational) CPU

CPU実験の教育用8bitCPUのアセンブラをコンパイルするためのコンパイラです。
ハンドアセンブルが面倒くさいので作りました。

How to build?
----------
$ make

How to use?
----------
$ cat inputfile | ./bin/compiler
$ ./bin/compiler inputfile

今のところ、標準入力から読み込まれたアセンブラをコンパイルするだけです。
そのうちオプションとかでファイルから読み込める普通のコンパイラっぽくなるかもしれません。

コンパイルはCコンパイラさえあればできますが、bison,flexを用いてコンパイラを自動生成しているので
開発にはbison,flexが必要です。

And more...
----------
* 仕様
  - ファイルの最後に改行がないとシンタックスエラーを吐く(改善できるけどめんどくさい)
  - ラベルの上限が255文字までだったり、行数が256行までだったりして色々制限があるけど
    実機のほうがしょぼいので無問題
  - 即値アドレスはすべて16進数でなければいけない(最後にHをつけること)
* その他、バグが色々残っていると思われるのでバグつぶしに協力してくれる人募集中
* ラベルがおかしくなるバグは修正しました。報告してくれた人ありがとう。
* $ ./bin/compiler -v input > output; echo | cat - input | paste output -
  でレポート提出用の出力が出来上がります。

Author: hoo89(hoo89@me.com)
