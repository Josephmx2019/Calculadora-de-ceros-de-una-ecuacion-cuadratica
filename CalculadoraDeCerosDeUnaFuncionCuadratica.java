package calculadora.de.ceros.de.una.funcion.cuadratica;
import java.util.Scanner;
public class CalculadoraDeCerosDeUnaFuncionCuadratica {
    
    public static void igualAUno(double a, double b, double c){
        double discriminante, x1, x2;
        discriminante = Math.pow((b/2), 2) - c;
        
        if (discriminante < 0){
            System.out.println("La ecuación no tiene soluciones reales");
            x1 = (-b / 2) + Math.sqrt(-discriminante);
            x2 = (-b / 2) - Math.sqrt(-discriminante);
            
            System.out.println("La primera raiz es " + x1 + "i");
            System.out.println("La segunda raiz es " + x2 + "i");
        } else{
            x1 = (-b / 2) + Math.sqrt(discriminante);
            x2 = (-b / 2) - Math.sqrt(discriminante);
            
            System.out.println("La primera raiz es " + x1);
            System.out.println("La segunda raiz es " + x2);
        }
    }
    
    public static void diferenteDeUno(double a, double b, double c){
        double discriminante, x1, x2;
	discriminante = Math.pow(b, 2) - 4 * a * c;
        
        if (discriminante < 0){
            System.out.println("La ecuación no tiene soluciones reales");
            x1 = ((-b) + Math.sqrt(-discriminante)) / (2 * a);
            x2 = ((-b) - Math.sqrt(-discriminante)) / (2 * a);
        } else {
            x1 = ((-b) + Math.sqrt(discriminante)) / (2 * a);
            x2 = ((-b) - Math.sqrt(discriminante)) / (2 * a);
        } 
    }

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        double a, b, c;
        String opc = "Si";
        
        System.out.println("-------------- Hola esta es una calculadora para calcular las raices de una ecuación de segundo grado --------------");
        while(!opc.equalsIgnoreCase("No")){
            System.out.print("Ingresa el valor de a: ");
            a = Double.parseDouble(leer.nextLine());
            System.out.print("Ingresa el valor de b: ");
            b = Double.parseDouble(leer.nextLine());
            System.out.print("Ingresa el valor de c: ");
            c = Double.parseDouble(leer.nextLine());
            
            if (a == 1){
                igualAUno(a, b, c);
            } else {
                diferenteDeUno(a, b, c);
            }
            System.out.print("¿Quieres continar? Si/No: ");
            opc = leer.nextLine();
        }

        System.out.println("Presiona una tecla para continuar...");
        leer.next();

        leer.close();
    }
}