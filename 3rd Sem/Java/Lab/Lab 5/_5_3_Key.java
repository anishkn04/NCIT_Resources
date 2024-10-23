package com.example._5_1_fx;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

public class _5_3_Key extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        TextField t1 = new TextField();
        TextField t2 = new TextField();
        HBox root = new HBox(10);
        root.getChildren().addAll(t1, t2);
        Scene scene = new Scene(root, 400, 200);
        stage.setScene(scene);
        stage.show();
        t1.setOnKeyPressed(e->{
            int keyCode = e.getCode().getCode();
            t2.setText("Keycode: "+keyCode );
            t1.setText("");
        });
    }

    public static void main(String[] args) {
        launch(args);
    }
}
