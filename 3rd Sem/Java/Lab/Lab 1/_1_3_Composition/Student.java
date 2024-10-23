public class Student {
    String name;
    int roll;
    Address add;

    public Student(String name, int roll, Address add){
        this.name = name;
        this.roll = roll;
        this.add = add;
    }
    public String toString(){
        return "Name: " + name + " Roll: " + roll + " Address: " + add;
    }
}
