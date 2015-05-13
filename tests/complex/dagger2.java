import javax.inject.Singleton;
import dagger.*;

//@Component(modules = {ApplicationModule.class})
//@Singleton
//interface ApplicationComponent {
	//Tester getTester();
//}
//
//
//

interface Tester {
	void gogo();
}

class TesterImpl implements Tester {

	private int i;
	@Override
	public void gogo() {
		i = 1;
	}
}

@Module
class ApplicationModule {
	@Provides
	@Singleton
	Tester provideTester() {
		return new TesterImpl();
	}
}

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
