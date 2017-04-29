/*SCROLLING DISPLAY USING CHARACTER POSITIONS
 * 
 * by Ali Carbovader (alicarbovader@gmail.com)
 * dated: 25-04-2017
 * 
 * enjoy :-)
 * 
 * (using some code by Nathan Clark)
 */
int delayPin = 1;                         // delay before it turns the LED off
int row[] = {10,11,12,13,A5,A4,A3,A0};   // These are the  Cathodes - Send LOW to turn on LED
int col[] = {2,3,4,5,6,7,8,9};          // These are the Anodes - Send HIGH to turn on LED
int del = 1;                            //The time for each character to stay in position. Increasing results in flicker.
int xM = 10;                            //The maximum number it will count to before switching to the next letter. Increasing will decrease scrolling speed, and vice versa.


void setup() {
  for (int thisPin = 0; thisPin < 8; thisPin++) {
    pinMode(col[thisPin], OUTPUT);      // Set selected pin to be an output rather then an input pin
    pinMode(row[thisPin], OUTPUT);       // this is so we cna provide +5v or GND at any pin
    digitalWrite(row[thisPin], HIGH);     // Set all cathodes to have positive voltage at them. Hence LED will not light up irrespective of what the anode is set to
  }
}

void loop() {
SayCarbovader();

 }
 
 void resetLEDS() {
   for (int thisPin = 0; thisPin < 8; thisPin++) {
    digitalWrite(row[thisPin], HIGH);     // Set all cathodes to have positive voltage at them. Hence LED will not light up irrespective of what the anode is set to
    digitalWrite(col[thisPin], LOW); 
  }
 } 
  
 void onLED(int colnum,int rownum) {
  digitalWrite(col[colnum], HIGH);
  digitalWrite(row[rownum], LOW);
  delay(delayPin);
  digitalWrite(col[colnum], LOW);
  digitalWrite(row[rownum], HIGH);
}

void C0() {
  onLED(1,7);
  onLED(2,7);
  onLED(3,7);
  onLED(4,7);
  onLED(5,7);
  onLED(6,7);

}

void C1() {
  onLED(1,6);
  onLED(1,7);
  onLED(2,6);
  onLED(3,6);
  onLED(4,6);
  onLED(5,6);
  onLED(6,6);
  onLED(6,7);
}

void C2() {
  onLED(1,5);
  onLED(1,6);
  onLED(1,7);
  onLED(2,5);
  onLED(3,5);
  onLED(4,5);
  onLED(5,5);
  onLED(6,5);
  onLED(6,6);
  onLED(6,7);
}

void C3() {
  onLED(1,4);
  onLED(1,5);
  onLED(1,6);
  onLED(1,7);
  onLED(2,4);
  onLED(3,4);
  onLED(4,4);
  onLED(5,4);
  onLED(6,4);
  onLED(6,5);
  onLED(6,6);
  onLED(6,7);
}

void C4() {
  onLED(1,3);
  onLED(1,4);
  onLED(1,5);
  onLED(1,6);
  onLED(2,3);
  onLED(3,3);
  onLED(4,3);
  onLED(5,3);
  onLED(6,3);
  onLED(6,4);
  onLED(6,5);
  onLED(6,6);
}

void C5() {
  onLED(1,2);
  onLED(1,3);
  onLED(1,4);
  onLED(1,5);
  onLED(2,2);
  onLED(3,2);
  onLED(4,2);
  onLED(5,2);
  onLED(6,2);
  onLED(6,3);
  onLED(6,4);
  onLED(6,5);
}

void a0() {
  onLED(1,1);
  onLED(1,2);
  onLED(1,3);
  onLED(1,4);
  onLED(1,7);
  onLED(2,1);
  onLED(2,7);
  onLED(3,1);
  onLED(3,7);
  onLED(4,1);
  onLED(4,7);
  onLED(5,1);
  onLED(5,7);
  onLED(6,1);
  onLED(6,2);
  onLED(6,3);
  onLED(6,4);
  onLED(6,7);
}

void a1() {
  onLED(1,0);
  onLED(1,1);
  onLED(1,2);
  onLED(1,3);
  onLED(1,6);
  onLED(1,7);
  onLED(2,0);
  onLED(2,6);
  onLED(3,0);
  onLED(3,6);
  onLED(4,0);
  onLED(4,6);
  onLED(4,7);
  onLED(5,0);
  onLED(5,6);
  onLED(6,0);
  onLED(6,1);
  onLED(6,2);
  onLED(6,3);
  onLED(6,6);
}

