clear all
close all
clc

a = arduino('COM4','UNO');

N = 1000; %numero de lecturas
t_ini = 1; %tiempo inicial
x=0;

%Parámetros del termómetro Digital

V1 = 5; %Voltaje de entrada
Rs = 10000; % Resistencia conocida
% c1 = 0.001129148;
% c2 = 0.000234125;
% c3 = 0.0000000876741;

c1 = 1.182e-3;%1.009249522e-03;
c2 = 6.0980e-04;%2.378405444e-04;
c3 = 1.32297e-7;%2.019202697e-07;
 ts =1e-3;
t = 0;
while (t_ini<N) %ciclo para tomar N lecturas
  
  V2 = readVoltage(a,'A0');
  pause(ts);
  t = t+ts;

 %toma la lectura del canal A0 de arduino, el resultado es el voltaje
  %directamente calculado por:
  %volts = (ADC*5)/1023
  
  % Conversión de voltaje a resistencia
  R = Rs * ((V1/V2) - 1);
  
  % Escribir AQUÍ la ecuación de Steinhart-Hart para convertir
  % de Resistencia a Temperatura
  
  logR = log(R);
  beta = 3373;
  R0 = 10e3;
  t0 = 25 +273.15;
  T = 1/((1/t0)+(1/beta)*log(R/R0));
  %T = (1.0 / (c1 + c2*log(R) + c3*(log(R))^3));
  Tc = T - 273.15;
  
  
  
  
  %esto es para graficar en "tiempo-real"
  x=[x,Tc];
  plot(x)
  grid on
  t_ini=t_ini+1; %cada ciclo se incrementa la variable de conteo
  drawnow
end