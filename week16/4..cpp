void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#0C33C9);
  fill(255);
  ellipse(50,50,80,80);
    //    圓心  寬，高
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FFF86C);
    if(i%3==2) fill(255);
    arc(50,50, 80,80, 0+start, 0.1+start);//畫出 圓弧
  }
}//   圓心   寬,高 開始 結束
