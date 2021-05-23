import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Application {
    public static void main(String[] args) throws IOException {
        System.out.println("Esse programa irá ler uma palavra e informar a letra na posição especificada.");
        System.out.println("Digite uma palavra:");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        var palavra = br.readLine();
        System.out.println("Digite a posição, a partir de 0, da letra desejada:");
        var posicao = Integer.parseInt(br.readLine());
        var letra = palavra.charAt(posicao);
        System.out.println("A letra nessa posição é \"" + letra + "\"");
    }
}
