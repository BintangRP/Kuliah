package unguided1;

public class Mobil implements Kendaraan {
    String noPlat, merk;
    float pajak;

    public Mobil() {
        // default constructor
        this.noPlat = "";
        this.merk = "";
        this.pajak = 0.0f;
    }

    public Mobil(String noPlat, String merk, float pajak) {
        this.noPlat = noPlat;
        this.merk = merk;
        this.pajak = pajak;
    }

    public void tampilInfo() {
        System.out.println("No. Plat: " + noPlat);
        System.out.println("Merk: " + merk);
    }

    public float hitungPajak() {
        return pajak;
    }
}
