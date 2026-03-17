package Java.Parcial2.Geometria;

public class Circunferencia extends Poligono {

    protected double radio;

    public Circunferencia(int numLados, double radio) {
        this.numLados = numLados;
        this.radio = radio;
    }

    @Override
    public double calcularArea() {
        return Math.PI * radio * radio;
    }

    @Override
    public double calcularPerimetro() {
        return 2 * Math.PI * radio;
    }
}