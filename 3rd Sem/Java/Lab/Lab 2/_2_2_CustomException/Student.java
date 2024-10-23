public class Student {
    int sem;
    String name;
    public Student(int sem, String name) throws SemException {
        if(sem>8 || sem<1){
            throw new SemException("Invalid Sem");
        }
        this.sem = sem;
        this.name = name;
    }
}
