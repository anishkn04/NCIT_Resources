f=inline('x*log10(x)-3');
g=inline('log10(exp(1))+log10(x)');
x0=0.35;

e=0.00001;
for(i=1:100)
    f0=f(x0);
    g0=g(x0);
    x1=x0-f0/g0;
    x0=x1;
end
x1