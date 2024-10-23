class Address {
    int ward;
    String address, province;

    public Address(String province, String address, int ward) {
        this.province = province;
        this.address = address;
        this.ward = ward;
    }

    @Override
    public String toString() {
        return "Province: " + province + " Address: " + address + " Ward: " + ward;
    }
}

class Student {
    String name;
    int roll;
    Address add;

    public Student(String name, int roll, Address add) {
        this.name = name;
        this.roll = roll;
        this.add = add;
    }

    public String toString() {
        return "Name: " + name + " Roll: " + roll + "\nAddress: \n" + add;
    }
}

public class Main {
    public static void main(String[] args) {
        Address add = new Address("Bagmati", "Balkumari", 13);
        Student stu = new Student("Anish", 8, add);
        System.out.println(stu);
    }
}
