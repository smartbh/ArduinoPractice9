char sing[]="IIpLLLpKpJJp LLpIIpGGpIIp LLpMpNpOOOpNpMMMMMMp\
             PPPpOpNNpMMp LLpKpJpIIpGGp IIpLLpMpMpNNpLLLLLLp";

// 아래 freq는 절대 변경하지 마라
int   freq[ ]= {131, 149, 165, 175, 196, 220, 247};
int   piezo= 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(piezo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int interval= 200;
  
  for(int i=0;i<sizeof(sing);i++){

    if(sing[i] != 'p' && (sing[i] < 'A' || sing[i]>'Z'))  continue;
    
    if(sing[i] == 'p')
    {
      delay(50);
      continue;
    }
    
    int f ;
    // 여기서 적절한 f의 값을 계산하라.
    
    tone(piezo, f, 300);
    delay(300);
  }
  delay(2000);
}
