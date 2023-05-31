package guided2;

public class Circle extends Point {
    private float radius;

    // constructor class child
    public Circle(float a, float b, float r) {
        super(a, b);
        radius = r;
        System.out.println("Kontruktor circle dijalankan");
    }

    @Override
    public void cetakPoint() {
        super.cetakPoint();
        System.out.println("Radius : [" + radius + "] ");
    }
}
