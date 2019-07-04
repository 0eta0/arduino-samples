//データを入れる配列を用意
int MicData;

int counter = 0;
int hosei = 0;
long sum = 0;

////////////
//初期設定//
////////////

void setup()
{
  Serial.begin(115200);
  Serial.println("\r\nStart");
  delay(100);
}

void loop()
{
    MicData = analogRead(0);

//  //マイクの基準点を補正するために、キャリブレーションを行う
//  if (counter < 200){
//      //はじめはなにもしない
//
//      //カウントアップする
//      counter ++;
//  }else if(counter < 300){
//      //合計を計算していく
//      sum = sum + MicData;
//
//      //カウントアップする
//      counter ++;
//
//  }else if(counter == 300){
//      //補正値を計算する
//      //合計値から平均を求める
//      hosei = 0 - sum / 100;
//      
//  //500が基準となるように補正する
//  MicData =  MicData + hosei;


    Serial.println( (MicData));
//      //カウントアップする
//      counter ++;
//
//  }




}
