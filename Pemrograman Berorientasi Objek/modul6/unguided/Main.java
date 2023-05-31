public class Main {
    public static void main(String[] args) {

        // test abstract class Employee
        Employee testEmployee = new SalariedEmployee();
        testEmployee.cetakInformasi();
        System.out.println();

        // Project Planner
        ProjectPlanner projectPlanner1 = new ProjectPlanner();
        projectPlanner1.cetakInformasi();
        System.out.println();

        ProjectPlanner projectPlanner2 = new ProjectPlanner("Project Planner 2", "123456789", 1000000, 0.1, 1000000);
        projectPlanner2.cetakInformasi();
        System.out.println();

        // Commission Employee
        CommissionEmployee commissionEmployee = new CommissionEmployee();
        commissionEmployee.cetakInformasi();
        System.out.println();

        CommissionEmployee commissionEmployee2 = new CommissionEmployee("Commission Employee 2", "123456789", 1000000,
                0.1, 1000000);
        commissionEmployee2.cetakInformasi();
        System.out.println();

        // Salaried Employee
        SalariedEmployee salariedEmployee = new SalariedEmployee();
        salariedEmployee.cetakInformasi();
        System.out.println();

        SalariedEmployee salariedEmployee2 = new SalariedEmployee("Salaried Employee 2", "123456789", 1000000);
        salariedEmployee2.cetakInformasi();
        System.out.println();
    }
}
