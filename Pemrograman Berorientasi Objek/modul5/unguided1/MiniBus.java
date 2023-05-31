package unguided1;

public class MiniBus extends Sedan {
    Bus bus = new Bus();
    String tipe;

    public MiniBus() {
        // default constructor
        super("", "", 0.0f, "", "", 0);
        this.tipe = "";
        this.bus.kapasitasBagasi = 0;
        this.bus.kapasitasPenumpang = 0;
    }

    public MiniBus(String noPlat, String merk, float pajak, String fasilitasKeamanan, int kapasitasCC,
            String fasilitasKenyamanan, int kapasitasPenumpang, int kapasitasBagasi, String tipe) {
        super(noPlat, merk, pajak, fasilitasKeamanan, fasilitasKeamanan, kapasitasCC);
        this.bus.kapasitasBagasi = kapasitasBagasi;
        this.bus.kapasitasPenumpang = kapasitasPenumpang;
        this.tipe = tipe;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public String getTipe() {
        return this.tipe;
    }

    public void infoMiniBus() {
        if (this.tipe.equals("Pribadi")) {
            System.out.println("Tipe MiniBus: Pribadi, digunakan sebagai kendaraan pribadi");
        } else if (this.tipe.equals("Wagon")) {
            System.out.println("Tipe MiniBus: Wagon, digunakan sebagai kendaraan angkut/travel");
        }
    }

    @Override
    public void tampilInfo() {
        super.tampilInfo();
        bus.infoBus();
        infoMiniBus();
    }

    @Override
    public float hitungPajak() {
        float pajakSedan = super.hitungPajak();
        float pajakBus = bus.hitungPajak();
        if (this.tipe != "Pribadi" && this.tipe != "Wagon") {
            return 0f;
        }
        if (this.tipe.equals("Pribadi")) {
            return (pajakSedan * 0.05f) + (pajakBus * 0.03f);
        }
        if (this.tipe.equals("Wagon")) {
            return (pajakSedan * 0.03f) + (pajakBus * 0.05f);
        }
        return 0f;
    }
}
