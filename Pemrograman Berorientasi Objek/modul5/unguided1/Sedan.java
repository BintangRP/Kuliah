package unguided1;

public class Sedan extends Mobil {
    String fasilitasKeamanan, fasilitasKenyamanan;
    int kapasitasCC;

    public Sedan() {
        // default constructor
        super("", "", 0.0f);
        this.fasilitasKeamanan = "";
        this.fasilitasKenyamanan = "";
        this.kapasitasCC = 0;
    }

    public Sedan(String noPlat, String merk, float pajak,
            String fasilitasKeamanan, String fasilitasKenyamanan, int kapasitasCC) {
        super(noPlat, merk, pajak);
        this.fasilitasKeamanan = fasilitasKeamanan;
        this.fasilitasKenyamanan = fasilitasKenyamanan;
        this.kapasitasCC = kapasitasCC;
    }

    public void infoSedan() {
        System.out.println("Fasilitas Keamanan: " + fasilitasKeamanan);
        System.out.println("Fasilitas Kenyamanan: " + fasilitasKenyamanan);
        System.out.println("Kapasitas CC: " + kapasitasCC);
    }

    @Override
    public void tampilInfo() {
        super.tampilInfo();
        System.out.println("\nInformasi Kendaraan");
        infoSedan();
    }

    @Override
    public float hitungPajak() {
        return super.hitungPajak() + (pajak * kapasitasCC * 0.00005f);
    }
}
