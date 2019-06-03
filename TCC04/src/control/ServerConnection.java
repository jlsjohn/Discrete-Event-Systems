package control;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;

public class ServerConnection {
	
	private String serverIP;
	private String serverPort;
	private String serverURL;
	private String response;
	
	public ServerConnection() {
		serverIP = "127.0.0.1"; //default IP
		serverPort = "8082";	//default Port
		resetURL();
	}
	
	public String requestGET() {
		StringBuilder response = new StringBuilder();
		try {
			URL url = new URL(serverURL);
			HttpURLConnection connection = (HttpURLConnection) url.openConnection();
			connection.setRequestMethod("GET");
			BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()));
			String line;
			while ((line = reader.readLine()) != null) {
				response.append(line);
			}
			reader.close();
		} catch (MalformedURLException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
		
		this.response = response.toString();
		return this.response;
	}
	
	private void resetURL() {
		serverURL = "http://" + serverIP + ":" + serverPort +"/";
	}
	
	public void setParameters(String parameters) {
		resetURL();
		serverURL = serverURL + parameters;
		//serverURL = serverURL + "update";
		System.out.println(serverURL);
	}
	
	public void configure(String serverIP, String serverPort) {
		this.serverIP = serverIP;
		this.serverPort = serverPort;
		resetURL();
	}
	
	public String getResponse() {
		return response;
	}

}
