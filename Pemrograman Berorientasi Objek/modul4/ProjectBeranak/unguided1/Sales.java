package unguided1;

/*
 * Data Sales meliputi NIP, nama, alamat, gaji pokok dan jumlah pelanggan
* yang berhasil direkrut
* e. Komisi diberikan dengan perhitungan Rp.50.000 untuk setiap pelanggan
* yang berhasil direkrut
 */

public class Sales extends Pegawai {
    private int gajiPokok, jumlahPelanggan;

    public Sales(String Nama, String NIP, String Alamat, int TahunMasuk, int gajiPokok, int jumlahPelanggan) {
        super(Nama, NIP, Alamat, TahunMasuk);
        this.gajiPokok = gajiPokok;
        this.jumlahPelanggan = jumlahPelanggan;
    }

    public double HitungGajiAkhir() {
        int gajiAkhir = gajiPokok + (jumlahPelanggan * 50000);
        return gajiAkhir;
    }

    public void cetakSales() {
        System.out.println("== Data Sales ==");
        super.cetakPegawai();
        System.out.println("Jumlah Pelanggan  : " + jumlahPelanggan + "/orang");
        System.out.println("Gaji Pokok        : Rp. " + gajiPokok);
        System.out.println("Gaji Total Sales  : Rp. " + HitungGajiAkhir());
        System.out.println();

    }

    public void setSales(String Nama, String NIP, String Alamat, int TahunMasuk, int gajiPokok, int jumlahPelanggan) {
        this.Nama = Nama;
        this.NIP = NIP;
        this.Alamat = Alamat;
        this.TahunMasuk = TahunMasuk;
        this.gajiPokok = gajiPokok;
        this.jumlahPelanggan = jumlahPelanggan;
    }
}
