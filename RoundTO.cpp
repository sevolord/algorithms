  
double roundTo(double x, double n )  
{
double sd;               
    if (n == 2) sd = 100;
    else if (n == 1) sd = 10;
    else if (n == 0) sd = 1;
    else if (n == -1)sd = 0.1;
    else if (n == -2)sd = 0.01;              
    if (x<0) x = (x*sd - 0.5)/sd;
    else if (x>=0) x = (x*sd + 0.5)/sd;  
    Round(x);
    return x;  
}
