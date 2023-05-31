// a. Buatlah abstract class dengan nama Bangun Datar yang berisi abstract method
// yang terdiri dari Keliling dan Luas.
// b. Class Bangun Datar memiliki turunan yang terdiri dari Persegi, Persegi Panjang,
// dan Lingkaran.
// c. Tampilan yang diharapkan sebagai berikut :
package guided;

abstract class bangunDatar {
    abstract void luas();

    abstract void keliling();
}

class persegi extends bangunDatar {
    int sisi = 5;
    int luas;
    int keliling;

    // constructor
    public persegi(int sisi) {
        this.sisi = sisi;
    }

    @Override
    void luas() {
        luas = sisi * sisi;
        System.out.println("Luas Persegi : " + luas);
    }

    @Override
    void keliling() {
        keliling = 4 * sisi;
        System.out.println("Keliling Persegi : " + keliling);
    }

    public void tampil() {
        System.out.println("Persegi dengan sisi " + sisi + "cm menghasilkan");
        keliling();
        luas();
        System.out.println();
    }
}

class persegiPanjang extends bangunDatar {
    int panjang = 5;
    int lebar = 10;
    int luas;
    int keliling;

    public persegiPanjang(int panjang, int lebar) {
        this.panjang = panjang;
        this.lebar = lebar;
    }

    @Override
    void luas() {
        luas = panjang * lebar;
        System.out.println("Luas Persegi Panjang : " + luas);
    }

    @Override
    void keliling() {
        keliling = 2 * (panjang + lebar);
        System.out.println("Keliling Persegi Panjang : " + keliling);
    }

    public void tampil() {
        System.out.println("Persegi Panjang dengan panjang " + panjang + "cm dan lebar " + lebar + "cm menghasilkan");
        keliling();
        luas();
        System.out.println();
    }
}

class lingkaran extends bangunDatar {
    int jari = 5;
    double luas;
    double keliling;

    public lingkaran(int jari) {
        this.jari = jari;
    }

    @Override
    void luas() {
        luas = Math.pow(jari, 2) * Math.PI;
        System.out.println("Luas Lingkaran : " + luas);
    }

    @Override
    void keliling() {
        keliling = 2 * 3.14 * jari;
        System.out.println("Keliling Lingkaran : " + keliling);
    }

    public void tampil() {
        System.out.println("Lingkaran dengan jari-jari " + jari + "cm menghasilkan");
        keliling();
        luas();
        System.out.println();
    }
}
