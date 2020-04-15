clear all
close all
clc

D = csvread('datos.csv');

%accediendo a las columnas
%síntaxis (r,c) r: renglones, c: columnas
% Ejemplo: (:,1) =>  todos los renglones (:), de la primera col (1)
               
%Leemos la primera columna (valor de la resistencia Rx)
RX= D(:,1);   %segunda columna, datos de voltaje

%Leemos la segunda columna (valor del voltaje VAB real)
VAB = D(:,2); %tecerca columna, datos de frecuencia

%Leemos la tercera columna (valor del voltaje VAB lineal)
VABLIN = D(:,3); %tecerca columna, datos de frecuencia

% GRAFICAMOS PARA CORROBORAR
figure
plot(RX, VAB);
hold on
plot(RX, VABLIN);
xlabel('RX [Ohms]')
ylabel('VAB [Volts]')
legend('Real','Lineal')