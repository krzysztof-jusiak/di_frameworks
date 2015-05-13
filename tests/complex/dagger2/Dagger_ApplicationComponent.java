import dagger.internal.ScopedProvider;
import javax.annotation.Generated;
import javax.inject.Provider;

@Generated("dagger.internal.codegen.ComponentProcessor")
public final class Dagger_ApplicationComponent implements ApplicationComponent {
  private Provider<Tester> provideTesterProvider;

  private Dagger_ApplicationComponent(Builder builder) {  
    assert builder != null;
    initialize(builder);
  }

  public static Builder builder() {  
    return new Builder();
  }

  public static ApplicationComponent create() {  
    return builder().build();
  }

  private void initialize(final Builder builder) {  
    this.provideTesterProvider = ScopedProvider.create(ApplicationModule$$ProvideTesterFactory.create(builder.applicationModule));
  }

  @Override
  public Tester getTester() {  
    return provideTesterProvider.get();
  }

  public static final class Builder {
    private ApplicationModule applicationModule;
  
    private Builder() {  
    }
  
    public ApplicationComponent build() {  
      if (applicationModule == null) {
        this.applicationModule = new ApplicationModule();
      }
      return new Dagger_ApplicationComponent(this);
    }
  
    public Builder applicationModule(ApplicationModule applicationModule) {  
      if (applicationModule == null) {
        throw new NullPointerException("applicationModule");
      }
      this.applicationModule = applicationModule;
      return this;
    }
  }
}

