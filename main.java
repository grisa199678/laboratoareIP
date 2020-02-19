import java.util.ArrayList;
import java.util.List;

class main {
    public static void main(String args[]) {
        List<IWorker> myWorkers = new ArrayList<IWorker>();
        myWorkers.add(new Designer());

        myWorkers.add(new Programmer());
        myWorkers.add(new Programmer());
        myWorkers.add(new Programmer());

        myWorkers.add(new Tester());
        myWorkers.add(new Tester());

        myWorkers.add(new Integrator());

        myWorkers.add(new Senior());

        myWorkers.add(new ProgrammerInternship());
        myWorkers.add(new ProgrammerInternship());


        for(IWorker worker : myWorkers) {
            worker.work();
        }
    }
}
