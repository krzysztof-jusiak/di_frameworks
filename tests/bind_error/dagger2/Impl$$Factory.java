import dagger.internal.Factory;
import javax.annotation.Generated;

@Generated("dagger.internal.codegen.ComponentProcessor")
public enum Impl$$Factory implements Factory<Impl> {
INSTANCE;

  @Override
  public Impl get() {  
    return new Impl();
  }

  public static Factory<Impl> create() {  
    return INSTANCE;
  }
}

