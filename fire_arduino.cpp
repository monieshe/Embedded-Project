// Fire Extinguisher Robot
// Flame Sensor + L298N + Relay

#define FLAME_SENSOR 2

// Motor A
#define IN1 8
#define IN2 9

// Motor B
#define IN3 10
#define IN4 11

// Relay for Water Pump
#define PUMP 7

void setup()
{
    pinMode(FLAME_SENSOR, INPUT);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    pinMode(PUMP, OUTPUT);

    digitalWrite(PUMP, LOW);

    Serial.begin(9600);
}

void loop()
{
    int flame = digitalRead(FLAME_SENSOR);

    Serial.print("Flame Status: ");
    Serial.println(flame);

    if (flame == LOW)   // Flame detected
    {
        Serial.println("Fire Detected!");

        moveForward();
        delay(1500);

        stopRobot();

        Serial.println("Activating Pump...");
        digitalWrite(PUMP, HIGH);
        delay(5000);

        digitalWrite(PUMP, LOW);

        stopRobot();
    }
    else
    {
        Serial.println("No Fire");
        stopRobot();
    }

    delay(100);
}

// Move Forward
void moveForward()
{
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

// Stop Robot
void stopRobot()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}
