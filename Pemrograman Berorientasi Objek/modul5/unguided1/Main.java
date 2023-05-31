package unguided1;

public class Main {
    public static void main(String[] args) {
        Mobil mobil1 = new Mobil("B 1234 ABC", "Toyota", 3000000);
        Bus bus1 = new Bus("B 5678 DEF", "Isuzu", 5000000, 50, 1000);
        Sedan sedan1 = new Sedan("B G101 GHI", "Isuzu", 4000000, "Airbag", "AC", 2000);
        MiniBus minibus1 = new MiniBus("B 9101 JKL", "Isuzu", 6000000, "Airbag", 1800, "AC", 1000, 1000, "Pribadi");
        MiniBus minibus2 = new MiniBus("B 1121 MNO", "Isuzu", 7000000, "Airbag", 1800, "AC", 1000, 1000, "Wagon");

        System.out.println("===== Mobil 1 =====");
        mobil1.tampilInfo();
        System.out.println("Pajak: " + mobil1.hitungPajak());
        System.out.println("===================");

        System.out.println("\n===== Bus 1 =====");
        bus1.tampilInfo();
        System.out.println("Pajak: " + bus1.hitungPajak());
        System.out.println("===================");

        System.out.println("\n===== Sedan 1 =====");
        sedan1.tampilInfo();
        System.out.println("Pajak: " + sedan1.hitungPajak());
        System.out.println("===================");

        System.out.println("\n===== MiniBus 1 =====");
        minibus1.tampilInfo();
        System.out.println("Pajak: " + minibus1.hitungPajak());
        System.out.println("===================");

        System.out.println("\n===== MiniBus 2 =====");
        minibus2.tampilInfo();
        System.out.println("Pajak: " + minibus2.hitungPajak());
        System.out.println("===================");
    }
}
