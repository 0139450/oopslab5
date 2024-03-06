class Vehicle {
    public void color() {
        System.out.println("the color of the vehicle is black");
    }
    public void engine() {
        System.out.println("vehicle has petrol engine");
    }
}

class FourWheeler {
    public void speed() {
        System.out.println("maximum 100kmph");
    }
    public void vehicles() {
        vehicleType();
    }
    private void vehicleType() {
        System.out.println("vans, autos, jeeps");
    }
}

class Car extends Vehicle {
    public void company() {
        System.out.println("the car is from swift company");
    }
}

class Bike extends Vehicle {
    public void wheels() {
        System.out.println("two wheeler vehicle.");
    }
}

class Scooty extends Bike {}

public class typeinherit{
    public static void main(String[] args) {
        Vehicle obj = new Vehicle();
        FourWheeler obj1 = new FourWheeler();
        Car obj2 = new Car();
        Bike obj3 = new Bike();
        Scooty obj4 = new Scooty();
        
        obj.color();
        obj.engine();
        obj1.speed();
       // obj1.vehicles();
        obj2.color();
        //obj2.speed();
        //obj2.vehicles();
        obj3.color();
        obj3.engine();
        obj3.wheels();
        obj4.color();
        obj4.wheels();
    }
}
