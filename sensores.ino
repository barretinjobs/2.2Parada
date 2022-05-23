void atsensor(){        //mapeia a leitura dos sensore p/ trabalharmos com, além de valores mais parecidos entre eles, valores mais fáceis de manipular e testar.
 
sensor[0] = map(analogRead(psensor[0]), 0, 1023, 0, 100);  //mapeia o sensor da esquerda
sensor[1] = map(analogRead(psensor[1]), 0, 1023, 0, 100);  //mapeia o sensor da direita
sensor[2] = map(analogRead(psensor[2]), 0, 1023, 0, 100);  //mapeia o sensor da extrema direita


  }
