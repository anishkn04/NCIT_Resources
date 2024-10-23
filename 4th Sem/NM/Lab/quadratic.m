x = [0 1 3 4 5 6];
y= [2 0 8 18 32 50];
sumx=0;
sumxy=0;
sumy=0;
sumxx=0;
sumxxx=0;
sumxxy=0;
sumxxxx=0;

for(i=1:length(x))
    sumx=sumx+x(i);
    sumy=sumy+y(i);
    sumxy=sumxy+x(i)*y(i);
    sumxx=sumxx+x(i)*x(i);
    sumxxx=sumxxx+x(i)*x(i)*x(i);
    sumxxy=sumxxy+x(i)*x(i)*y(i);
    sumxxxx=sumxxxx+x(i)*x(i)*x(i)*x(i);
end

A= [sumxx sumx length(x);sumxxx sumxx sumx;sumxxxx sumxxx sumxx];
B= [sumy; sumxy; sumxxy];
C= inv(A)*B;
A
B
C