package J041;

public class Car {
    private String model;
    private String color;
    private int speed;

    public Car(){       //생성자가 여러개라면 빈 생성자 필수

    }

    public Car(String model, String color, int speed){
        this.model = model;
        this.color = color;
        this.speed = speed;
    }

    public String getModel(){
        return model;
    }

    public void setModel(String model){
        this.model = model;
    }

    public void seeedUp(){
        this.speed++;
    }
}
