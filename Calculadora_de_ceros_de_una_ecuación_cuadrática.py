from math import sqrt

def igualAUno(a, b, c):
    discriminante = pow((b/2), 2) - c

    if discriminante < 0:
        print("La ecuación no tiene soluciones reales")
        x1 = complex(-b/2, sqrt(-discriminante))
        x2 = complex(-b/2, sqrt(-discriminante))
    else:
        x1 = (-b/2) + sqrt(discriminante)
        x2 = (-b/2) - sqrt(discriminante)

    print("La primera raiz es " + str(x1))
    print("La segunda raiz es " + str(x2))

def difenteDeUno(a, b, c):
    discriminante = pow(b, 2) - 4 * a * c

    if discriminante < 0:
        print("La ecuación no tiene soluciones reales")
        x1 = complex((-b + sqrt(-discriminante)) / (2 * a), 0)
        x2 = complex((-b - sqrt(-discriminante)) / (2 * a), 0)
    else:
        x1 = (-b + sqrt(discriminante)) / (2 * a)
        x2 = (-b - sqrt(discriminante)) / (2 * a)

    print("La primera raiz es " + str(x1))
    print("La segunda raiz es " + str(x2))
    
def main():
    print("Hola esta es una calculadora para calcular las raices de una ecuación de segundo grado")
    a = float(input("Ingresa a: "))
    b = float(input("Ingresa b: ")) 
    c = float(input("Ingresa c: "))

    if a == 1:
        igualAUno(a, b, c)
    else:
        difenteDeUno(a, b, c)

if __name__ == "__main__":
    main()
