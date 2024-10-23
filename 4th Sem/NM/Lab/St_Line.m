x = [2 4 5 6 7];
y= [1 5 7 9 11];
sumx=0;
sumxy=0;
sumy=0;
sumxx=0;

for(i=1:length(x))
    sumx=sumx+x(i);
    sumy=sumy+y(i);
    sumxy=sumxy+x(i)*y(i);
    sumxx=sumxx+x(i)*x(i);
end

A= [sumx length(x);sumxx sumx];
B= [sumy; sumxy];
C= inv(A)*B;
A
B
C