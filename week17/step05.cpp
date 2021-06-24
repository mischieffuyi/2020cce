void setup(){
  size(400,200);
  textSize(40);
}
int x=100, y=100;
void draw(){
  background(#2748BF);
  rect(x,y,50,50);//話方塊
}//Q:需求,左鍵、右鍵

void keyPressed(){
  if( keyCode==LEFT ) x-=10;
  if( keyCode==RIGHT ) x+=10;
}
