void setup(){//�]�w�A�u���@��
  size(400,200);
}
void draw(){//�e�A�C��e60��
  background(#0C33C9);
  fill(255);
  ellipse(50,50,80,80);
    //    ���  �e�A��
  fill(255,0,0);
  float stop=mouseX/50.0;
  text( stop, 100,100 );//�e�Ʀr
  arc(50,50, 80,80, 0, stop);//�e�X �꩷
}//   ���   �e,�� �}�l ����
