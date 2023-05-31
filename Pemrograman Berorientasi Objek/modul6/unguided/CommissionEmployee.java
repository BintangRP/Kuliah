public class CommissionEmployee extends Employee {
    // Commission Employee memiliki atribut nama, nip, gaji pokok, komisi dan
    // total penjualan
    // Commission Employee : gaji = gaji pokok + (komisi * total penjualan)

    String nama;
    String nip;
    double gajiPokok, komisi, totalPenjualan;

    CommissionEmployee() {
        this.nama = "Commission Employee";
        this.nip = "123456789";
        this.gajiPokok = 1000000;
        this.komisi = 0.1;
        this.totalPenjualan = 1000000;
    }

    CommissionEmployee(String nama, String nip, double gajiPokok, double komisi, double totalPenjualan) {
        this.nama = nama;
        this.nip = nip;
        this.gajiPokok = gajiPokok;
        this.komisi = komisi;
        this.totalPenjualan = totalPenjualan;
    }

    @Override
    void hitungGaji() {
        System.out.println("Gaji : " + (this.gajiPokok + (this.komisi * this.totalPenjualan)));
    }

    @Override
    void cetakInformasi() {
        System.out.println("Nama : " + this.nama);
        System.out.println("NIP : " + this.nip);
        System.out.println("Gaji Pokok : " + this.gajiPokok);
        System.out.println("Komisi : " + this.komisi);
        System.out.println("Total Penjualan : " + this.totalPenjualan);
        hitungGaji();
    }
}