void a2() {
  onLED(1,0);
  onLED(1,1);
  onLED(1,2);
  onLED(1,5);
  onLED(1,6);
  onLED(1,7);
  onLED(2,5);
  onLED(3,5);
  onLED(4,5);
  onLED(4,6);
  onLED(4,7);
  onLED(5,5);
  onLED(6,0);
  onLED(6,1);
  onLED(6,2);
  onLED(6,5);
}

void a3() {
  onLED(1,0);
  onLED(1,1);
  onLED(1,4);
  onLED(1,5);
  onLED(1,6);
  onLED(1,7);
  onLED(2,4);
  onLED(2,7);
  onLED(3,4);
  onLED(3,7);
  onLED(4,4);
  onLED(4,5);
  onLED(4,6);
  onLED(4,7);
  onLED(5,4);
  onLED(5,7);
  onLED(6,0);
  onLED(6,1);
  onLED(6,4);
  onLED(6,7);
}

void a4() {
  onLED(1,0);
  onLED(1,3);
  onLED(1,4);
  onLED(1,5);
  onLED(1,6);
  onLED(2,3);
  onLED(2,6);
  onLED(3,3);
  onLED(3,6);
  onLED(4,3);
  onLED(4,4);
  onLED(4,5);
  onLED(4,6);
  onLED(5,3);
  onLED(5,6);
  onLED(6,0);
  onLED(6,3);
  onLED(6,6);
}

void a5() {
  onLED(1,2);
  onLED(1,3);
  onLED(1,4);
  onLED(1,5);
  onLED(2,2);
  onLED(2,5);
  onLED(3,2);
  onLED(3,5);
  onLED(4,2);
  onLED(4,3);
  onLED(4,4);
  onLED(4,5);
  onLED(5,2);
  onLED(5,5);
  onLED(6,2);
  onLED(6,5);
}

void r0() {
  onLED(1,1);
  onLED(1,2);
  onLED(1,3);
  onLED(1,4);
  onLED(1,7);
  onLED(2,1);
  onLED(2,4);
  onLED(2,7);
  onLED(3,1);
  onLED(3,4);
  onLED(3,7);
  onLED(4,1);
  onLED(4,2);
  onLED(4,3);
  onLED(4,4);
  onLED(4,7);
  onLED(5,1);
  onLED(5,4);
  onLED(5,7);
  onLED(6,1);
  onLED(6,4);
  onLED(6,7);
}

//at this point i realised that removing spaces from between the onLED statements was a futile effort
void r1() {
  onLED(1,0);  onLED(1,1); onLED(1,2); onLED(1,3);     onLED(1,6); onLED(1,7);
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0); onLED(4,1); onLED(4,2); onLED(4,3);     onLED(4,6); onLED(4,7);
onLED(5,0);     onLED(5,3);     onLED(5,6); 
onLED(6,0);     onLED(6,3);     onLED(6,6); 

}

void r2() {
  onLED(1,0);  onLED(1,1); onLED(1,2);     onLED(1,5); onLED(1,6); onLED(1,7);
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
onLED(4,0); onLED(4,1); onLED(4,2);     onLED(4,5); onLED(4,6); onLED(4,7);
    onLED(5,2);     onLED(5,5);   
    onLED(6,2);     onLED(6,5);   

}

void r3() {
  onLED(1,0);  onLED(1,1);     onLED(1,4); onLED(1,5); onLED(1,6); 
  onLED(2,1);     onLED(2,4);     onLED(2,7);
  onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,0); onLED(4,1);     onLED(4,4); onLED(4,5); onLED(4,6); 
  onLED(5,1);     onLED(5,4);     onLED(5,7);
  onLED(6,1);     onLED(6,4);     onLED(6,7);

}

void r4() {
  onLED(1,0);      onLED(1,3); onLED(1,4); onLED(1,5); 
onLED(2,0);     onLED(2,3);     onLED(2,6);
onLED(3,0);     onLED(3,3);     onLED(3,6);
onLED(4,0);     onLED(4,3); onLED(4,4); onLED(4,5); 
onLED(5,0);     onLED(5,3);     onLED(5,6);
onLED(6,0);     onLED(6,3);     onLED(6,6);

}

void r5() {
  onLED(1,2);  onLED(1,3); onLED(1,4); 
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2); onLED(4,3); onLED(4,4); 
onLED(5,2);     onLED(5,5);
onLED(6,2);     onLED(6,5);

}

