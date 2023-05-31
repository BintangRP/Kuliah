// nim: 21102056
// nama: Bintang Rizqi Pasha
// kelas: IF 09 M

package unguided;

public class Main {
    public static void main(String[] args) {
        // membuat objek pegawai1
        Pegawai pegawai1 = new Pegawai("21102056", "Bintang Pasha", "Medang Jaya", 20000000);
        Pegawai pegawai2 = new Pegawai();

        // menampilkan data awal pegawai1
        System.out.println("\nData Awal Pegawai1:");
        System.out.println("NIP: " + pegawai1.getNIP());
        System.out.println("Nama: " + pegawai1.getNama());
        System.out.println("Alamat: " + pegawai1.getAlamat());
        System.out.println("Gaji Pokok: " + pegawai1.getGajiPokok());
        System.out.println("Jumlah Hari Lembur: " + pegawai1.getJumlahHariLembur());
        System.out.println("Total Gaji: " + pegawai1.getTotalGaji());

        System.out.println("\nData awal pegawai2");
        System.out.println("NIP: " + pegawai2.getNIP());
        System.out.println("Nama: " + pegawai2.getNama());
        System.out.println("Alamat: " + pegawai2.getAlamat());
        System.out.println("Gaji Pokok: " + pegawai2.getGajiPokok());
        System.out.println("Jumlah Hari Lembur: " + pegawai2.getJumlahHariLembur());
        System.out.println("Total Gaji: " + pegawai2.getTotalGaji());

        // mengubah data pegawai1
        pegawai1.setAlamat("Medang kamulan yang udah diubah");
        pegawai1.setJumlahHariLembur(14);
        pegawai1.hitungTotalGaji();

        // mengubah data pegawai2
        pegawai2.setNIP("21102057");
        pegawai2.setNama("Nasha");
        pegawai2.setAlamat("Purwokerto");
        pegawai2.setJumlahHariLembur(20);
        pegawai2.hitungTotalGaji();

        // menampilkan data setelah diubah
        System.out.println("\nData Pegawai 1 Setelah Diubah:");
        System.out.println("NIP: " + pegawai1.getNIP());
        System.out.println("Nama: " + pegawai1.getNama());
        System.out.println("Alamat: " + pegawai1.getAlamat());
        System.out.println("Gaji Pokok: " + pegawai1.getGajiPokok());
        System.out.println("Jumlah Hari Lembur: " + pegawai1.getJumlahHariLembur());
        System.out.println("Total Gaji: " + pegawai1.getTotalGaji());

        System.out.println("\nData Pegawai 2 Setelah Diubah:");
        System.out.println("NIP: " + pegawai2.getNIP());
        System.out.println("Nama: " + pegawai2.getNama());
        System.out.println("Alamat: " + pegawai2.getAlamat());
        System.out.println("Gaji Pokok: " + pegawai2.getGajiPokok());
        System.out.println("Jumlah Hari Lembur: " + pegawai2.getJumlahHariLembur());
        System.out.println("Total Gaji: " + pegawai2.getTotalGaji());

        // menghitung total gaji dengan bonus
        pegawai1.hitungTotalGaji(10000000);
        pegawai2.hitungTotalGaji(500000);

        // menampilkan data setelah dihitung dengan bonus
        System.out.println("\nData Pegawai 1 Setelah Dihitung dengan Bonus:");
        System.out.println("NIP: " + pegawai1.getNIP());
        System.out.println("Nama: " + pegawai1.getNama());
        System.out.println("Alamat: " + pegawai1.getAlamat());
        System.out.println("Gaji Pokok: " + pegawai1.getGajiPokok());
        System.out.println("Jumlah Hari Lembur: " + pegawai1.getJumlahHariLembur());
        System.out.println("Total Gaji + Bonus: " + pegawai1.getTotalGaji());

        System.out.println("\nData Pegawai 2 Setelah Dihitung dengan Bonus:");
        System.out.println("NIP: " + pegawai2.getNIP());
        System.out.println("Nama: " + pegawai2.getNama());
        System.out.println("Alamat: " + pegawai2.getAlamat());
        System.out.println("Gaji Pokok: " + pegawai2.getGajiPokok());
        System.out.println("Jumlah Hari Lembur: " + pegawai2.getJumlahHariLembur());
        System.out.println("Total Gaji + Bonus: " + pegawai2.getTotalGaji());
    }
}
