public class ProjectPlanner extends Employee {
    // Project Planner memiliki atribut nama, nip, gaji pokok, komisi dan total
    // hasil proyek
    // Project Planner : gaji = gaji pokok + (komisi * total hasil proyek) - pajak.
    // Pajak dihitung 5 % dari gaji pokok.

    String nama;
    String nip;
    double gajiPokok, komisi, totalHasilProyek;

    ProjectPlanner() {
        this.nama = "Project Planner";
        this.nip = "123456789";
        this.gajiPokok = 1000000;
        this.komisi = 0.1;
        this.totalHasilProyek = 1000000;
    }

    ProjectPlanner(String nama, String nip, double gajiPokok, double komisi, double totalHasilProyek) {
        this.nama = nama;
        this.nip = nip;
        this.gajiPokok = gajiPokok;
        this.komisi = komisi;
        this.totalHasilProyek = totalHasilProyek;
    }

    @Override
    void hitungGaji() {
        System.out.println("Gaji : "
                + ((this.gajiPokok + (this.komisi * this.totalHasilProyek)) - (this.gajiPokok * 0.05)));
    }

    @Override
    void cetakInformasi() {
        System.out.println("Nama : " + this.nama);
        System.out.println("NIP : " + this.nip);
        System.out.println("Gaji Pokok : " + this.gajiPokok);
        System.out.println("Komisi : " + this.komisi);
        System.out.println("Total Hasil Proyek : " + this.totalHasilProyek);
        hitungGaji();
    }
}