void b0() {
  onLED(1,1);  onLED(1,2); onLED(1,3);       onLED(1,7);
onLED(2,1);     onLED(2,4);     onLED(2,7);
onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,1); onLED(4,2); onLED(4,3);       onLED(4,7);
onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,1);     onLED(6,4);     onLED(6,7);

}

void b1() {
  onLED(1,0);  onLED(1,1); onLED(1,2);       onLED(1,6); onLED(1,7);
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0); onLED(4,1); onLED(4,2);       onLED(4,6); onLED(4,7);
onLED(5,0);     onLED(5,3);     onLED(5,6); 
onLED(6,0);     onLED(6,3);     onLED(6,6); onLED(6,7);

}

void b2() {
  onLED(1,0);  onLED(1,1);       onLED(1,5); onLED(1,6); onLED(1,7);
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
onLED(4,0); onLED(4,1);       onLED(4,5); onLED(4,6); onLED(4,7);
    onLED(5,2);     onLED(5,5);   
    onLED(6,2);     onLED(6,5); onLED(6,6); onLED(6,7);

}

void b3() {
  onLED(1,0);        onLED(1,4); onLED(1,5); onLED(1,6); 
  onLED(2,1);     onLED(2,4);     onLED(2,7);
  onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,0);       onLED(4,4); onLED(4,5); onLED(4,6); 
  onLED(5,1);     onLED(5,4);     onLED(5,7);
  onLED(6,1);     onLED(6,4); onLED(6,5); onLED(6,6); 

}

void b4() {
        onLED(1,3); onLED(1,4); onLED(1,5);   
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
      onLED(4,3); onLED(4,4); onLED(4,5);   
onLED(5,0);     onLED(5,3);     onLED(5,6); 
onLED(6,0);     onLED(6,3); onLED(6,4); onLED(6,5);   

}

void b5() {
  onLED(1,2);  onLED(1,3); onLED(1,4); 
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2); onLED(4,3); onLED(4,4); 
onLED(5,2);     onLED(5,5);
onLED(6,2); onLED(6,3); onLED(6,4); 

}

void o0() {
  onLED(1,1);  onLED(1,2); onLED(1,3);       
onLED(2,1);     onLED(2,4);     onLED(2,7);
onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,1); onLED(4,2); onLED(4,3);       onLED(4,7);
onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,1); onLED(6,2); onLED(6,3);       

}

void o1() {
  onLED(1,0);  onLED(1,1); onLED(1,2);         onLED(1,7);
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0); onLED(4,1); onLED(4,2);       onLED(4,6); 
onLED(5,0);     onLED(5,3);     onLED(5,6); 
onLED(6,0); onLED(6,1); onLED(6,2);         onLED(6,7);

}

void o2() {
  onLED(1,0);  onLED(1,1);         onLED(1,6); onLED(1,7);
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
onLED(4,0); onLED(4,1);       onLED(4,5);   
    onLED(5,2);     onLED(5,5);   
onLED(6,0); onLED(6,1);         onLED(6,6); onLED(6,7);

}

void o3() {
  onLED(1,0);          onLED(1,5); onLED(1,6); 
  onLED(2,1);     onLED(2,4);     onLED(2,7);
  onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,0);       onLED(4,4);     onLED(4,7);
  onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,0);         onLED(6,5); onLED(6,6); 

}

void o4() {
          onLED(1,4); onLED(1,5);   
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
      onLED(4,3);     onLED(4,6); 
onLED(5,0);     onLED(5,3);     onLED(5,6); 
        onLED(6,4); onLED(6,5);   

}

void o5() {
    onLED(1,3); onLED(1,4); 
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2);     onLED(4,5);
onLED(5,2);     onLED(5,5);
  onLED(6,3); onLED(6,4); 

}

void v0() {
    onLED(1,2); onLED(1,3);       onLED(1,7);
onLED(2,1);     onLED(2,4);     onLED(2,7);
onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,1);     onLED(4,4);     onLED(4,7);
onLED(5,1);     onLED(5,4);     onLED(5,7);
  onLED(6,2); onLED(6,3);       

}

void v1() {
    onLED(1,1); onLED(1,2);       onLED(1,6); 
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0);     onLED(4,3);     onLED(4,6); 
onLED(5,0);     onLED(5,3);     onLED(5,6); 
  onLED(6,1); onLED(6,2);         onLED(6,7);

}

