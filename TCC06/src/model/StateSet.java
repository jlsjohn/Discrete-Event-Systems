package model;

import org.json.JSONObject;
import java.lang.String;

public class StateSet {	
	
	// Sinais de Entrada
	public int botaoGeral;
	public int liga_lp1;
	public int liga_lp2;
	public int liga_lp3;
	public int pres_usuario1;
	public int pres_usuario2;
	public int pres_usuario3;
	public int liga_PC1;
	public int desliga_PC1;
	public int liga_PC2;
	public int desliga_PC2;
	public int liga_PC3;
	public int desliga_PC3;
	public int liga_desliga_ac;
	public int alarme_sinal;
	public int alarme_final;
	
	//Sinais de Saída
	public int estado_lp1;
	public int estado_lp2;
	public int estado_lp3;
	public int estado_PC1;
	public int estado_PC2;
	public int estado_PC3;
	public int estado_ac;
	public int estado_al;
	public int tem_usuario1;
	public int tem_usuario2;
	public int tem_usuario3;

	public String getParameters() {
		String parameters = "?";
		parameters += "botaoGeral=" + String.valueOf(botaoGeral) + "&";
		parameters += "liga_lp1=" + String.valueOf(liga_lp1) + "&";
		parameters += "liga_lp2=" + String.valueOf(liga_lp2) + "&";
		parameters += "liga_lp3=" + String.valueOf(liga_lp3) + "&";
		parameters += "pres_usuario1=" + String.valueOf(pres_usuario1) + "&";
		parameters += "pres_usuario2=" + String.valueOf(pres_usuario2) + "&";
		parameters += "pres_usuario3=" + String.valueOf(pres_usuario3) + "&";
		parameters += "liga_PC1=" + String.valueOf(liga_PC1) + "&";
		parameters += "desliga_PC1=" + String.valueOf(desliga_PC1) + "&";
		parameters += "liga_PC2=" + String.valueOf(liga_PC2) + "&";
		parameters += "desliga_PC2=" + String.valueOf(desliga_PC2) + "&";
		parameters += "liga_PC3=" + String.valueOf(liga_PC3) + "&";
		parameters += "desliga_PC3=" + String.valueOf(desliga_PC3) + "&";
		parameters += "liga_desliga_ac=" + String.valueOf(liga_desliga_ac) + "&";
		parameters += "alarme_sinal=" + String.valueOf(alarme_sinal) + "&";
		parameters += "alarme_final=" + String.valueOf(alarme_final) + "&";
		return parameters;
	}

	public void updateStates(String response){
		try {
			JSONObject jsonObject = new JSONObject(response);
			estado_lp1 = jsonObject.getInt("estado_lp1");
			estado_lp2 = jsonObject.getInt("estado_lp2");
			estado_lp3 = jsonObject.getInt("estado_lp3");
			estado_PC1 = jsonObject.getInt("estado_PC1");
			estado_PC2 = jsonObject.getInt("estado_PC2");
			estado_PC3 = jsonObject.getInt("estado_PC3");
			estado_ac = jsonObject.getInt("estado_ac");
			estado_al = jsonObject.getInt("estado_al");
			tem_usuario1 = jsonObject.getInt("tem_usuario1");
			tem_usuario2 = jsonObject.getInt("tem_usuario2");
			tem_usuario3 = jsonObject.getInt("tem_usuario3");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void updateStatesExtern(int botao_Geral){
		botaoGeral = botao_Geral;
	}

	public void resetStates() {
		liga_lp1 = 0;
		liga_lp2 = 0;
		liga_lp3 = 0;
		liga_PC1 = 0;
		desliga_PC1 = 0;
		liga_PC2 = 0;
		desliga_PC2 = 0;
		liga_PC3 = 0;
		desliga_PC3 = 0;
		liga_desliga_ac = 0;
		alarme_sinal = 0;
		alarme_final = 0;
	}
	
	public void resetButtons() {
		botaoGeral = 0;
	}

	public void resetPresence() {
		pres_usuario1 = 0;
		pres_usuario2 = 0;
		pres_usuario3 = 0;
	}

	public void printStates() {
		System.out.printf("botaoGeral = %d \n", botaoGeral);
		System.out.printf("liga_lp1 = %d \n", liga_lp1);
		System.out.printf("liga_lp2 = %d \n", liga_lp2);
		System.out.printf("liga_lp3 = %d \n", liga_lp3);
		System.out.printf("pres_usuario1 = %d \n", pres_usuario1);
		System.out.printf("pres_usuario2 = %d \n", pres_usuario2);
		System.out.printf("pres_usuario3 = %d \n", pres_usuario3);
		System.out.printf("liga_PC1 = %d \n", liga_PC1);
		System.out.printf("desliga_PC1 = %d \n", desliga_PC1);
		System.out.printf("liga_PC2 = %d \n", liga_PC2);
		System.out.printf("desliga_PC2 = %d \n", desliga_PC2);
		System.out.printf("liga_PC3 = %d \n", liga_PC3);
		System.out.printf("desliga_PC3 = %d \n", desliga_PC3);		
		System.out.printf("liga_desliga_ac = %d \n", liga_desliga_ac);
		System.out.printf("alarme_sinal = %d \n", alarme_sinal);
		System.out.printf("alarme_final = %d \n", alarme_final);
	}
}