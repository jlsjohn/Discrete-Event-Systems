package control;

import java.net.URL;
import java.util.ResourceBundle;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.AnchorPane;
import model.ImagePath;
import model.StateLabel;
import model.StateSet;

public class ViewController extends AnchorPane implements Initializable {
	private ServerConnection connection = new ServerConnection();
	private StateSet statesToSend = new StateSet();
	private StateSet statesMemory = new StateSet();
	@SuppressWarnings("unused")
	private StateSet statesToCompare = new StateSet();

	@FXML
	private TextField fieldIP;

	@FXML
	private TextField fieldPort;

	@FXML
	private Button btnSetConfig;
	
	@FXML
	private ImageView ImageDesliga;

	@FXML
	private ImageView ImageLamp1;
	
	@FXML
	private ImageView ImageLamp2;
	
	@FXML
	private ImageView ImageLamp3;
	
	@FXML
	private ImageView ImageInterruptor1;
	
	@FXML
	private ImageView ImageInterruptor2;
	
	@FXML
	private ImageView ImageInterruptor3;
	
	@FXML
	private ImageView ImagePC1;
	
	@FXML
	private ImageView ImagePC2;
	
	@FXML
	private ImageView ImagePC3;

	@FXML
	private ImageView ImageCondAr;

	@FXML
	private ImageView ImageAlarm;
	
	@FXML
	private ImageView ImageAlarmNumero;
	
	@FXML
	private ImageView ImageUsuario1;

	@FXML
	private ImageView ImageUsuario2;

	@FXML
	private ImageView ImageUsuario3;

	@FXML
	private Label rule1;

	@FXML
	private Label rule2;

	@FXML
	private Label rule3;

	@FXML
	private Label rule4;

	@FXML
	private void setConfiguration(ActionEvent event) {
		connection.configure(fieldIP.getText(), fieldPort.getText());
		setConfigurationVisuals(false);
	}

	@FXML
	private void sendAction(ActionEvent event) {
		sendRequest(true);
	}

	@FXML
	private void configure(ActionEvent event) {
		setConfigurationVisuals(true);
	}

	@FXML
	private void desliga_geral(MouseEvent event) {
		if(statesMemory.botaoGeral == 0) { 
			statesToSend.resetStates();
			statesToSend.botaoGeral = 1;
			statesToSend.alarme_sinal = 1;
		}
		else { 
			statesToSend.botaoGeral = 0;
			statesToSend.resetStates();
			statesToSend.alarme_final = 1;
		}
		sendRequest(false);
	}	

	@FXML
	private void usuario_pres_1(MouseEvent event) {
		if(statesMemory.tem_usuario1 == 0) { 
			statesToSend.resetStates();
			statesToSend.pres_usuario1 = 1;
		}
		else { 
			statesToSend.resetStates();
			statesToSend.pres_usuario1 = 0;
		}
		sendRequest(false);
	}

	@FXML
	private void usuario_pres_2(MouseEvent event) {
		if(statesMemory.tem_usuario2 == 0) { 
			statesToSend.resetStates();
			statesToSend.pres_usuario2 = 1;
		}
		else { 
			statesToSend.resetStates();
			statesToSend.pres_usuario2 = 0;
		}
		sendRequest(false);
	}

	@FXML
	private void usuario_pres_3(MouseEvent event) {
		if(statesMemory.tem_usuario3 == 0) { 
			statesToSend.resetStates();
			statesToSend.pres_usuario3 = 1;
		}
		else { 
			statesToSend.resetStates();
			statesToSend.pres_usuario3 = 0;
		}
		sendRequest(false);
	}

	@FXML
	private void ligaDesligaLP1(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.liga_lp1 = 1;
		sendRequest(false);
	}

	@FXML
	private void ligaDesligaLP2(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.liga_lp2 = 1;
		sendRequest(false);
	}

	@FXML
	private void ligaDesligaLP3(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.liga_lp3 = 1;
		sendRequest(false);
	}
	
	@FXML
	private void ligaDesligaPC1(MouseEvent event) {
		statesToSend.resetStates();
		if (statesMemory.estado_PC1 == 0)statesToSend.liga_PC1 = 1;
		else statesToSend.desliga_PC1 = 1;
		sendRequest(false);
	}

	@FXML
	private void ligaDesligaPC2(MouseEvent event) {
		statesToSend.resetStates();
		if (statesMemory.estado_PC2 == 0)statesToSend.liga_PC2 = 1;
		else statesToSend.desliga_PC2 = 1;
		sendRequest(false);
	}

	@FXML
	private void ligaDesligaPC3(MouseEvent event) {
		statesToSend.resetStates();
		if (statesMemory.estado_PC3 == 0)statesToSend.liga_PC3 = 1;
		else statesToSend.desliga_PC3 = 1;
		sendRequest(false);
	}
	
	@FXML
	private void desliga_ar(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.liga_desliga_ac = 1;
		sendRequest(false);
	}	
	
	@FXML
	private void liga_alarme(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.alarme_sinal = 1;
		sendRequest(false);
	}
	
	@FXML
	private void desliga_alarme(MouseEvent event) {
		if(event.isControlDown()) {
		statesToSend.resetStates();
		statesToSend.alarme_final = 1;
		sendRequest(false);
		}
	}

