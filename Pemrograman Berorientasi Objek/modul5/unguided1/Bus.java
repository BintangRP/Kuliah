package unguided1;

public class Bus extends Mobil {
    int kapasitasPenumpang, kapasitasBagasi;

    public Bus() {
        // default constructor
        super("", "", 0.0f);
        this.kapasitasPenumpang = 0;
        this.kapasitasBagasi = 0;
    }

    public Bus(String noPlat, String merk, float pajak, int kapasitasPenumpang, int kapasitasBagasi) {
        super(noPlat, merk, pajak);
        this.kapasitasPenumpang = kapasitasPenumpang;
        this.kapasitasBagasi = kapasitasBagasi;
    }

    public void infoBus() {
        System.out.println("Kapasitas Penumpang: " + kapasitasPenumpang);
        System.out.println("Kapasitas Bagasi: " + kapasitasBagasi);
    }

    @Override
    public void tampilInfo() {
        super.tampilInfo();
        System.out.println("\nInformasi Kendaraan");
        infoBus();
    }

    @Override
    public float hitungPajak() {
        return super.hitungPajak() + (pajak * kapasitasPenumpang * kapasitasBagasi * 0.00005f);
    }
}
