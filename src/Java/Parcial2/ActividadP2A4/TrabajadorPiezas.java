public class TrabajadorPiezas extends Empleado {
   private double salario;
   private int piezas;

   public TrabajadorPiezas(String nombre, String apellido, String nss, double salarioBase, int piezasHechas) {
      super(nombre, apellido, nss);
      establecerSalario(salarioBase);
      establecerPiezas(piezasHechas);
   }

   public void establecerSalario(double salarioBase) {
      salario = (salarioBase < 0.0) ? 0.0 : salarioBase;
   }

   public double obtenerSalario() {
      return salario;
   }

   public void establecerPiezas(int piezasHechas) {
      piezas = (piezasHechas < 0) ? 0 : piezasHechas;
   }

   public int obtenerPiezas() {
      return piezas;
   }

   public double ingresos() {
      return obtenerSalario() * obtenerPiezas();
   }

   public String toString() {
      return String.format("%s: %s\n%s: $%,.2f; %s: %d", 
         "trabajador por piezas", super.toString(), 
         "salario por pieza", obtenerSalario(), 
         "piezas producidas", obtenerPiezas());
   }
}
