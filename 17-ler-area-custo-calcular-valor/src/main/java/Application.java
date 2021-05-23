import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigDecimal;

public class Application {
    public static void main(String[] args) throws IOException {
        System.out.println("Esse programa irá ler a área de uma casa e o valor de cada metro quadrado e irá calcular o valor total da área.");
        System.out.println("Digite o valor da área em metros quadrados.");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        var area = new BigDecimal(br.readLine());
        System.out.println("Digite o valor de cada metro quadrado.");
        var valorMetro = new BigDecimal(br.readLine());
        var valorTotal = area.multiply(valorMetro);
        System.out.println("O valor total da área é de: " + valorTotal);
    }
}
