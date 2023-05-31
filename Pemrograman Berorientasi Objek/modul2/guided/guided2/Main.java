package guided.guided2;

public class Main {
    public static void main(String[] args) {
        Buku a, b = new Buku();
        a = new Buku("Pemrograman Berbasis Objek dengan Java", "Indrajani", 2);
        a.cetakKeLayar();
        b = new Buku();
        b.cetakKeLayar();
    }
}
