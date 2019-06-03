package model;

import org.json.JSONObject;
import java.lang.String;

public class StateSet {	
	public int turn_off;
	public int pres_user1;
	public int pres_user2;
	public int pres_user3;
	public int turn_on_l1;
	public int turn_on_l2;
	public int turn_on_l3;
	
public String getParameters() {
	String parameters = "?";

	parameters += "turn_off=" + String.valueOf(turn_off) + "&";
	parameters += "pres_user1=" + String.valueOf(pres_user1) + "&";
	parameters += "pres_user2=" + String.valueOf(pres_user2) + "&";
	parameters += "pres_user3=" + String.valueOf(pres_user3) + "&";
	parameters += "turn_on_l1=" + String.valueOf(turn_on_l1) + "&";
	parameters += "turn_on_l2=" + String.valueOf(turn_on_l2) + "&";
	parameters += "turn_on_l3=" + String.valueOf(turn_on_l3) + "&";
	return parameters;
}
	
public void updateStates(String response){
	try {
		JSONObject jsonObject = new JSONObject(response);
		pres_user1 = jsonObject.getInt("has_pres_user1");
		pres_user2 = jsonObject.getInt("has_pres_user2");
		pres_user3 = jsonObject.getInt("has_pres_user3");
		turn_on_l1 = jsonObject.getInt("is_on_l1");
		turn_on_l2 = jsonObject.getInt("is_on_l2");
		turn_on_l3 = jsonObject.getInt("is_on_l3");

	} catch (Exception e) {
		e.printStackTrace();
	}
}

public void updateStatesAux(int turnOf){
	turn_off = turnOf;
}
	
public void resetStates() {
	turn_off = 0;
	turn_on_l1 = 0;
	turn_on_l2 = 0;
	turn_on_l3 = 0;
	
}

public void resetStatesPresence() {
	pres_user1 = 0;
	pres_user2 = 0;
	pres_user3 = 0;
}

public void printStates() {
	System.out.printf("turnOf = %d \n", turn_off);
	System.out.printf("pres_user1 = %d \n", pres_user1);
	System.out.printf("pres_user2 = %d \n", pres_user2);
	System.out.printf("pres_user3 = %d \n", pres_user3);
	System.out.printf("turn_on_l1 = %d \n", turn_on_l1);
	System.out.printf("turn_on_l2 = %d \n", turn_on_l2);
	System.out.printf("turn_on_l3 = %d \n", turn_on_l3);

}
}