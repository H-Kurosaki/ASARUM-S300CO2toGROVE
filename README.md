# ASARUM-S300CO2toGROVE
ELT社のCO2センサS-300をGroveコネクタに対応させる基板のデータを公開しています。
![boardall](https://github.com/user-attachments/assets/1e4d8153-3a55-433f-95e6-f165f9007631)

◯公開しているデータの内容

/main/GerberData

Grove化基板のガーバーデータ、FusionPCBのファイル名に準拠しています。このフォルダの内容をzipに圧縮すればそのまま発注に使えます。

/main/EagleBoard

Eagle形式のPCBデータ(GerberDataの元データ)

/main/EagleLbr

Eagle形式のライブラリS-300のフットプリント。背面のJ11,J12コネクタのみ配置してあります。おまけでK30のフットプリントも入っていますが検証していません。

/main/BOM

実装部品表  

◯基板の仕様

S-300のI2CインターフェースをGroveケーブルで引き出すことができます。
S-300の裏側の2mmピッチコネクタを使用するので基板から簡単にセンサを着脱できる実装が行えます。
MCDL校正を行う場合は10分間MCDLと書かれた部分のピンをジャンパーで短絡してください。
その他I2C以外のピンもよく使いそうなものはピンヘッダに出ています。

![image](https://github.com/H-Kurosaki/ASARUM-S300CO2toGROVE/blob/main/sch.png)
![image](https://github.com/H-Kurosaki/ASARUM-S300CO2toGROVE/blob/main/brd.png)
![image](https://github.com/H-Kurosaki/ASARUM-S300CO2toGROVE/blob/main/footprint.png)

◯使用上の注意とライセンス

本リポジトリで公開しているデータはELT社の公式なものではありません。
本リポジトリでライセンスを設定可能なファイルにはMITライセンスを適用させていただきます。
二次配布、商用利用も可能なデータとして配布しますが、本データを使用したことによって生じた結果については利用者が全ての責任を負うものとします。

