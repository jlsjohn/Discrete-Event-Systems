package model;

import javafx.scene.paint.Paint;

public enum StateLabel {
	
	ON("ON", "#4ae716"), OFF("OFF", "#000000"), WAIT("WAIT", "#eeff03");
	
	private String label;
	private Paint color;
	
	StateLabel(String label, String color) {
		this.label = label;
		this.color = Paint.valueOf(color);
	}
	
	public String getLabel(){
		return this.label;
	}
	
	public Paint getColor() {
		return this.color;
	}

}
