package model;

public enum ImagePath {
	
	USER_PRES_MAN("file:src/view/assets/user_pres_man_"),
	USER_PRES_WOM("file:src/view/assets/user_pres_wom_"),
	COND_AR("file:src/view/assets/condicionadorAr_"),
	LAMP("file:src/view/assets/lamp_"),
	BUTTON("file:src/view/assets/botão_");

	private String path;
	
	ImagePath(String path){
		this.path = path;
	}
	
	public String getPath() {
		return path;
	}
}
