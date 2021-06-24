void setup(){//設定只做一次
  size(400,200);
  textSize(40);
}
String line="hello";//字串
void draw(){//每秒60次
  background(#2748BF);
  text( line+c+100,  100,100);//可以將字串line畫出來
  text("World:"+key,100,150);//也可把字串畫出來
}//在這裡我們發現，字串的+其實是越來越長!!!
//     會對應你最後按下的鍵盤的鍵(字母、數、符號)
