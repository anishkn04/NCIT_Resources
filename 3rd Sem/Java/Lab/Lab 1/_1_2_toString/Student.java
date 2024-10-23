public class Student {
    String name;
    int roll;
    public Student(String name, int roll){
        this.name = name;
        this.roll = roll;
    }
    @Override
    public String toString(){
        return roll + " " + name;
    }
}
