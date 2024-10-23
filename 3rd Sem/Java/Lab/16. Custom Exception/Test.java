class SemException extends Exception {
    public SemException(String msg) {
        super(msg);
    }
}

class Student {
    int sem;
    String name;

    public Student(int sem, String name) throws SemException {
        if (sem > 8 || sem < 1) {
            throw new SemException("Invalid Sem");
        }
        this.sem = sem;
        this.name = name;
    }
}

public class Test {
    public static void main(String[] args) {
        try{
            Student S1 = new Student(12, "Nishan");
            System.out.println(S1.name + " studies in Sem: " + S1.sem);
        }catch (SemException e){
            System.out.println(e.getMessage());
        }
    }
}
