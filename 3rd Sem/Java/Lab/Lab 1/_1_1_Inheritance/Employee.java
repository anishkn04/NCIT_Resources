public class Employee {
    String name;
    double monthlySalary;
    int id;
    public Employee(int id, String name, double monthlySalary){
        this.id = id;
        this.name = name;
        this.monthlySalary = monthlySalary;
    }
    double getYearly(){
        return monthlySalary * 12;
    }

    String getDetails(){
        return "Name = " + name + " Id = " + id + " Yearly Salary = " + getYearly();
    }
}
