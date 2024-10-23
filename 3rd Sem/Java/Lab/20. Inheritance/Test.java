class Employee {
    String name;
    double monthlySalary;
    int id;

    public Employee(int id, String name, double monthlySalary) {
        this.id = id;
        this.name = name;
        this.monthlySalary = monthlySalary;
    }

    double getYearly() {
        return monthlySalary * 12;
    }

    String getDetails() {
        return "Name = " + name + " Id = " + id + " Yearly Salary = " + getYearly();
    }
}

class Teacher extends Employee {
    int numOfSub;

    public Teacher(int id, String name, double monthlySalary, int numOfSub) {
        super(id, name, monthlySalary);
        this.numOfSub = numOfSub;
    }

    @Override
    double getYearly() {
        return (monthlySalary + numOfSub * 500) * 12;
    }

    @Override
    String getDetails() {
        return super.getDetails() + " Number of Subjects = " + numOfSub;
    }
}

public class Test {
    public static void main(String[] args) {
        Employee emp = new Employee(1, "Emplo", 20000);
        Teacher teach = new Teacher(2, "Teach", 20000, 3);
        System.out.println(emp.getDetails());
        System.out.println(teach.getDetails());
    }
}
