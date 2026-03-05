package Java.Parcial2.mamifero;

public class Vaca extends Mamifero {
    private double litrosLeche;

    public Vaca(String n, double p, double l) {
        super(n, p);
        this.litrosLeche = l;
    }

    public void calcularCantidadComida() {
        System.out.println(super.peso * 0.3 + " kg de alimento");
    }

    @Override
    public String toString() {
        return super.toString() + "[Litros de leche:" + litrosLeche + "]";
    }
}
