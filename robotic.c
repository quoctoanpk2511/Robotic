#include "robotic.h"

int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;
int s5 = 0;
const int speaker =12; //buzzer
int sounds[] = {131,138,147,155,165,174,185,196,207,220,233,247,262,277,293,311,329,349,370,392,415,440,466,494};
int BEATTIME = 900;
int DELAYTIME = 300;

void setup() {
  //5 input gate
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop() {
  s1 = digitalRead(5);
  s2 = digitalRead(6);
  s3 = digitalRead(7);
  s4 = digitalRead(8);
  s5 = digitalRead(9);
  
  //一度音をリセット
  noTone(12);

  //no #
  if(s4 == 1 && s5 == 1){
    if(s1 == 1 && s2 == 1 && s3 == 0){
      // C=131
      tone(speaker, sounds[0], BEATTIME); 
      delay(DELAYTIME);
    }
    else if( s1 == 1 && s2 == 0 && s3 == 1){
      //D=147
      tone( speaker , sounds[2], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 1 && s2 == 0 && s3 == 0){
      //E=165
      tone(speaker, sounds[4], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 1){
      //F=174
      tone(speaker, sounds[5], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 0){
      //G=196
      tone(speaker, sounds[7], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 1){
      //A=220
      tone(speaker, sounds[9], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 0){
      //B=247
      tone(speaker, sounds[11], BEATTIME);
      delay(DELAYTIME);
    }
  }


  //#
  if(s4 == 0 && s5 == 1){
    if(s1 == 1 && s2 == 1 && s3 == 0){
    //C#=138
    tone(speaker, sounds[1], BEATTIME);
    delay(DELAYTIME);
    }
    else if( s1 == 1 && s2 == 0 && s3 == 1){
    //D#=155
    tone(speaker, sounds[3], BEATTIME);
    delay(DELAYTIME);
    }
    else if(s1 == 1 && s2 == 0 && s3 == 0){
    //F=174
    tone(speaker, sounds[5], BEATTIME);
    delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 1){
    //F#=185
    tone(speaker, sounds[6], BEATTIME);
    delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 0){
      //G#=297
      tone(speaker, sounds[8], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 1){
      //A#=233
      tone(speaker, sounds[10], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 0){
      //B=247
      tone(speaker, sounds[11], BEATTIME);
      delay(DELAYTIME);
    }
  }


  //no # & 1 octave high 
  if(s4 == 1 && s5 == 0){
    if(s1 == 1 && s2 == 1 && s3 == 0){
      //high C=262
      tone(speaker, sounds[12], BEATTIME);
      delay(DELAYTIME);
    }
    else if( s1 == 1 && s2 == 0 && s3 == 1){
      //high D=294
      tone(speaker, sounds[14], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 1 && s2 == 0 && s3 == 0){
      //high E=329
      tone(speaker, sounds[16], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 1){
      //hugh F=349
      tone(speaker, sounds[17], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 0){
      //high G=392
      tone(speaker, sounds[19], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 1){
    //high A=440
    tone(speaker, sounds[21], BEATTIME);
    delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 0){
      //high B=494
      tone(speaker, sounds[23], BEATTIME);
      delay(DELAYTIME);
    }
  }


  // # & 1 octave high 
  if(s4 == 0 && s5 == 0){
    if(s1 == 1 && s2 == 1 && s3 == 0){
      //high C#=277
      tone(speaker, sounds[13], BEATTIME);
      delay(DELAYTIME);
    }
    else if( s1 == 1 && s2 == 0 && s3 == 1){
      //high D#=311
      tone(speaker, sounds[15], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 1 && s2 == 0 && s3 == 0){
      //high F=349
      tone(speaker, sounds[17], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 1){
      //high F#=370
      tone(speaker, sounds[18], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 1 && s3 == 0){
      //high G#=415
      tone(speaker, sounds[20], BEATTIME);
      delay(DELAYTIME);
    }
    else if(s1 == 0 && s2 == 0 && s3 == 1){
      //high A#=466
      tone(speaker, sounds[22], BEATTIME);
      delay(DELAYTIME);
    }
  }


  else if (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0){
    delay(DELAYTIME);
  }

  delay(DELAYTIME);

  Serial.print("s1: ");
  Serial.println(s1);
  Serial.print("s2: ");
  Serial.println(s2);
  Serial.print("s3: "); 
  Serial.println(s3);
  Serial.println("");

}