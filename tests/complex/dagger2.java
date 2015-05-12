import javax.inject.Singleton;
import dagger.*;

@Component(modules = {ApplicationModule.class})
@Singleton
interface ApplicationComponent {
	Tester getTester();
}

public class dagger2 {
    public static void main(String[] args) {
        ApplicationComponent component = Dagger_ApplicationComponent.create();
        System.out.println("hello");
   }
}
