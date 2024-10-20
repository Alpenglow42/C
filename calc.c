//see hw11 handout Use function pointers to call from array in main

#include <stdio.h>

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

struct cmd
{
    char   cmd_name;
    double (*cmd_pointer)(double, double);
}; 

struct cmd calc_cmds[] =
    {{'+',  add   },
     {'-',  sub   },
     {'*',  mul   },
     {'/',  div   },
    };

// Function definitions
double add(double x, double y)
{
    double result = x + y;
    printf("%.4lf + %.4lf = %.4lf\n", x, y, result);
    return result;
}

double sub(double x, double y)
{
    double result = x - y;
    printf("%.4lf - %4lf = %.4lf\n", x, y, result);
    return result;
}

double mul(double x, double y)
{
    double result = x * y;
    printf("%.4lf * %.4lf = %.4lf\n", x, y, result);
    return result;
}

double divide(double x, double y)
{
    if (y != 0)
    {
        double result = x / y;
        printf("%.4lf / %.4lf = %.4lf\n", x, y, result);
        return result;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 1; 
    }
}

int main()
{
    double operand1, operand2;
    char operation;
    while( scanf("%lf %c %lf",&operand1, &operation,&operand2) == 3)
    {
        // Your code goes here
        // Iterate through the calc_cmds array
        for (int i = 0; i < sizeof(calc_cmds) / sizeof(calc_cmds[0]); i++)
        {
            // Check if the current cmd_name matches the operation
            if (calc_cmds[i].cmd_name == operation)
            {
                // Call the function using the cmd_pointer
                double result = calc_cmds[i].cmd_pointer(operand1, operand2);
                break; // Break the loop since we found the command match

           }
        }
     }    

return 0;
}//end of main
