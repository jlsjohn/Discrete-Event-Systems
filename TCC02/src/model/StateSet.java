package model;

import org.json.JSONObject;

public class StateSet {
	
	public int presence;
	public int turn_on_l1;
	public int turn_on_l2;
	public int turn_on_l3;
	public int turn_on_rl;
	public int turn_on_l;
	public int turn_on_rac;
	public int turn_on_lac;
	public int turn_on_tv;
	public int do_open;
	
	public String getParameters() {
		String parameters = "?";
		parameters += "presence=" + String.valueOf(presence) + "&";
		parameters += "turn_on_l1=" + String.valueOf(turn_on_l1) + "&";
		parameters += "turn_on_l2=" + String.valueOf(turn_on_l2) + "&";
		parameters += "turn_on_l3=" + String.valueOf(turn_on_l3) + "&";
		parameters += "turn_on_rl=" + String.valueOf(turn_on_rl) + "&";
		parameters += "turn_on_l=" + String.valueOf(turn_on_l) + "&";
		parameters += "turn_on_rac=" + String.valueOf(turn_on_rac) + "&";
		parameters += "turn_on_lac=" + String.valueOf(turn_on_lac) + "&";
		parameters += "turn_on_tv=" + String.valueOf(turn_on_tv) + "&";
		parameters += "do_open=" + String.valueOf(do_open);
		return parameters;
	}
	
	public void updateStates(String response){
		try {
			JSONObject jsonObject = new JSONObject(response);
			presence = jsonObject.getInt("has_presence");
			turn_on_l1 = jsonObject.getInt("is_on_l1");
			turn_on_l2 = jsonObject.getInt("is_on_l2");
			turn_on_l3 = jsonObject.getInt("is_on_l3");
			turn_on_rl = jsonObject.getInt("is_on_rl");
			turn_on_l = jsonObject.getInt("is_on_l");
			turn_on_rac = jsonObject.getInt("working_state_rac");
			turn_on_lac = jsonObject.getInt("working_state_lac");
			turn_on_tv = jsonObject.getInt("is_tv_on");
			do_open = jsonObject.getInt("is_w_opened");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public void resetStates() {
		presence = 0;
		turn_on_l1 = 0;
		turn_on_l2 = 0;
		turn_on_l3 = 0;
		turn_on_rl = 0;
		turn_on_l = 0;
		turn_on_rac = 0;
		turn_on_lac = 0;
		turn_on_tv = 0;
		do_open = 0;
	}
	
}