void v2() {
  onLED(1,0);  onLED(1,1);       onLED(1,5);   
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
    onLED(4,2);     onLED(4,5);   
    onLED(5,2);     onLED(5,5);   
onLED(6,0); onLED(6,1);         onLED(6,6); onLED(6,7);

}

void v3() {
  onLED(1,0);        onLED(1,4);     onLED(1,7);
  onLED(2,1);     onLED(2,4);     onLED(2,7);
  onLED(3,1);     onLED(3,4);     onLED(3,7);
  onLED(4,1);     onLED(4,4);     onLED(4,7);
  onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,0);         onLED(6,5); onLED(6,6); 

}

void v4() {
        onLED(1,3);     onLED(1,6); 
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0);     onLED(4,3);     onLED(4,6); 
onLED(5,0);     onLED(5,3);     onLED(5,6); 
        onLED(6,4); onLED(6,5);   

}

void v5() {
  onLED(1,2);      onLED(1,5);
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2);     onLED(4,5);
onLED(5,2);     onLED(5,5);
  onLED(6,3); onLED(6,4); 

}

void a10() {
  onLED(1,1);      onLED(1,4);     onLED(1,7);
onLED(2,1);     onLED(2,4);     onLED(2,7);
onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,1);     onLED(4,4);     onLED(4,7);
onLED(5,1);     onLED(5,4);     onLED(5,7);
  onLED(6,2); onLED(6,3);       onLED(6,7);

}

void a11() {
  onLED(1,0);      onLED(1,3);     onLED(1,6); onLED(1,7);
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0);     onLED(4,3);     onLED(4,6); onLED(4,7);
onLED(5,0);     onLED(5,3);     onLED(5,6); 
  onLED(6,1); onLED(6,2);       onLED(6,6); 

}

void a12() {
      onLED(1,2);     onLED(1,5); onLED(1,6); onLED(1,7);
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
    onLED(4,2);     onLED(4,5); onLED(4,6); onLED(4,7);
    onLED(5,2);     onLED(5,5);   
onLED(6,0); onLED(6,1);       onLED(6,5);   

}

void a13() {
    onLED(1,1);     onLED(1,4); onLED(1,5); onLED(1,6); onLED(1,7);
  onLED(2,1);     onLED(2,4);     onLED(2,7);
  onLED(3,1);     onLED(3,4);     onLED(3,7);
  onLED(4,1);     onLED(4,4); onLED(4,5); onLED(4,6); onLED(4,7);
  onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,0);       onLED(6,4);     onLED(6,7);

}

void a14() {
  onLED(1,0);      onLED(1,3); onLED(1,4); onLED(1,5); onLED(1,6);
onLED(2,0);     onLED(2,3);     onLED(2,6);
onLED(3,0);     onLED(3,3);     onLED(3,6);
onLED(4,0);     onLED(4,3); onLED(4,4); onLED(4,5); onLED(4,6);
onLED(5,0);     onLED(5,3);     onLED(5,6);
      onLED(6,3);     onLED(6,6);

}

void a15() {
  onLED(1,2);  onLED(1,3); onLED(1,4); onLED(1,5);
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2); onLED(4,3); onLED(4,4); onLED(4,5);
onLED(5,2);     onLED(5,5);
onLED(6,2);     onLED(6,5);

}

void d0() {
  onLED(1,1);  onLED(1,2); onLED(1,3); onLED(1,4);     onLED(1,7);
onLED(2,1);     onLED(2,4);     onLED(2,7);
onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,1); onLED(4,2); onLED(4,3); onLED(4,4);     onLED(4,7);
onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,1);     onLED(6,4);     onLED(6,7);

}

void d1() {
  onLED(1,0);  onLED(1,1); onLED(1,2); onLED(1,3);     onLED(1,6); onLED(1,7);
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0); onLED(4,1); onLED(4,2); onLED(4,3);     onLED(4,6); 
onLED(5,0);     onLED(5,3);     onLED(5,6); 
onLED(6,0);     onLED(6,3);     onLED(6,6); onLED(6,7);

}

void d2() {
  onLED(1,0);  onLED(1,1); onLED(1,2);     onLED(1,5); onLED(1,6); onLED(1,7);
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
onLED(4,0); onLED(4,1); onLED(4,2);     onLED(4,5);   
    onLED(5,2);     onLED(5,5);   
    onLED(6,2);     onLED(6,5); onLED(6,6); onLED(6,7);

}

