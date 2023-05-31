package guided2;

public class Point {
    protected float x, y;

    // constructor class parent
    public Point(float a, float b) {
        System.out.println("Kontruktor point dijalankan");
        x = a;
        y = b;
    }

    public void cetakPoint() {
        System.out.println("Point: [" + x + "," + y + "]");
    }
}