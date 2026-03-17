package Java.Parcial2.Geometria;

public class Triangulo extends Poligono {
    protected double base, altura;

    public Triangulo(int nlados, double base, double altura) {
        this.numLados = nlados;
        this.base = base;
        this.altura = altura;
    }

    @Override
    public double calcularArea() {
        return (this.base * this.altura) / 2.0;
    }

    @Override
    public double calcularPerimetro() {
        return 3 * this.base;
    }

    public static void main(String[] args) {
        Triangulo tri = new Triangulo(3, 2.0, 2.82);
    }
}
