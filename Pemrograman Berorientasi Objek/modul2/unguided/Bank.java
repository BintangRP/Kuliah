package unguided;

public class Bank {
    private int saldo;

    public Bank(int saldo) {
        this.saldo = saldo;
    }

    public void simpanUang(int jumlahUang) {
        saldo += jumlahUang;
    }

    public void ambilUang(int jumlahUang) {
        saldo -= jumlahUang;
    }

    public int getSaldo() {
        return saldo;
    }
}
