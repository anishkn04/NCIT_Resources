package com.example._5_1_fx;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class _5_2_javafxEvent extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        TextField t1 = new TextField();
        TextField t2 = new TextField();
        VBox root = new VBox(10);
        root.getChildren().addAll(t1, t2);
        Scene scene = new Scene(root, 200, 200);
        stage.setScene(scene);
        stage.show();
        scene.setOnMouseEntered(e->t1.setText("IN"));
        scene.setOnMouseExited(e->t1.setText("OUT"));
        scene.setOnMouseMoved(e->t2.setText("X: "+e.getX()+" Y: "+e.getY()));
    }

    public static void main(String[] args) {
        launch(args);
    }
}
