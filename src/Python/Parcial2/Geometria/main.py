from triangulo import Triangulo
from circunferencia import Circunferencia

if __name__ == "__main__":

    triangulo = Triangulo(3, 5, 4)
    circunferencia = Circunferencia(0, 3)

    print("Triangulo")
    print("Lados:", triangulo.getNumLados())
    print("Area:", triangulo.calcularArea())
    print("Perimetro:", triangulo.calcularPerimetro())

    print("\nCircunferencia")
    print("Area:", circunferencia.calcularArea())
    print("Perimetro:", circunferencia.calcularPerimetro())