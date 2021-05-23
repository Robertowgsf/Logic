import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Locale;

public class Application {
    public static void main(String[] args) throws IOException {
        System.out.println("Esse programa irá ler uma letra minúscula e mostrá-la maiúscula.");
        System.out.println("Digite uma letra.");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        var letra = br.readLine();
        var letraMaiuscula = letra.toUpperCase(Locale.ROOT);
        System.out.println("A letra em maiúsculo é: " + letraMaiuscula);
    }
}
