public class SalariedEmployee extends Employee {
    // Salaried Employee memiliki atribut nama, nip, upah mingguan
    // Salaried Employee : gaji = upah mingguan

    String nama;
    String nip;
    double upahMingguan;

    SalariedEmployee() {
        this.nama = "Salaried Employee";
        this.nip = "123456789";
        this.upahMingguan = 1000000;
    }

    SalariedEmployee(String nama, String nip, double upahMingguan) {
        this.nama = nama;
        this.nip = nip;
        this.upahMingguan = upahMingguan;
    }

    @Override
    void hitungGaji() {
        System.out.println("Gaji : " + this.upahMingguan);
    }

    @Override
    void cetakInformasi() {
        System.out.println("Nama : " + this.nama);
        System.out.println("NIP : " + this.nip);
        System.out.println("Upah Mingguan : " + this.upahMingguan);
        hitungGaji();
    }

}
