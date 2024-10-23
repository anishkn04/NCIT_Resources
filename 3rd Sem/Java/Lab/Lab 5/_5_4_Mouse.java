package com.example._5_1_fx;

import javafx.application.Application;
import javafx.event.EventHandler;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.input.MouseEvent;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class _5_4_Mouse extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        Group root = new Group();
        Circle circle = new Circle();
        circle.setFill(Color.RED);
        circle.setRadius(10);
        root.getChildren().addAll(circle);
        Scene scene  = new Scene(root, 300, 200, Color.BLACK);
        stage.setScene(scene);
        stage.show();
        scene.setOnMouseClicked(new EventHandler<MouseEvent>() {
            @Override
            public void handle(MouseEvent mouseEvent) {
                circle.setCenterX(mouseEvent.getX());
                circle.setCenterY(mouseEvent.getY());
            }
        });
    }

    public static void main(String[] args) {
        launch(args);
    }
}
