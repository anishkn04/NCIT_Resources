class Student {
    String name;
    int roll;
    public Student(String name, int roll){
        this.name = name;
        this.roll = roll;
    }
    @Override
    public String toString(){
        return roll + ". " + name;
    }
}


public class Main {
    public static void main(String[] args) {
        Student S = new Student("Anish", 3);
        System.out.println(S);
    }
}