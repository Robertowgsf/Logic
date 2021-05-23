import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Application {
    public static void main(String[] args) throws IOException {
        System.out.println("Esse programa irá ler o seno de um ângulo e calcular seu cosseno.");
        System.out.println("Digite o valor do seno.");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        var seno = Double.parseDouble(br.readLine());
        var cosseno = Math.sqrt(1 - Math.pow(seno, 2));
        System.out.println("O valor do cosseno é: " + cosseno);
    }
}
