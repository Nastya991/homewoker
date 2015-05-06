close all;
clear all;
clc;

A(1) = 0;
A(2) = 0;
A(3) = 0;
A(4) = 1;
A(5) = 0.5;
A(6) = 1/6;
A(7) = 0;
A(8) = 0;
G = linspase(0,20,9); 
D = (0.75*sigma(4,4)+0.375*sigma(5,5)+0.125*sigma(6,6))*1/6;
G*A(n)*sigma(n,n)- D*G + sigma(n,n)=0.125;

for i = 1:8;
for j = 1:8;
if i = j 
    D = (0.75*sigma(i,j)+0.375*sigma(i,j)+0.125*sigma(i,j))*1/6;
    sigma(i,j)=(0.125+ D*G)/(1+G*A(i));
elseif sigma(i,j)= 0;
end
end
end

figure;
hold on;
plot(sigma(i,j),G,'red'); 
hold off;
grid on;
xlabel('G');
ylabel('sigma');
