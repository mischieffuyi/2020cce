String A="mother";
String line="";
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(0);
  text( A, 100,100);
  text(line + "|",100,150);
}
void keyPressed(){
  int len = line.length();//原字的長度
  if( key>='a' && key<='z') line = line + key;//小寫鍵
  if( key>='A' && key<='Z') line = line + key;//大寫鍵
  if( key==ENTER){    }//比對自是否正確
  if( key==BACKSPACE && len>0 ) line = line.substring(0, len-1);//倒退刪除!!
}//Q:如何把打錯的字，到退刪除!! A:判斷 BACKSPACE 時， 要把 line變短
