
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package unguided;

import java.util.Scanner;

/**
 *
 * @author LAB-PROGRAMMING
 */
public class aritmatika {
    static double luasSegitiga(float alas, float tinggi) {
        return (alas * tinggi / 2);
    }

    static void luas(int alas, int tinggi) {
        System.out.println(alas * tinggi);
    }

    static double luasLingkaran(float r) {
        return (3.14 * r * r);
    }

    static double luasPersegi(float sisi) {
        return (sisi * sisi);
    }

    static double luasPersegiPanjang(float panjang, float lebar) {
        return (panjang * lebar);
    }

    public static void main(String args[]) {
        // luas bangun ruang: segitiga,lingkaran,persegi,persegi panjang
        // membuat inputan dari user
        Scanner input = new Scanner(System.in);

        System.out.println("Masukkan alas:");
        float alas = input.nextFloat();
        System.out.println("Masukkan tinggi:");
        float tinggi = input.nextFloat();

        float hasil = alas * tinggi;
        System.out.println("Luas Segitiga:" + hasil);

        System.out.println("Masukkan jari-jari:");
        float r = input.nextFloat();
        System.out.println("Masukkan sisi:");
        float sisi = input.nextFloat();
        System.out.println("Masukkan panjang:");
        float panjang = input.nextFloat();
        System.out.println("Masukkan lebar:");
        float lebar = input.nextFloat();

        System.out.println("Luas Segitiga:" + luasSegitiga(alas, tinggi));
        System.out.println("Luas Lingkaran:" + luasLingkaran(r));
        System.out.println("Luas Persegi:" + luasPersegi(sisi));
        System.out.println("Luas Persegi Panjang:" + luasPersegiPanjang(panjang, lebar));
    }
}