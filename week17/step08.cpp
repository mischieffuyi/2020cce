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
  int len = line.length();//��r������
  if( key>='a' && key<='z') line = line + key;//�p�g��
  if( key>='A' && key<='Z') line = line + key;//�j�g��
  if( key==ENTER){    }//���۬O�_���T
  if( key==BACKSPACE && len>0 ) line = line.substring(0, len-1);//�˰h�R��!!
}//Q:�p��⥴�����r�A��h�R��!! A:�P�_ BACKSPACE �ɡA �n�� line�ܵu
