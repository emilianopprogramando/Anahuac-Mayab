// package ejercicio_factura;

public class Factura {

    String numPieza;
    String descPieza;
    int cantidadPieza;
    double precioPieza;

    public double obtenerMontoFactura() {

        if (cantidadPieza <= 0) {
            cantidadPieza = 0;
        }

        if (precioPieza <= 0) {
            precioPieza = 0.0;
        }

        return cantidadPieza * precioPieza;
    }
}
