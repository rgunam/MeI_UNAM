
#define N 500

const int canalA = A0;  // Define entrada analógica A0
const int canalB = A5;  // Define entrada analógica A5

int datoA,datoB = 0;        // variables enteras para guardar dato decimal 
                            // resultado de la conversión ADC

                      
float voltajeA = 0;
float voltajeB = 0;  // variables flotantes para guardar la conversión
                            // de decimal a voltaje

void setup() {
  // inicia comunicación serial a 115200 bauds
  Serial.begin(115200);
  // limpia el buffer UART 
  Serial.flush();

    // Realizamos N lecturas de los voltajes 
  for (int i = 0; i <= N; i++) {
  // lee el canalA = A0, y guarda el dato decimal en datoA
  datoA = analogRead(canalA) + random(0,21);
    // convierte el dato decimal a voltaje
  voltajeA = (datoA * 5000.0) / 1023; // 1023 = 2^m - 1 ; m=10 bits
  
  //espera 5 ms para estabilizar el convertidor ADC 
  delay(5);

  // lee el canalB = A5, y guarda el dato decimal en datoB
  datoB = analogRead(canalB)+ random(0,5);
  // convierte el dato decimal a voltaje
  voltajeB = (datoB * 5000.0) / 1023 ; // 1023 = 2^m - 1 ; m=10 bits
  // convertimos el Voltaje B a corriente
 
  Serial.print(voltajeA);
  Serial.print(',');
  Serial.println(voltajeB); 
  delay(5);
  }
}

void loop() {

}
