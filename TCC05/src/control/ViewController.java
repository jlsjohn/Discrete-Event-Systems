package control;

import java.net.URL;
import java.util.ResourceBundle;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
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
	private CheckBox checkDesliga;

	@FXML
	private CheckBox checkRoomAc;

	@FXML
	private CheckBox checkPresence1;

	@FXML
	private CheckBox checkPresence2;

	@FXML
	private CheckBox checkPresence3;

	@FXML
	private CheckBox checkRoomLamp1;

	@FXML
	private CheckBox checkRoomLamp2;

	@FXML
	private CheckBox checkRoomLamp3;

	@FXML
	private Label labelDesliga;	

	@FXML
	private Label labelRoomAc;	

	@FXML
	private Label labelPresence1;

	@FXML
	private Label labelPresence2;

	@FXML
	private Label labelPresence3;

	@FXML
	private Label labelRoomLamp1;

	@FXML
	private Label labelRoomLamp2;

	@FXML
	private Label labelRoomLamp3;

	@FXML
	private ImageView ImageDesliga;

	@FXML
	private ImageView ImageCondAr;

	@FXML
	private ImageView ImageUser1;

	@FXML
	private ImageView ImageUser2;

	@FXML
	private ImageView ImageUser3;

	@FXML
	private ImageView ImageLamp1;

	@FXML
	private ImageView ImageLamp2;

	@FXML
	private ImageView ImageLamp3;

	@FXML
	private ImageView ImageTouch1;

	@FXML
	private ImageView ImageTouch2;

	@FXML
	private ImageView ImageTouch3;

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
	private void Desliga_geral(MouseEvent event) {
		if(statesMemory.turn_off == 0) { 
			statesToSend.resetStates();
			statesToSend.turn_off = 1;
		}
		else { 
			statesToSend.turn_off = 0;
			statesToSend.resetStates();
		}
		sendRequest(false);
	}	

	@FXML
	private void Desliga_ar(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.toggle_ac1 = 1;
		sendRequest(false);
	}	

	@FXML
	private void user_pres_1(MouseEvent event) {
		if(statesMemory.pres_user1 == 0) { 
			statesToSend.resetStates();
			statesToSend.pres_user1 = 1;
		}
		else { 
			statesToSend.resetStates();
			statesToSend.pres_user1 = 0;
		}
		sendRequest(false);
	}

	@FXML
	private void user_pres_2(MouseEvent event) {
		if(statesMemory.pres_user2 == 0) { 
			statesToSend.resetStates();
			statesToSend.pres_user2 = 1;
		}
		else { 
			statesToSend.resetStates();
			statesToSend.pres_user2 = 0;
		}
		sendRequest(false);
	}

	@FXML
	private void user_pres_3(MouseEvent event) {
		if(statesMemory.pres_user3 == 0) { 
			statesToSend.resetStates();
			statesToSend.pres_user3 = 1;
		}
		else { 
			statesToSend.resetStates();
			statesToSend.pres_user3 = 0;
		}
		sendRequest(false);
	}

	@FXML
	private void turnL1(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_l1 = 1;
		sendRequest(false);
	}

	@FXML
	private void turnL2(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_l2 = 1;
		sendRequest(false);
	}

	@FXML
	private void turnL3(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_l3 = 1;
		sendRequest(false);
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
		statesMemory.updateStatesExtern(statesToSend.turn_off);
		updateLabels();
		//checkRuleChange();
		resetCheckBoxes();
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

	private void resetCheckBoxes() {
		checkDesliga.setSelected(false);
		checkRoomAc.setSelected(false);
		checkPresence1.setSelected(false);
		checkPresence2.setSelected(false);
		checkPresence3.setSelected(false);
		checkRoomLamp1.setSelected(false);
		checkRoomLamp2.setSelected(false);
		checkRoomLamp3.setSelected(false);
	}

	private void updateRulesLabel() {
		resetRulesLabel();
		if (statesToSend.turn_on_l1 == 1 || statesToSend.turn_on_l2 == 1 || statesToSend.turn_on_l3 == 1) {
			rule1.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.turn_on_l1 == 1) {
			rule2.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.turn_on_l2 == 1) {
			rule3.setTextFill(StateLabel.ON.getColor());
		}	

		if (statesToSend.turn_on_l3 == 1) {
			rule4.setTextFill(StateLabel.ON.getColor());
		}
	}

	@SuppressWarnings("unused")
	private void checkRuleChange() {
		if (statesToSend.turn_on_l1 != statesMemory.turn_on_l1 || statesToSend.turn_on_l2 != statesMemory.turn_on_l2 || statesToSend.turn_on_l3 != statesMemory.turn_on_l3) {
			rule1.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.turn_on_l1 != statesMemory.turn_on_l1) {
			rule2.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.turn_on_l2 != statesMemory.turn_on_l2) {
			rule3.setTextFill(StateLabel.ON.getColor());
		}

		if (statesToSend.turn_on_l3 != statesMemory.turn_on_l3) {
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

		if (checkDesliga.isSelected()) {
			statesToSend.turn_off = 1;
		}

		if (checkRoomAc.isSelected()) {
			statesToSend.toggle_ac1 = 1;
		}

		if (checkPresence1.isSelected()) {
			statesToSend.pres_user1 = 1;
		}		
		if (checkPresence2.isSelected()) {
			statesToSend.pres_user2 = 1;
		}		
		if (checkPresence3.isSelected()) {
			statesToSend.pres_user3 = 1;
		}

		if (checkRoomLamp1.isSelected()) {
			statesToSend.turn_on_l1 = 1;
		}
		if (checkRoomLamp2.isSelected()) {
			statesToSend.turn_on_l2= 1;
		}		
		if (checkRoomLamp3.isSelected()) {
			statesToSend.turn_on_l3= 1;
		}

	}

	private void updateLabels() {

		if (statesMemory.turn_off == 0) {
			labelDesliga.setText(StateLabel.OFF.getLabel());
			labelDesliga.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelDesliga.setText(StateLabel.ON.getLabel());
			labelDesliga.setTextFill(StateLabel.ON.getColor());
		}		

		if (statesMemory.toggle_ac1 == 0) {
			labelRoomAc.setText(StateLabel.OFF.getLabel());
			labelRoomAc.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelRoomAc.setText(StateLabel.ON.getLabel());
			labelRoomAc.setTextFill(StateLabel.ON.getColor());
		}	

		if (statesMemory.pres_user1 == 0) {
			labelPresence1.setText(StateLabel.OFF.getLabel());
			labelPresence1.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelPresence1.setText(StateLabel.ON.getLabel());
			labelPresence1.setTextFill(StateLabel.ON.getColor());
		}

		if (statesMemory.pres_user2 == 0) {
			labelPresence2.setText(StateLabel.OFF.getLabel());
			labelPresence2.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelPresence2.setText(StateLabel.ON.getLabel());
			labelPresence2.setTextFill(StateLabel.ON.getColor());
		}

		if (statesMemory.pres_user3 == 0) {
			labelPresence3.setText(StateLabel.OFF.getLabel());
			labelPresence3.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelPresence3.setText(StateLabel.ON.getLabel());
			labelPresence3.setTextFill(StateLabel.ON.getColor());
		}

		if (statesMemory.turn_on_l1 == 0) {
			labelRoomLamp1.setText(StateLabel.OFF.getLabel());
			labelRoomLamp1.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelRoomLamp1.setText(StateLabel.ON.getLabel());
			labelRoomLamp1.setTextFill(StateLabel.ON.getColor());
		}

		if (statesMemory.turn_on_l2 == 0) {
			labelRoomLamp2.setText(StateLabel.OFF.getLabel());
			labelRoomLamp2.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelRoomLamp2.setText(StateLabel.ON.getLabel());
			labelRoomLamp2.setTextFill(StateLabel.ON.getColor());
		}

		if (statesMemory.turn_on_l3 == 0) {
			labelRoomLamp3.setText(StateLabel.OFF.getLabel());
			labelRoomLamp3.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelRoomLamp3.setText(StateLabel.ON.getLabel());
			labelRoomLamp3.setTextFill(StateLabel.ON.getColor());
		}

		updateIcons();
	}

	private void updateIcons() {

		ImageDesliga.setImage(new Image(ImagePath.BUTTON.getPath() + String.valueOf(statesMemory.turn_off) + ".png"));

		ImageCondAr.setImage(new Image(ImagePath.COND_AR.getPath() + String.valueOf(statesMemory.toggle_ac1) + ".png"));

		ImageUser1.setImage(new Image(ImagePath.USER_PRES_MAN.getPath() + String.valueOf(statesMemory.pres_user1) + ".png"));

		ImageUser2.setImage(new Image(ImagePath.USER_PRES_MAN.getPath() + String.valueOf(statesMemory.pres_user2) + ".png"));

		ImageUser3.setImage(new Image(ImagePath.USER_PRES_MAN.getPath() + String.valueOf(statesMemory.pres_user3) + ".png"));

		ImageLamp1.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l1) + ".png"));

		ImageLamp2.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l2) + ".png"));

		ImageLamp3.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l3) + ".png"));

		ImageTouch1.setImage(new Image(ImagePath.BUTTON.getPath() + String.valueOf(statesMemory.turn_on_l1) + ".png"));

		ImageTouch2.setImage(new Image(ImagePath.BUTTON.getPath() + String.valueOf(statesMemory.turn_on_l2) + ".png"));

		ImageTouch3.setImage(new Image(ImagePath.BUTTON.getPath() + String.valueOf(statesMemory.turn_on_l3) + ".png"));
	}

	@Override
	public void initialize(URL location, ResourceBundle resources) {
		// TODO Auto-generated method stub
	}
}
