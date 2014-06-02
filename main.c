#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "extract.h"
#include "build.h"
#include "preview.h"

int main(int argc, char **argv){
	int error = 0;

	if (argc == 1){
		printf("\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
		printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		return 0;
	}
	if (argc > 5){
		if (((strcmp(argv[1], "extract") == 0) || (strcmp(argv[1], "build") == 0) || (strcmp(argv[1], "preview") == 0)) == 0){
			printf("\nInvalid argument: %s\n", argv[1]);
            printf("\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
            return 0;
		}
		printf("\nToo much arguments\n");
		printf("\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
        printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		return 0;
	}
	if (((strcmp(argv[1], "extract") == 0) || (strcmp(argv[1], "build") == 0) || (strcmp(argv[1], "preview") == 0)) == 0){
		printf("\nInvalid argument: %s \n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[1], argv[0], argv[0], argv[0]);
		printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		return 0;
	}
	if ((strcmp(argv[1], "extract") == 0) && argc == 4){
		error = extract(argv[2], argv[3]);
		if (error != 0){
			return error;
		}
	}
	else{
		if ((strcmp(argv[1], "extract") == 0) && argc < 4){
			printf("\nToo few arguments\n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		}
		if ((strcmp(argv[1], "extract") == 0) && argc > 4){
			printf("\nToo much arguments\n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		}
	}
	if ((strcmp(argv[1], "build") == 0) && argc == 4){
		error = build(argv[2], argv[3]);
		if (error != 0){
			return error;
		}
	}
	else{
        if ((strcmp(argv[1], "build") == 0) && argc < 4){
			printf("\nToo few arguments\n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		}
		if ((strcmp(argv[1], "build") == 0) && argc > 4){
			printf("\nToo much arguments\n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
		}
	}
	if ((strcmp(argv[1], "preview") == 0) && argc == 5){
        error = preview(argv[2], argv[3], argv[4]);
        if (error !=0 ){
            return error;
        }
	}
	else{
        if ((strcmp(argv[1], "preview") == 0) && argc < 5){
            printf("\nToo few arguments\n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
        }
        if ((strcmp(argv[1], "preview") == 0) && argc > 5){
            printf("\nToo much arguments\n\n%s extract <imgdata file> <output folder>\n%s build <input folder> <output folder>\n%s preview [option] <extracted images> <output folder>\n", argv[0], argv[0], argv[0]);
            printf("\npreview options: locked-boot\n\t\t unlocked-boot\n\t\t charger\n\t\t fastboot-start\n\t\t fastboot-bootloader\n\t\t fastboot-recovery\n\t\t fastboot-poweroff\n\t\t oem-unlock-yes\n\t\t oem-unlock-no\n\t\t downloadmode\n\t\t all\n");
        }
	}
	return 0;
}
