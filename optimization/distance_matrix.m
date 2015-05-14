close all;
clear all;
clc;

x = [ 50.23 50.08 50.04 49.95  48 49.18 49.56 48.7997 48.75 49.23 50 49.59 49.19 49.217]; 
y = [ 12.87 14.42 15.77 16.22 14 15.479 15.96 16.80 16.75 17.36 17.81 17.25 16.607 15.867];

for i = 1:length(x)
    for j = 1:length(y)
        distances(i,j) = sqrt((x(i) - x(j))^2 + (y(i) - y(j))^2);
    end
end
