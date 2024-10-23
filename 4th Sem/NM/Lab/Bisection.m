f=inline('3*x+sin(x)-exp(x)');
x0=0.35;
x1=0.37;
e=0.00001;
while(abs(x1-x0)>e)
    f0=f(x0);
    f1=f(x1);
    if(f1*f0 < 0)
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f2*f1 < 0)
            x0=x2;
        else
            x1=x2;
        end
    end
end
x2