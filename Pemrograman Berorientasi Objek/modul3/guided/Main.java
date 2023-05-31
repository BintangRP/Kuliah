package guided;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) {

        Buku novel, fiksi;

        novel = new Buku();
        fiksi = new Buku();

        System.out.println();

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try {
            // novel
            System.out.print("Masukkan Judul Buku: ");
            novel.setJudul(br.readLine().toString());
            System.out.print("Masukkan Pengarang: ");
            novel.setPengarang(br.readLine().toString());
            novel.setInfo(0.2f, 45000);
            System.out.print("Masukkan Jumlah Halaman: ");

            novel.setJmlhHalaman(Integer.parseInt(br.readLine().toString()));
            novel.cetak();
            System.out.println();

            // fiksi
            System.out.print("Masukkan Judul Buku: ");
            fiksi.setJudul(br.readLine().toString());
            System.out.print("Masukkan Pengarang: ");
            fiksi.setPengarang((br.readLine()).toString());
            fiksi.setInfo(79000);
            System.out.print("Masukkan Jumlah Halaman: ");

            fiksi.setJmlhHalaman(Integer.parseInt(br.readLine().toString()));
            fiksi.cetak();

            // selama ga error menjalankan atas
        } catch (

        Exception ex) {
            // jika ada error akan menampilkan exception
            System.out.println(ex);
        }
    }
}