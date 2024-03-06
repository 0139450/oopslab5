class Vehicle {
    public void engine() {
        System.out.println("the vehicle's engine is a petrol engine");
    }
    int vehicleNum = 1234;
}

class Car extends Vehicle {
    String color = "red";
}

public class inherit {
    public static void main(String[] args) {
        Car obj = new Car();
        obj.engine();
        System.out.println(obj.vehicleNum);
        System.out.println(obj.color);
    }
}
