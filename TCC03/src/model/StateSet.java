package model;

import org.json.JSONObject;

public class StateSet {
	
	public int pres_user1;
	public int pres_user2;
	public int pres_user3;
	public int turn_on_l1;
	public int turn_on_l2;
	public int turn_on_l3;	
	public String getParameters() {
		String parameters = "?";
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
			System.out.print("pres_user1 = ");
			System.out.print(pres_user1);
			pres_user2 = jsonObject.getInt("has_pres_user2");
			pres_user3 = jsonObject.getInt("has_pres_user3");
			turn_on_l1 = jsonObject.getInt("is_on_l1");
			turn_on_l2 = jsonObject.getInt("is_on_l2");
			turn_on_l3 = jsonObject.getInt("is_on_l3");
			System.out.print("turn_on_l3 = ");
			System.out.print(turn_on_l3);

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public void resetStates() {
		pres_user1 = 0;
		pres_user2 = 0;
		pres_user3 = 0;
		turn_on_l1 = 0;
		turn_on_l2 = 0;
		turn_on_l3 = 0;
	}
	
}
