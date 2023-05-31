// nim: 21102056
// nama: Bintang Rizqi Pasha
// kelas: IF 09 M

package unguided;

public class Pegawai {
    // attributes
    private String NIP;
    private String nama;
    private String alamat;
    private int jumlahHariLembur;
    private double gajiPokok;
    private double totalGaji;

    // constructor
    public Pegawai(String NIP, String nama, String alamat, double gajiPokok) {
        this.NIP = NIP;
        this.nama = nama;
        this.alamat = alamat;
        this.gajiPokok = gajiPokok;
        this.jumlahHariLembur = 0;
        this.totalGaji = gajiPokok;
    }

    public Pegawai() {
        this.NIP = "21102056";
        this.nama = "Rizky";
        this.alamat = "Jl. Kebon Jeruk";
        this.gajiPokok = 10000;
        this.jumlahHariLembur = 0;
        this.totalGaji = 1000000;
    }

    // Accessor
    public String getNIP() {
        return this.NIP;
    }

    public String getNama() {
        return this.nama;
    }

    public String getAlamat() {
        return this.alamat;
    }

    public int getJumlahHariLembur() {
        return this.jumlahHariLembur;
    }

    public double getGajiPokok() {
        return this.gajiPokok;
    }

    public double getTotalGaji() {
        return this.totalGaji;
    }

    // Mutator
    public void setNIP(String NIP) {
        this.NIP = NIP;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public void setJumlahHariLembur(int jumlahHariLembur) {
        this.jumlahHariLembur = jumlahHariLembur;
    }

    public void setGajiPokok(double gajiPokok) {
        this.gajiPokok = gajiPokok;
    }

    // Method Overloading
    public void hitungTotalGaji() {
        this.totalGaji = this.gajiPokok + (this.gajiPokok * this.jumlahHariLembur * 0.01);
    }

    public void hitungTotalGaji(double bonus) {
        this.totalGaji = this.gajiPokok + (this.gajiPokok * this.jumlahHariLembur * 0.01) + bonus;
    }
}