void d3() {
  onLED(1,0);  onLED(1,1);     onLED(1,4); onLED(1,5); onLED(1,6); 
  onLED(2,1);     onLED(2,4);     onLED(2,7);
  onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,0); onLED(4,1);     onLED(4,4);     onLED(4,7);
  onLED(5,1);     onLED(5,4);     onLED(5,7);
  onLED(6,1);     onLED(6,4); onLED(6,5); onLED(6,6); 

}

void d4() {
  onLED(1,0);      onLED(1,3); onLED(1,4); onLED(1,5); 
onLED(2,0);     onLED(2,3);     onLED(2,6);
onLED(3,0);     onLED(3,3);     onLED(3,6);
onLED(4,0);     onLED(4,3);     onLED(4,6);
onLED(5,0);     onLED(5,3);     onLED(5,6);
onLED(6,0);     onLED(6,3); onLED(6,4); onLED(6,5); 

}

void d5() {
  onLED(1,2);  onLED(1,3); onLED(1,4); 
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2);     onLED(4,5);
onLED(5,2);     onLED(5,5);
onLED(6,2); onLED(6,3); onLED(6,4); 

}

void e0() {
  onLED(1,1);  onLED(1,2); onLED(1,3);       onLED(1,7);
onLED(2,1);     onLED(2,4);     onLED(2,7);
onLED(3,1);     onLED(3,4);     onLED(3,7);
onLED(4,1);     onLED(4,4);     onLED(4,7);
onLED(5,1);     onLED(5,4);     onLED(5,7);
onLED(6,1); onLED(6,2); onLED(6,3);       onLED(6,7);

}

void e1() {
  onLED(1,0);  onLED(1,1); onLED(1,2);       onLED(1,6); onLED(1,7);
onLED(2,0);     onLED(2,3);     onLED(2,6); 
onLED(3,0);     onLED(3,3);     onLED(3,6); 
onLED(4,0);     onLED(4,3);     onLED(4,6); onLED(4,7);
onLED(5,0);     onLED(5,3);     onLED(5,6); 
onLED(6,0); onLED(6,1); onLED(6,2);       onLED(6,6); onLED(6,7);

}

void e2() {
  onLED(1,0);  onLED(1,1);       onLED(1,5); onLED(1,6); onLED(1,7);
    onLED(2,2);     onLED(2,5);   
    onLED(3,2);     onLED(3,5);   
    onLED(4,2);     onLED(4,5); onLED(4,6); onLED(4,7);
    onLED(5,2);     onLED(5,5);   
onLED(6,0); onLED(6,1);       onLED(6,5); onLED(6,6); onLED(6,7);

}

void e3() {
  onLED(1,0);        onLED(1,4); onLED(1,5); onLED(1,6); onLED(1,7);
  onLED(2,1);     onLED(2,4);     
  onLED(3,1);     onLED(3,4);     
  onLED(4,1);     onLED(4,4); onLED(4,5); onLED(4,6); 
  onLED(5,1);     onLED(5,4);     
onLED(6,0);       onLED(6,4); onLED(6,5); onLED(6,6); onLED(6,7);

}

void e4() {
        onLED(1,3); onLED(1,4); onLED(1,5); onLED(1,6);
onLED(2,0);     onLED(2,3);     
onLED(3,0);     onLED(3,3);     
onLED(4,0);     onLED(4,3); onLED(4,4); onLED(4,5); 
onLED(5,0);     onLED(5,3);     
      onLED(6,3); onLED(6,4); onLED(6,5); onLED(6,6);

}

void e5() {
  onLED(1,2);  onLED(1,3); onLED(1,4); onLED(1,5);
onLED(2,2);     
onLED(3,2);     
onLED(4,2); onLED(4,3); onLED(4,4); 
onLED(5,2);     
onLED(6,2); onLED(6,3); onLED(6,4); onLED(6,5);

}

void r10() {
  onLED(1,1);  onLED(1,2); onLED(1,3); onLED(1,4);     onLED(1,7);
onLED(2,1);           onLED(2,7);
onLED(3,1);           onLED(3,7);
onLED(4,1); onLED(4,2); onLED(4,3);       onLED(4,7);
onLED(5,1);           onLED(5,7);
onLED(6,1); onLED(6,2); onLED(6,3); onLED(6,4);     onLED(6,7);

}

