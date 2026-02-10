package Java.autor;

public class test {
    public static void main(String args[]) {
        autor obj = new autor("Deitel", "Aleman");
        libro obj2 = new libro("Programacion en Java", 2017, obj);
        System.out.println(obj2);
    }
}