	private void sendRequest(boolean check) {
		if (check) {
			updateSet();
		}
		updateRulesLabel();
		statesToSend.printStates();
		connection.setParameters(statesToSend.getParameters());
		connection.requestGET();
		statesMemory.updateStates(connection.getResponse());
		statesMemory.updateStatesExtern(statesToSend.botaoGeral);
		updateLabels();
		statesToCompare = statesMemory;
	}

	private void setConfigurationVisuals(boolean isVisible) {
		fieldIP.setVisible(isVisible);
		fieldPort.setVisible(isVisible);
		btnSetConfig.setVisible(isVisible);
		fieldIP.setDisable(!isVisible);
		fieldPort.setDisable(!isVisible);
		btnSetConfig.setDisable(!isVisible);
	}

	private void updateRulesLabel() {
		resetRulesLabel();
		if (statesToSend.liga_lp1 == 1 || statesToSend.liga_lp2 == 1 || statesToSend.liga_lp3 == 1) {
			rule1.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.liga_lp1 == 1) {
			rule2.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.liga_lp2 == 1) {
			rule3.setTextFill(StateLabel.ON.getColor());
		}	

		if (statesToSend.liga_lp3 == 1) {
			rule4.setTextFill(StateLabel.ON.getColor());
		}
	}

	@SuppressWarnings("unused")
	private void checkRuleChange() {
		if (statesToSend.liga_lp1 != statesMemory.liga_lp1 || statesToSend.liga_lp2 != statesMemory.liga_lp2 || statesToSend.liga_lp3 != statesMemory.liga_lp3) {
			rule1.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.liga_lp1 != statesMemory.liga_lp1) {
			rule2.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.liga_lp2 != statesMemory.liga_lp2) {
			rule3.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.liga_lp3 != statesMemory.liga_lp3) {
			rule4.setTextFill(StateLabel.ON.getColor());
		}
	}

	private void resetRulesLabel() {
		rule1.setTextFill(StateLabel.OFF.getColor());
		rule2.setTextFill(StateLabel.OFF.getColor());
		rule3.setTextFill(StateLabel.OFF.getColor());
		rule4.setTextFill(StateLabel.OFF.getColor());
	}

	private void updateSet() {
		statesToSend.resetStates();
		statesToSend.resetPresence();
		statesToSend.resetButtons();
	}

	private void updateLabels() {
		updateIcons();
	}

	private void updateIcons() {
		ImageDesliga.setImage(new Image(ImagePath.BOTAO.getPath() + String.valueOf(statesMemory.botaoGeral) + ".png"));
		
		ImageLamp1.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.estado_lp1) + ".png"));
		ImageLamp2.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.estado_lp2) + ".png"));
		ImageLamp3.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.estado_lp3) + ".png"));

		ImageInterruptor1.setImage(new Image(ImagePath.BOTAO.getPath() + String.valueOf(statesMemory.estado_lp1) + ".png"));
		ImageInterruptor2.setImage(new Image(ImagePath.BOTAO.getPath() + String.valueOf(statesMemory.estado_lp2) + ".png"));
		ImageInterruptor3.setImage(new Image(ImagePath.BOTAO.getPath() + String.valueOf(statesMemory.estado_lp3) + ".png"));
		
		ImagePC1.setImage(new Image(ImagePath.PC.getPath() + String.valueOf(statesMemory.estado_PC1) + ".png"));
		ImagePC2.setImage(new Image(ImagePath.PC.getPath() + String.valueOf(statesMemory.estado_PC2) + ".png"));
		ImagePC3.setImage(new Image(ImagePath.PC.getPath() + String.valueOf(statesMemory.estado_PC3) + ".png"));
		
		ImageCondAr.setImage(new Image(ImagePath.COND_AR.getPath() + String.valueOf(statesMemory.estado_ac) + ".png"));
		
		ImageUsuario1.setImage(new Image(ImagePath.USER_PRES_MAN.getPath() + String.valueOf(statesMemory.tem_usuario1) + ".png"));
		ImageUsuario2.setImage(new Image(ImagePath.USER_PRES_MAN.getPath() + String.valueOf(statesMemory.tem_usuario2) + ".png"));
		ImageUsuario3.setImage(new Image(ImagePath.USER_PRES_MAN.getPath() + String.valueOf(statesMemory.tem_usuario3) + ".png"));
		
		if(returnBool(statesToSend.botaoGeral)) {
			ImageAlarm.setVisible(returnBool(statesToSend.botaoGeral));
			ImageAlarmNumero.setVisible(returnBool(statesToSend.botaoGeral));
		}
		else if(!returnBool(statesToSend.botaoGeral)) {
			ImageAlarm.setImage(new Image(ImagePath.ALERT.getPath() + ".gif"));
			ImageAlarmNumero.setImage(new Image(ImagePath.ALERT_NUM.getPath() + ".gif"));
			ImageAlarm.setVisible(false);
			ImageAlarmNumero.setVisible(false);
		}
	}
	
	public boolean returnBool(int estado) {
		boolean resposta = false;
		if(estado == 0) resposta = false;
		else if (estado == 1) resposta = true;
		return resposta;
	}

	@Override
	public void initialize(URL location, ResourceBundle resources) {
		// TODO Auto-generated method stub
	}
}