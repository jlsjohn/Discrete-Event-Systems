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
	private StateSet statesToCompare = new StateSet();
	
	@FXML
	private TextField fieldIP;
	
	@FXML
	private TextField fieldPort;
	
	@FXML
	private Button btnSetConfig;
	
	@FXML
	private CheckBox checkPresence;

	@FXML
	private CheckBox checkCorridorLamp;
	
	@FXML
	private CheckBox checkLivingLamp;
	
	@FXML
	private CheckBox checkTestLamp;
	
	@FXML
	private CheckBox checkReadingLamp;
	
	@FXML
	private CheckBox checkRoomLamp;
	
	@FXML
	private CheckBox checkLRAC;
	
	@FXML
	private CheckBox checkRAC;
	
	@FXML
	private CheckBox checkTV;
	
	@FXML
	private CheckBox checkWindow;
	
	@FXML
	private Label labelPresence;

	@FXML
	private Label labelCorridorLamp;
	
	@FXML
	private Label labelLivingLamp;
	
	@FXML
	private Label labelTestLamp;
	
	@FXML
	private Label labelReadingLamp;
	
	@FXML
	private Label labelRoomLamp;
	
	@FXML
	private Label labelLRAC;
	
	@FXML
	private Label labelRAC;
	
	@FXML
	private Label labelTV;
	
	@FXML
	private Label labelWindow;
	
	@FXML
	private ImageView lamp1;
	
	@FXML
	private ImageView lamp2;
	
	@FXML
	private ImageView lamp3;
	
	@FXML
	private ImageView lampReading;
	
	@FXML
	private ImageView lampRoom;
	
	@FXML
	private ImageView airConditionerRoom;
	
	@FXML
	private ImageView airConditionerLivingRoom;
	
	@FXML
	private ImageView television;
	
	@FXML
	private ImageView window;
	
	@FXML
	private Label rule1;
	
	@FXML
	private Label rule2;
	
	@FXML
	private Label rule3;
	
	@FXML
	private Label rule4;
	
	@FXML
	private Label rule5;
	
	@FXML
	private Label rule6;
	
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
	
	@FXML
	private void turnRL(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_rl = 1;
		sendRequest(false);
	}
	
	@FXML
	private void turnL(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_l = 1;
		sendRequest(false);
	}
	
	@FXML
	private void turnTV(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_tv = 1;
		sendRequest(false);
	}
	
	@FXML
	private void turnWindow(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.do_open = 1;
		sendRequest(false);
	}
	
	@FXML
	private void turnRAC(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_rac = 1;
		sendRequest(false);
	}
	
	@FXML
	private void turnLAC(MouseEvent event) {
		statesToSend.resetStates();
		statesToSend.turn_on_lac = 1;
		sendRequest(false);
	}
	
	private void sendRequest(boolean check) {
		if (check) {
			updateSet();
		}
		updateRulesLabel();
		connection.setParameters(statesToSend.getParameters());
		connection.requestGET();
		statesMemory.updateStates(connection.getResponse());
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
		checkPresence.setSelected(false);
		checkCorridorLamp.setSelected(false);
		checkLivingLamp.setSelected(false);
		checkTestLamp.setSelected(false);
		checkReadingLamp.setSelected(false);
		checkRoomLamp.setSelected(false);
		checkLRAC.setSelected(false);
		checkRAC.setSelected(false);
		checkTV.setSelected(false);
		checkWindow.setSelected(false);
	}
	
	private void updateRulesLabel() {
		resetRulesLabel();
		if (statesToSend.turn_on_l1 == 1 || statesToSend.turn_on_l2 == 1) {
			rule1.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesToSend.turn_on_lac == 1 || statesToSend.turn_on_rac == 1) {
			rule2.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesToSend.turn_on_l == 1 || statesToSend.turn_on_rl == 1) {
			rule3.setTextFill(StateLabel.ON.getColor());
		}	
		
		if (statesToSend.turn_on_rl == 1 || statesToSend.turn_on_l3 == 1) {
			rule4.setTextFill(StateLabel.ON.getColor());
		}
	
		if (statesToSend.do_open == 1) {
			rule5.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesToSend.presence == 1) {
			rule6.setTextFill(StateLabel.ON.getColor());
		}
	}
	
	private void checkRuleChange() {
		if (statesToSend.turn_on_l1 != statesMemory.turn_on_l1 || statesToSend.turn_on_l2 != statesMemory.turn_on_l2) {
			rule1.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesToSend.turn_on_lac != statesMemory.turn_on_lac || statesToSend.turn_on_rac != statesMemory.turn_on_rac) {
			rule2.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesToSend.turn_on_l != statesMemory.turn_on_l) {
			rule3.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesToSend.turn_on_l3 != statesMemory.turn_on_l3) {
			rule4.setTextFill(StateLabel.ON.getColor());
		}
		
		if ((statesMemory.turn_on_lac == 0 && statesToCompare.turn_on_lac != 0) || (statesMemory.turn_on_rac == 0 && statesToCompare.turn_on_rac != 0)) {
			rule5.setTextFill(StateLabel.ON.getColor());
		}
	}
	
	private void resetRulesLabel() {
		rule1.setTextFill(StateLabel.OFF.getColor());
		rule2.setTextFill(StateLabel.OFF.getColor());
		rule3.setTextFill(StateLabel.OFF.getColor());
		rule4.setTextFill(StateLabel.OFF.getColor());
		rule5.setTextFill(StateLabel.OFF.getColor());
		rule6.setTextFill(StateLabel.OFF.getColor());
	}
	
	private void updateSet() {
		statesToSend.resetStates();
		
		if (checkPresence.isSelected()) {
			statesToSend.presence = 1;
		}
		if (checkCorridorLamp.isSelected()) {
			statesToSend.turn_on_l1 = 1;
		}
		if (checkLivingLamp.isSelected()) {
			statesToSend.turn_on_l2= 1;
		}		
		if (checkTestLamp.isSelected()) {
			statesToSend.turn_on_l3= 1;
		}
		if (checkReadingLamp.isSelected()) {
			statesToSend.turn_on_rl = 1;
		}
		if (checkRoomLamp.isSelected()) {
			statesToSend.turn_on_l = 1;
		}
		if (checkLRAC.isSelected()) {
			statesToSend.turn_on_lac= 1;
		}
		if (checkRAC.isSelected()) {
			statesToSend.turn_on_rac = 1;
		}
		if (checkTV.isSelected()) {
			statesToSend.turn_on_tv = 1;
		}
		if (checkWindow.isSelected()) {
			statesToSend.do_open = 1;
		}
	}
	
	private void updateLabels() {
		if (statesMemory.presence == 0) {
			labelPresence.setText(StateLabel.OFF.getLabel());
			labelPresence.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelPresence.setText(StateLabel.ON.getLabel());
			labelPresence.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_l1 == 0) {
			labelCorridorLamp.setText(StateLabel.OFF.getLabel());
			labelCorridorLamp.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelCorridorLamp.setText(StateLabel.ON.getLabel());
			labelCorridorLamp.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_l2 == 0) {
			labelLivingLamp.setText(StateLabel.OFF.getLabel());
			labelLivingLamp.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelLivingLamp.setText(StateLabel.ON.getLabel());
			labelLivingLamp.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_l3 == 0) {
			labelTestLamp.setText(StateLabel.OFF.getLabel());
			labelTestLamp.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelTestLamp.setText(StateLabel.ON.getLabel());
			labelTestLamp.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_rl == 0) {
			labelReadingLamp.setText(StateLabel.OFF.getLabel());
			labelReadingLamp.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelReadingLamp.setText(StateLabel.ON.getLabel());
			labelReadingLamp.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_l == 0) {
			labelRoomLamp.setText(StateLabel.OFF.getLabel());
			labelRoomLamp.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelRoomLamp.setText(StateLabel.ON.getLabel());
			labelRoomLamp.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_rac == 0) {
			labelRAC.setText(StateLabel.OFF.getLabel());
			labelRAC.setTextFill(StateLabel.OFF.getColor());
		} else if (statesMemory.turn_on_rac == 1){
			labelRAC.setText(StateLabel.WAIT.getLabel());
			labelRAC.setTextFill(StateLabel.WAIT.getColor());
		} else {
			labelRAC.setText(StateLabel.ON.getLabel());
			labelRAC.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_lac == 0) {
			labelLRAC.setText(StateLabel.OFF.getLabel());
			labelLRAC.setTextFill(StateLabel.OFF.getColor());
		} else if(statesMemory.turn_on_lac == 1) {
			labelLRAC.setText(StateLabel.WAIT.getLabel());
			labelLRAC.setTextFill(StateLabel.WAIT.getColor());
		} else {
			labelLRAC.setText(StateLabel.ON.getLabel());
			labelLRAC.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.turn_on_tv == 0) {
			labelTV.setText(StateLabel.OFF.getLabel());
			labelTV.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelTV.setText(StateLabel.ON.getLabel());
			labelTV.setTextFill(StateLabel.ON.getColor());
		}
		
		if (statesMemory.do_open == 0) {
			labelWindow.setText(StateLabel.OFF.getLabel());
			labelWindow.setTextFill(StateLabel.OFF.getColor());
		} else {
			labelWindow.setText(StateLabel.ON.getLabel());
			labelWindow.setTextFill(StateLabel.ON.getColor());
		}
		updateIcons();
	}
	
	private void updateIcons() {
		lamp1.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l1) + ".png"));
		
		lamp2.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l2) + ".png"));
		
		lamp3.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l3) + ".png"));

		lampRoom.setImage(new Image(ImagePath.LAMP.getPath() + String.valueOf(statesMemory.turn_on_l) + ".png"));
		
		lampReading.setImage(new Image(ImagePath.R_LAMP.getPath() + String.valueOf(statesMemory.turn_on_rl) + ".png"));
		
		television.setImage(new Image(ImagePath.TELEVISION.getPath() + String.valueOf(statesMemory.turn_on_tv) + ".png"));
		
		window.setImage(new Image(ImagePath.WINDOW.getPath() + String.valueOf(statesMemory.do_open) + ".png"));
		
		airConditionerRoom.setImage(new Image(ImagePath.AIR_CONDITIONER.getPath() + String.valueOf(statesMemory.turn_on_rac) + ".png"));
		
		airConditionerLivingRoom.setImage(new Image(ImagePath.AIR_CONDITIONER.getPath() + String.valueOf(statesMemory.turn_on_lac) + ".png"));
	}

	@Override
	public void initialize(URL location, ResourceBundle resources) {
		// TODO Auto-generated method stub
		
	}

}
