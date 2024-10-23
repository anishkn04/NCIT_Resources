package com.example._5_1_fx;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class test extends Application {
    public void start (Stage stage) throws Exception{
        BorderPane root = new BorderPane();
        MenuBar bar = new MenuBar();
        Menu File = new Menu("File");
        Menu Edit = new Menu("Edit");
        MenuItem one = new MenuItem("One");
        MenuItem two = new MenuItem("Two");
        bar.getMenus().addAll(File, Edit);
        File.getItems().addAll(one);
        Edit.getItems().addAll(two);
        root.setTop(bar);
        Label l = new Label();
        one.setOnAction(e->l.setText(one.getText()));
        two.setOnAction(e->l.setText(two.getText()));
        root.setCenter(l);
        Scene scene = new Scene(root, 300, 200);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
