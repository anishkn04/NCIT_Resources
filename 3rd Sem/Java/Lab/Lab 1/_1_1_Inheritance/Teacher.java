public class Teacher extends Employee{
    int numOfSub;
    public Teacher(int id, String name, double monthlySalary, int numOfSub){
        super(id, name, monthlySalary);
        this.numOfSub = numOfSub;
    }
    @Override
    double getYearly(){
        return (monthlySalary + numOfSub*500)*12;
    }

    @Override
    String getDetails() {
        return super.getDetails() + " Number of Subjects = " + numOfSub;
    }
}
