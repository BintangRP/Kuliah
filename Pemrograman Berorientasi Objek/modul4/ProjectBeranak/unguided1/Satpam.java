package unguided1;

/*
 * Data Satpam meliputi NIP, nama, alamat, gaji pokok dan jam lembur
 * Bonus diberikan bagi Satpam yang bersedia untuk lembur dengan
* perhitungan Rp.10.000/jam lembur
 * 
 */
public class Satpam extends Pegawai {
    private int gajiPokok, jamLembur;

    public Satpam(String Nama, String NIP, String Alamat, int TahunMasuk, int gajiPokok, int jamLembur) {
        super(Nama, NIP, Alamat, TahunMasuk);
        this.gajiPokok = gajiPokok;
        this.jamLembur = jamLembur;
    }

    public double HitungGajiAkhir() {
        double gajiAkhir = gajiPokok + (jamLembur * 10000);
        return gajiAkhir;
    }

    public void cetakSatpam() {
        System.out.println("== DATA SATPAM ==");
        super.cetakPegawai();
        System.out.println("Jam Lembur        : " + jamLembur + "/jam");
        System.out.println("Gaji Pokok        : Rp. " + gajiPokok);
        System.out.println("Gaji Total Satpam : Rp. " + HitungGajiAkhir());
        System.out.println();
    }

    public void setSatpam(String Nama, String NIP, String Alamat, int TahunMasuk, int gajiPokok, int jamLembur) {
        this.Nama = Nama;
        this.NIP = NIP;
        this.Alamat = Alamat;
        this.TahunMasuk = TahunMasuk;
        this.gajiPokok = gajiPokok;
        this.jamLembur = jamLembur;
    }
}
