void setup(){//�]�w�A�u���@��
  size(400,200);
}
void draw(){//�e�A�C��e60��
  background(#0C33C9);
  fill(255);
  ellipse(50,50,80,80);
    //    ���  �e�A��
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0; i<24; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FFF86C);
    if(i%3==2) fill(255);
    arc(50,50, 80,80, 0+start, 0.1+start);//�e�X �꩷
  }
}//   ���   �e,�� �}�l ����
