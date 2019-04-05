package model;

public enum ImagePath {

	LAMP("file:src/view/assets/lamp_"), 
	WINDOW("file:src/view/assets/window_"),
	R_LAMP("file:src/view/assets/r_lamp_"),
	AIR_CONDITIONER("file:src/view/assets/air_conditioner_"),
	TELEVISION("file:src/view/assets/television_");

	private String path;
	
	ImagePath(String path){
		this.path = path;
	}
	
	public String getPath() {
		return path;
	}
}
