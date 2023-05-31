package guided.guided2;

class Buku {

    private String judul;
    private String pengarang;

    public Buku() {
        this.judul = "Tidak diketahui";
        this.pengarang = "Tidak diketahui";
    }

    public Buku(String judul, String pengarang, int jumlah) {
        System.out.println("Constructor buku sedang dijalankan...");
        this.judul = judul;
        this.pengarang = pengarang;

    }

    public void setNilai(String judul, String pengarang, int jumlah) {
        this.judul = judul;
        this.pengarang = pengarang;

    }

    void cetakKeLayar() {

        if (judul == null && pengarang == null)
            return;
        System.out.println("Judul Buku : " + judul);
        System.out.println("Pengarang : " + pengarang);
    }
}
