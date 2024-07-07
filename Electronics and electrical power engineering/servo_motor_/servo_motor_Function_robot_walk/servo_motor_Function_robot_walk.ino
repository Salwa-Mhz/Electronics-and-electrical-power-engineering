import time
import Adafruit_PCA9685

# Initialize the PCA9685 module
pwm = Adafruit_PCA9685.PCA9685()
pwm.set_pwm_freq(60)

# Define the range for servo pulse lengths
servo_min = 150  # Minimum pulse length
servo_max = 600  # Maximum pulse length

# Function to set servo angle
def set_servo_angle(channel, angle):
    pulse_length = servo_min + (angle / 180.0) * (servo_max - servo_min)
    pwm.set_pwm(channel, 0, int(pulse_length))

# Function to move legs to create a single step
def step():
    # Move the right leg forward and the left leg backward
    set_servo_angle(0, 45)  # Right leg
    set_servo_angle(1, 135)  # Left leg
    time.sleep(1)

    # Move the right leg backward and the left leg forward
    set_servo_angle(0, 135)  # Right leg
    set_servo_angle(1, 45)  # Left leg
    time.sleep(1)


def walk(steps):
    for _ in range(steps):
        step()

# Call the walking algorithm to move the robot for a certain number of steps
walk(10)
