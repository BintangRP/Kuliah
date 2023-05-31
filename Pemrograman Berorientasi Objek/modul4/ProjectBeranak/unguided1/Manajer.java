package unguided1;

// * Data Manajer meliputi nama, alamat, gaji pokok,divisi dan tunjangan
// * jabatan
// * g. Tunjangan jabatan bagi Manajer diberikan jika telah bekerja selama 3
// * tahun sebesar 5% dari gaji pokok dan jika telah bekerja selama lebih
// * dari 5 tahun sebesar 10% dari gaji pokok.
public class Manajer extends Pegawai {
    private int gajiPokok;
    private String divisi;

    public Manajer(String Nama, String NIP, String Alamat, int TahunMasuk, int gajiPokok, String divisi) {
        super(Nama, NIP, Alamat, TahunMasuk);
        this.gajiPokok = gajiPokok;
        this.divisi = divisi;
    }

    public double HitungGajiAkhir() {
        double gajiAkhir = gajiPokok;
        if ((2015 - TahunMasuk) >= 3 && (2015 - TahunMasuk) < 5) {
            gajiAkhir = gajiPokok + (gajiPokok * 0.05);
        } else if (2015 - TahunMasuk >= 5) {
            gajiAkhir = gajiPokok + (gajiPokok * 0.1);
        }
        return gajiAkhir;
    }

    public void cetakManajer() {
        System.out.println("== DATA MANAJER ==");
        super.cetakPegawai();
        System.out.println("Divisi            : " + divisi);
        System.out.println("Gaji Pokok        : Rp. " + gajiPokok);
        System.out.println("Gaji Total Manajer: Rp. " + HitungGajiAkhir());
        System.out.println();
    }

    public void setManajer(String Nama, String NIP, String Alamat, int TahunMasuk, int gajiPokok, String divisi) {
        this.Nama = Nama;
        this.NIP = NIP;
        this.Alamat = Alamat;
        this.TahunMasuk = TahunMasuk;
        this.gajiPokok = gajiPokok;
        this.divisi = divisi;
    }
}
