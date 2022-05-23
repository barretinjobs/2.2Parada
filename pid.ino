void pid (int kp, int kd, int ki){

atsensor();               //void atualiza sensores na aba sensores


//---------------------------------------------------------------------------------------------------------------------------------------------------------calculos

                                      //O proporcional é o coração do segue linha e muitas vezes é usado individualmente.
erro = sensor[0] - sensor[1];         //O cálculo do erro provém da diferença de sensores, permitindo, assim, identificar a posição do robo em relação a linha        
kp = kp* erro;                        //e corrigi-lo de acordo com a necessidade.
                                                   


integral = integral + erro;           //No integral, somamos todos os erros em busca de eliminar as leituras acumuladas nos sensores.
ki = ki* integral;                    //Utilizando o ki como coeficiente de tempo.



derivado = erro - lasterro;           //no derivado, a ideia é comparar o erro atual com o anterior, prevendo o próximo movimento e suavizando a correção
kd = kd* derivado;                    //ps.       precisamos no final de toda a lógica, tornar o erro atual em erro anterior, assim, na nova leitura, comparamos ambos.
                             

  
turn = kp + ki + kd;                  // ao fim do calculo, somamos todos os resultados, qual será aplicado nos motores para a correção acertiva.
//soma


turn = abs(turn);                     //garante que o valor vai ser positivo


//------------------------------------------------------------------------------execução dos movimentos

if (erro >= 0) {            //significa que o valor do sensor da esquerda é maior que o da direita, ou seja, o robo está à esquerda da linha

  mover (2, 0 - turn, turn);       //primeiro valor: configura o robo para a direita | segundo valor: força motor da esquerda | terceiro valor: força motor da direita
    
  }

else if (erro < 0){         //siginica que o valor do sensor da direita é maior que o da esquerda, ou seja, o robo está à direita da linha

  mover (1, turn, 0 - turn);       //primeiro valor: configura o robo para a esquerda | segundo valor: força motor da esquerda | terceiro valor: força motor da direita
  
  }  
  
erro = lasterro;

}
