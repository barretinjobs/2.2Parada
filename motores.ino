void mover (int direcao, int forca1, int forca2){  

if (direcao == movimento[0]){                                      //andaria para frente, por exemplo
  
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);

analogWrite(pwma, forca1);
analogWrite(pwmb, forca2);  

}

else if (direcao == movimento[1]){                                 //esquerda
  
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);

analogWrite(pwma, forca1);
analogWrite(pwmb, forca2); 
    
}


else if (direcao == movimento[2]){                                 //direita
  
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);

analogWrite(pwma, forca1);
analogWrite(pwmb, forca2); 
    
}

else if (direcao == movimento[3]){                                 //tras
  
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);

analogWrite(pwma, forca1);
analogWrite(pwmb, forca2); 
    
}

else if (direcao == movimento[4]){                                 //parar
  
digitalWrite(in1, HIGH);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, HIGH);

analogWrite(pwma, forca1);
analogWrite(pwmb, forca2); 
    
  }

}
