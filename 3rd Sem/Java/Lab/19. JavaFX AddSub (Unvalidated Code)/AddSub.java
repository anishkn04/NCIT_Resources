
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class AddSub extends Application {

    @Override
    public void start(Stage primaryStage) {
        TextField num1 = new TextField();
        TextField num2 = new TextField();
        Button addButton = new Button("Add");
        Button subButton = new Button("Subtract");
        Label resultLabel = new Label();

        addButton.setOnAction(e -> {
            double number1 = Double.parseDouble(num1.getText());
            double number2 = Double.parseDouble(num2.getText());
            double result = number1 + number2;
            resultLabel.setText("Result: " + result);
        });

        subButton.setOnAction(e -> {
            double number1 = Double.parseDouble(num1.getText());
            double number2 = Double.parseDouble(num2.getText());
            double result = number1 - number2;
            resultLabel.setText("Result: " + result);
        });

        VBox layout = new VBox(10);
        layout.setAlignment(Pos.CENTER);
        layout.getChildren().addAll(num1, num2, addButton, subButton, resultLabel);

        Scene scene = new Scene(layout, 300, 200);
        primaryStage.setScene(scene);
        primaryStage.setTitle("Add/Subtract App");
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}