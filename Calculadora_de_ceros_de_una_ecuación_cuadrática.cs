using System;

class Program
{
    static void igualAUno(double a, double b, double c)
    {
        double discriminante = Math.Pow((b / 2), 2) - c;

        if (discriminante < 0)
        {
            Console.WriteLine("La ecuación no tiene soluciones reales");
            double x1 = (-b / 2) + Math.Sqrt(-discriminante);
            double x2 = (-b / 2) - Math.Sqrt(-discriminante);
            Console.WriteLine("La primera raiz es " + x1 + "i");
            Console.WriteLine("La segunda raiz es " + x2 + "i");
        }
        else
        {
            double x1 = (-b / 2) + Math.Sqrt(discriminante);
            double x2 = (-b / 2) - Math.Sqrt(discriminante);
            Console.WriteLine("La primera raiz es " + x1);
            Console.WriteLine("La segunda raiz es " + x2);
        }
    }

    static void diferenteDeUno(double a, double b, double c)
    {
        double discriminante = Math.Pow(b, 2) - 4 * a * c;

        if (discriminante < 0)
        {
            Console.WriteLine("La ecuación no tiene soluciones reales");
            double x1 = ((-b) + Math.Sqrt(-discriminante)) / (2 * a);
            double x2 = ((-b) - Math.Sqrt(-discriminante)) / (2 * a);
            Console.WriteLine("La primera raiz es " + x1 + "i");
            Console.WriteLine("La segunda raiz es " + x2 + "i");
        }
        else
        {
            double x1 = ((-b) + Math.Sqrt(discriminante)) / (2 * a);
            double x2 = ((-b) - Math.Sqrt(discriminante)) / (2 * a);
            Console.WriteLine("La primera raiz es " + x1);
            Console.WriteLine("La segunda raiz es " + x2);
        }
    }

    static void Main()
    {
        char opc;
        Console.WriteLine("----------------- Hola esta es una calculadora para calcular las raices de una ecuación de segundo grado -----------------");

        do
        {
            Console.Write("Ingresa el valor de a: ");
            double a = double.Parse(Console.ReadLine());
            Console.Write("Ingresa el valor de b: ");
            double b = double.Parse(Console.ReadLine());
            Console.Write("Ingresa el valor de c: ");
            double c = double.Parse(Console.ReadLine());

            if (a == 1)
            {
                igualAUno(a, b, c);
            }
            else
            {
                diferenteDeUno(a, b, c);
            }
            Console.Write("¿Quieres continuar? S/N: ");
            opc = Console.ReadLine()[0];
        } while (opc != 'N' && opc != 'n');

        Console.WriteLine("Presiona cualquier tecla para salir");
        Console.ReadKey();
    }
}