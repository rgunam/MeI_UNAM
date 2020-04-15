clear all
close all
clc

D = csvread('vco.csv');

%accediendo a las columnas

Num = D(:,1);  %número de (r,c) r: renglones, c: columnas
               % (:,1) => todos los renglones (:) de la primera col (1)
               

Voltaje = D(:,2);   %segunda columna, datos de voltaje

Frecuencia = D(:,3); %tecerca columna, datos de frecuencia

figure
plot(Voltaje, Frecuencia,'.','Markersize',15);
xlabel('Voltaje [V]')
ylabel('Frecuencia [Hz]')
