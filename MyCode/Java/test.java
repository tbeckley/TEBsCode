import java.io.*;

public class Car
{
    public Car(String _model, String _manufacdtured)
    {
        model = _model;
        manufacturedDate = _manufacdtured;
        odometer = 0;
    }

    String model;
    String manufacturedDate;
    int odometer;

    private void drive() {
        odometer++;
    }

    public static repair()
    {
        fix();
        wash();
        drive();
    }
}

int main(void)
{

}

