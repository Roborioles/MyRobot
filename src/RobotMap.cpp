// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveBaseLeftMotor1;
std::shared_ptr<SpeedController> RobotMap::driveBaseLeftMotor2;
std::shared_ptr<SpeedController> RobotMap::driveBaseRightMotor1;
std::shared_ptr<SpeedController> RobotMap::driveBaseRightMotor2;
std::shared_ptr<RobotDrive> RobotMap::driveBaseRobotDrive;
std::shared_ptr<Solenoid> RobotMap::pneumaticShooterLeftShooter;
std::shared_ptr<Solenoid> RobotMap::pneumaticShooterMiddleShooter;
std::shared_ptr<Solenoid> RobotMap::pneumaticShooterRightShooter;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveBaseLeftMotor1.reset(new Jaguar(2));
    lw->AddActuator("DriveBase", "LeftMotor1", std::static_pointer_cast<Jaguar>(driveBaseLeftMotor1));
    
    driveBaseLeftMotor2.reset(new Jaguar(3));
    lw->AddActuator("DriveBase", "LeftMotor2", std::static_pointer_cast<Jaguar>(driveBaseLeftMotor2));
    
    driveBaseRightMotor1.reset(new Jaguar(0));
    lw->AddActuator("DriveBase", "RightMotor1", std::static_pointer_cast<Jaguar>(driveBaseRightMotor1));
    
    driveBaseRightMotor2.reset(new Jaguar(1));
    lw->AddActuator("DriveBase", "RightMotor2", std::static_pointer_cast<Jaguar>(driveBaseRightMotor2));
    
    driveBaseRobotDrive.reset(new RobotDrive(driveBaseLeftMotor1, driveBaseLeftMotor2,
              driveBaseRightMotor1, driveBaseRightMotor2));
    
    driveBaseRobotDrive->SetSafetyEnabled(true);
        driveBaseRobotDrive->SetExpiration(0.1);
        driveBaseRobotDrive->SetSensitivity(0.5);
        driveBaseRobotDrive->SetMaxOutput(1.0);

    pneumaticShooterLeftShooter.reset(new Solenoid(0, 0));
    lw->AddActuator("PneumaticShooter", "LeftShooter", pneumaticShooterLeftShooter);
    
    pneumaticShooterMiddleShooter.reset(new Solenoid(0, 1));
    lw->AddActuator("PneumaticShooter", "MiddleShooter", pneumaticShooterMiddleShooter);
    
    pneumaticShooterRightShooter.reset(new Solenoid(0, 2));
    lw->AddActuator("PneumaticShooter", "RightShooter", pneumaticShooterRightShooter);
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
