# Temporizador-arduino

<div align =  "center">
  
![image](https://user-images.githubusercontent.com/95356877/173394201-1b9c1e2a-aa55-42f3-85c2-ba180bd3ff24.png)

</div>

##

🧱Equipamentos utilizados:
- Display de sete segmentos, comum: cátodo.
- Decodificador CD4511.
- Resistor 10 kOhm.
- Botões.

##

👩‍💻 Explicação do código:
  - Inicialmente, é definido quais portas/inputs serão utilizadas para os botões, e as variáveis a serem utilizadas.

        #define on 6
        #define off 5
        #define A 10
        #define B 13
        #define C 12
        #define D 11 
        
        bool valueButtonOn = 0;
        bool previousBtOn = 0;
        
  - Na função SETUP é definido os pinos como entradas(inputs) e saídas(outputs)

        void setup()
        {
          pinMode(on, INPUT);
          pinMode(A, OUTPUT);
          pinMode(B, OUTPUT);
          pinMode(C, OUTPUT);
          pinMode(D, OUTPUT);
          Serial.begin(9600);
        }
        
  - No LOOP, foi chamada a função "function", que verifica o estado do botão, se foi pressionado ou não. Caso positivo, ele vai chamar a funcção "display" que recebe 4 valores booleanos:
  
          void display(bool a, bool b, bool c, bool d)
          
    Esses 4 valores booleanos irão corresponder a uma contagem em binário, como pode se observar dentro da "function": 

          display(1, 0, 0, 0); ➝ Corresponde à 1
          display(0, 1, 0, 0); ➝ Corresponde à 2
          display(1, 1, 0, 0); ➝ Corresponde à 3
          display(0, 0, 1, 0); ➝ Corresponde à 4
          etc...
