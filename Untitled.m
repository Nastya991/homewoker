close all;
clear all;
clc;

k = 0.2337;
T = 100;
n = 60;
t=linspace(1,100,n);% t values
u=exp(-t);
u1=-k*(T-u); %model

i=1:60;
u=exp(-i);

first_milk = u>=70;
second_milk=u<70;

if first_milk
u1= -k*(T-u);

figure;
hold on;
plot(t,u,'black')
hold off;
elseif second_milk
u1=-k*(T-u);

figure;
hold on;
plot(t,u,'red')
hold off;
end