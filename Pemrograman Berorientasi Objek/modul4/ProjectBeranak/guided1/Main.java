package guided1;

public class Main {
    public static void main(String[] args) {
        AnakLaki boy = new AnakLaki();
        System.out.println("Nama: " + boy.nama + " " + boy.marga);
        System.out.println("Karakter: ");
        boy.sifatBapak();

        AnakCewe girl = new AnakCewe();
        System.out.println("Nama: " + girl.nama + " " + girl.marga);
        System.out.println("Karakter: ");
        girl.sifatIbu();
    }
}
