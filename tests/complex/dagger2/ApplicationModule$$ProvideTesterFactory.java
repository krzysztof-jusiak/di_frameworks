import dagger.internal.Factory;
import javax.annotation.Generated;

@Generated("dagger.internal.codegen.ComponentProcessor")
public final class ApplicationModule$$ProvideTesterFactory implements Factory<Tester> {
  private final ApplicationModule module;

  public ApplicationModule$$ProvideTesterFactory(ApplicationModule module) {  
    assert module != null;
    this.module = module;
  }

  @Override
  public Tester get() {  
    Tester provided = module.provideTester();
    if (provided == null) {
      throw new NullPointerException("Cannot return null from a non-@Nullable @Provides method");
    }
    return provided;
  }

  public static Factory<Tester> create(ApplicationModule module) {  
    return new ApplicationModule$$ProvideTesterFactory(module);
  }
}

