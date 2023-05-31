package unguided;

import java.util.Scanner;

public class BankMain {
    public static void main(String[] args) {
        Bank bank = new Bank(10000);
        Scanner scanner = new Scanner(System.in);
        Boolean berjalan = true;

        while (berjalan) {
            System.out.println();
            System.out.println("Selamat Datang di Bank ABC");
            System.out.println("=========Menu=========");
            System.out.println("1. Tampil Saldo");
            System.out.println("2. Simpan Uang");
            System.out.println("3. Ambil Uang");
            System.out.println("4. Keluar");
            System.out.print("Silahkan Pilih Menu: ");
            int menu = scanner.nextInt();

            switch (menu) {
                case 1: {
                    System.out.println("Saldo Saat Ini: Rp. " + bank.getSaldo());
                    System.out.print("Kembali? (Y/N) ");
                    char kembali = scanner.next().charAt(0);
                    if (kembali == 'y' || kembali == 'Y') {
                        berjalan = true;
                    } else {
                        berjalan = false;
                        System.out.println("Terima Kasih");
                        System.exit(0);
                    }
                    break;
                }

                case 2: {
                    System.out.print("Simpan Uang: Rp. ");
                    int jumlahSimpan = scanner.nextInt();
                    bank.simpanUang(jumlahSimpan);
                    System.out.println("Saldo Saat Ini: Rp. " + bank.getSaldo());
                    System.out.print("Kembali? (Y/N) ");
                    char kembali = scanner.next().charAt(0);
                    if (kembali == 'y' || kembali == 'Y') {
                        berjalan = true;
                    } else {
                        berjalan = false;
                        System.out.println("Terima Kasih");
                        System.exit(0);
                    }
                    break;
                }

                case 3: {
                    System.out.print("Ambil Uang: Rp. ");
                    int jumlahAmbil = scanner.nextInt();
                    if (jumlahAmbil > bank.getSaldo())
                        System.out.println("Saldo tidak cukup");
                    else {
                        bank.ambilUang(jumlahAmbil);
                        System.out.println("Saldo Saat Ini: Rp. " + bank.getSaldo());
                    }
                    System.out.print("Kembali? (Y/N) ");
                    char kembali = scanner.next().charAt(0);
                    if (kembali == 'y' || kembali == 'Y') {
                        berjalan = true;
                    } else {
                        berjalan = false;
                        System.out.println("Terima Kasih");
                        System.exit(0);
                    }
                    break;
                }

                case 4: {
                    berjalan = false;
                    System.out.println("Terima Kasih");
                    System.exit(0);
                    break;
                }

                default: {
                    System.out.println("Pilihan menu salah");
                    break;
                }
            }
        }
    }
}
