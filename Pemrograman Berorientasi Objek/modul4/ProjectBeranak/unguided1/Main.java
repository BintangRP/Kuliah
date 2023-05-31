package unguided1;

public class Main {
    public static void main(String[] args) {
        Satpam S = new Satpam("Rendra", "0042", "Jl. Itik 15", 2000, 300000, 5);
        Sales T = new Sales("Wibisana", "0185", "Jl. Ayam 78", 2006, 500000, 10);
        Manajer M = new Manajer("Adi", "0005", "Jl. Angsa 56", 2000, 1500000, "Keuangan");
        // S.setSatpam("Rendra", "0042", "Jl. Itik 15", 2000, 300000, 5);
        // T.setSales("Wibisana", "0185", "Jl. Ayam 78", 2006, 500000, 10);
        // M.setManajer("Adi", "0005", "Jl. Angsa 56", 2000, 1500000, "Keuangan");
        System.out.println("==DISPLAY DATA KARYAWAN==\n");
        S.cetakSatpam();
        T.cetakSales();
        M.cetakManajer();
    }
}
