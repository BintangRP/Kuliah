package unguided1;

public class Pegawai {
    protected String NIP;
    protected String Nama;
    protected String Alamat;
    protected int TahunMasuk;

    public Pegawai(String Nama, String NIP, String Alamat, int TahunMasuk) {
        this.Nama = Nama;
        this.NIP = NIP;
        this.Alamat = Alamat;
        this.TahunMasuk = TahunMasuk;
    }

    public void cetakPegawai() {
        System.out.println("Nama              : " + Nama);
        System.out.println("NIP               : " + NIP);
        System.out.println("Alamat            : " + Alamat);
        System.out.println("Tahun Masuk Kerja : " + TahunMasuk);
    }
}