void r11() {
  onLED(1,0);  onLED(1,1); onLED(1,2); onLED(1,3);     onLED(1,6); onLED(1,7);
onLED(2,0);           onLED(2,6); 
onLED(3,0);           onLED(3,6); 
onLED(4,0); onLED(4,1); onLED(4,2);       onLED(4,6); onLED(4,7);
onLED(5,0);           onLED(5,6); 
onLED(6,0); onLED(6,1); onLED(6,2); onLED(6,3);     onLED(6,6); 

}

void r12() {
  onLED(1,0);  onLED(1,1); onLED(1,2);     onLED(1,5); onLED(1,6); onLED(1,7);
          onLED(2,5);   
          onLED(3,5);   
onLED(4,0); onLED(4,1);       onLED(4,5); onLED(4,6); onLED(4,7);
          onLED(5,5);   
onLED(6,0); onLED(6,1); onLED(6,2);     onLED(6,5);   

}

void r13() {
  onLED(1,0);  onLED(1,1);     onLED(1,4); onLED(1,5); onLED(1,6); 
        onLED(2,4);     onLED(2,7);
        onLED(3,4);     onLED(3,7);
onLED(4,0);       onLED(4,4); onLED(4,5); onLED(4,6); 
        onLED(5,4);     onLED(5,7);
onLED(6,0); onLED(6,1);     onLED(6,4);     onLED(6,7);

}

void r14() {
  onLED(1,0);      onLED(1,3); onLED(1,4); onLED(1,5); 
      onLED(2,3);     onLED(2,6);
      onLED(3,3);     onLED(3,6);
      onLED(4,3); onLED(4,4); onLED(4,5); 
      onLED(5,3);     onLED(5,6);
onLED(6,0);     onLED(6,3);     onLED(6,6);

}

void r15() {
  onLED(1,2);  onLED(1,3); onLED(1,4); 
onLED(2,2);     onLED(2,5);
onLED(3,2);     onLED(3,5);
onLED(4,2); onLED(4,3); onLED(4,4); 
onLED(5,2);     onLED(5,5);
onLED(6,2);     onLED(6,5);

}

void blank0() {
  onLED(1,1);  onLED(1,2); onLED(1,3); 
onLED(2,1);     onLED(2,4);
onLED(3,1);     onLED(3,4);
onLED(4,1); onLED(4,2); onLED(4,3); 
onLED(5,1);     onLED(5,4);
onLED(6,1);     onLED(6,4);

}

void blank1() {
  onLED(1,0);  onLED(1,1); onLED(1,2); 
onLED(2,0);     onLED(2,3);
onLED(3,0);     onLED(3,3);
onLED(4,0); onLED(4,1); onLED(4,2); 
onLED(5,0);     onLED(5,3);
onLED(6,0);     onLED(6,3);

}

void blank2() {
  onLED(1,0);  onLED(1,1); 
    onLED(2,2);
    onLED(3,2);
onLED(4,0); onLED(4,1); 
    onLED(5,2);
    onLED(6,2);

}

void blank3() {
  onLED(1,0);  
  onLED(2,1);
  onLED(3,1);
onLED(4,0); 
  onLED(5,1);
  onLED(6,1);

}

void blank4() {
  
onLED(2,0);
onLED(3,0);

onLED(5,0);
onLED(6,0);

}

void blank5(){
  
}


void SayCarbovader() {
  for (int x=0;x<xM;x++) {
    C0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    C1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    C2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    C3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    C4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    C5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    b0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    b1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    b2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    b3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    b4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    b5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    o0();
    delay(del);
  }

   for (int x=0;x<xM;x++) {
    o1();
    delay(del);
  }

   for (int x=0;x<xM;x++) {
    o2();
    delay(del);
  }

   for (int x=0;x<xM;x++) {
    o3();
    delay(del);
  }

   for (int x=0;x<xM;x++) {
    o4();
    delay(del);
  }

   for (int x=0;x<xM;x++) {
    o5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    v0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    v1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    v2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    v3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    v4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    v5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a10();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a12();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a13();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a14();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    a15();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    d0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    d1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    d2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    d3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    d4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    d5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    e0();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    e1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    e2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    e3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    e4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    e5();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r10();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r11();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r12();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r13();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r14();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    r15();
    delay(del);
  }

    for (int x=0;x<xM;x++) {
    blank0();
    delay(del);
  }

    for (int x=0;x<xM;x++) {
    blank1();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    blank2();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    blank3();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    blank4();
    delay(del);
  }

  for (int x=0;x<xM;x++) {
    blank5();
    delay(del);
  }
}


