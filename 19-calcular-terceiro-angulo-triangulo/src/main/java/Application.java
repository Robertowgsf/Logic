import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Application {
    public static void main(String[] args) throws IOException {
        System.out.println("Esse programa irá ler o valor de dois ângulos de um triângulo e calcular o terceiro.");
        System.out.println("Digite o valor do primeiro ângulo.");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        var primeiroAngulo = Double.parseDouble(br.readLine());
        System.out.println("Digite o valor do segundo ângulo.");
        var segundoAngulo = Double.parseDouble(br.readLine());
        var terceiroAngulo = 180 - (primeiroAngulo + segundoAngulo);

        if (terceiroAngulo < 1) {
            System.out.println("Ângulos inválidos.");
            return;
        }

        System.out.println("O valor do terceiro ângulo é: " + terceiroAngulo);
    }
}
