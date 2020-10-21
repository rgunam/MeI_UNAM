clear all
close all
clc
 
N = 500;
count = 0;              %contador de control
%Propiedades a definir
serialPort = 'COM3';            % define # puerto COM 
baudRate = 115200;
%Abre el puerto serial COM
s = serial(serialPort,'Baudrate',baudRate,'Terminator','CR/LF');
fopen(s);
sen = fscanf(s, '%s');  %separa numero 1 de numero 2
ii=0;
while ii < N %Ciclo permanente mientras la ventana esté abierta
   ii = ii + 1;
   sen = fscanf(s, '%s'); % lee la cadena proveniente del puerto serial
   dat=str2num(sen);
   voltaje1(ii) = dat(1);     %Extrae el dato      
   voltaje2(ii) = dat(2);   %Extrae el dato
  
end

fclose(s);
delete(s);
clear s serialPort;

figure
subplot(2,1,1)
plot(voltaje1)
subplot(2,1,2)
plot(voltaje2)

%%
%procesamiento de los datos
k=1:10:N;
R_hat_1 = 0;
R_hat_2 = 0;
Rs = 100;
for j=1:length(k)
    R_hat_1(:,j) = (mean(voltaje1(1:k(j))./ voltaje2(1:k(j))) -1) * Rs;
    R_hat_2(:,j) = (mean(voltaje1(1:k(j))) ./ mean(voltaje2(1:k(j))) - 1) * Rs;
    
end

figure
plot(k,R_hat_1,'.')
hold on
plot(k,R_hat_2,'o')
