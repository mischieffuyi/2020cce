void setup(){//�]�w�A�u���@��
  size(400,200);
}
float start=0, v=0.07;
void draw(){//�e�A�C��e60��
  background(#90FFFC);
  if(v>0.001){
    start += v;
    v *= 0.99;
  }
  fill(255); text(start,200,150); text(v,200,170);
  ellipse(100,100, 180,180);
  fill(#FDFF90);
  //if(start<10) start+=0.01;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FF90FA);
    if(i%3==2) fill(#FF9099);
    if(i==0) fill(#AD90FF);
    arc(100,100, 180,180, shift+0+start,shift+PI/12+start);//�e�X �꩷
  }
}//   ���   �e,�� �}�l ����
void mousePressed(){
  v = random(1);
}
