package Java.Parcial2.Geometria;

public class Test {

    public static void main(String[] args) {

        Triangulo triangulo = new Triangulo(3, 5, 4);
        Circunferencia circunferencia = new Circunferencia(0, 3);

        System.out.println("Triangulo");
        System.out.println("Lados: " + triangulo.getNumLados());
        System.out.println("Area: " + triangulo.calcularArea());
        System.out.println("Perimetro: " + triangulo.calcularPerimetro());

        System.out.println("\nCircunferencia");
        System.out.println("Area: " + circunferencia.calcularArea());
        System.out.println("Perimetro: " + circunferencia.calcularPerimetro());
    }
}