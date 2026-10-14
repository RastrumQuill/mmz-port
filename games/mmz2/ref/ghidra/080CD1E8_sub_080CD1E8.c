// sub_080CD1E8 at 0x080CD1E8 (thumb)

undefined8 sub_080CD1E8(int param_1,short param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (param_3 < 0) {
      pcVar4 = (char *)(param_1 + 0xbc);
      if (*pcVar4 == '\0') {
        sub_080032EC(0x42);
        *pcVar4 = '\x01';
      }
      cVar1 = sub_080CCFA4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (cVar1 == '\0') {
        param_3 = *(int *)(param_1 + 0x54) + param_3;
        *(int *)(param_1 + 0x54) = param_3;
        cVar1 = sub_080CD02C(param_3,*(undefined4 *)(param_1 + 0x58));
        if (cVar1 == '\0') {
          iVar2 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xff);
          *(int *)(param_1 + 0x54) = iVar2 + -0x17ff;
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined4 *)(param_1 + 0x68) = 0;
          *pcVar4 = '\0';
        }
        else {
          cVar1 = sub_080CCFA4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          if (cVar1 == '\0') {
            cVar1 = sub_080CCFA4(*(int *)(param_1 + 0x54) + -0x1000,*(undefined4 *)(param_1 + 0x58))
            ;
            if (cVar1 == '\0') goto LAB_080cd354;
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined4 *)(param_1 + 100) = 0xffffff80;
            sub_080032EC(0x42);
            *pcVar4 = '\0';
          }
          else {
            iVar2 = sub_080CD06C(param_1);
            *(int *)(param_1 + 0x54) = iVar2 + 0x1800;
            *pcVar4 = '\0';
          }
        }
      }
      else {
        *pcVar4 = '\0';
      }
    }
    else if (param_3 < 1) {
LAB_080cd354:
      if (param_2 != 0) {
        uVar3 = 1;
        goto LAB_080cd368;
      }
      *(undefined *)(param_1 + 0xbc) = 0;
    }
    else {
      pcVar4 = (char *)(param_1 + 0xbc);
      if (*pcVar4 == '\0') {
        sub_080032EC(0x42);
        *pcVar4 = '\x01';
      }
      cVar1 = sub_080CCFE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (cVar1 == '\0') {
        param_3 = *(int *)(param_1 + 0x54) + param_3;
        *(int *)(param_1 + 0x54) = param_3;
        cVar1 = sub_080CD02C(param_3,*(undefined4 *)(param_1 + 0x58));
        if (cVar1 == '\0') {
          iVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xff);
          *(int *)(param_1 + 0x54) = iVar2 + 0x1800;
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined4 *)(param_1 + 0x68) = 0;
          *pcVar4 = '\0';
        }
        else {
          cVar1 = sub_080CCFE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          if (cVar1 == '\0') {
            cVar1 = sub_080CCFE8(*(int *)(param_1 + 0x54) + 0x1000,*(undefined4 *)(param_1 + 0x58));
            if (cVar1 == '\0') goto LAB_080cd354;
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined4 *)(param_1 + 100) = 0x80;
            sub_080032EC(0x42);
            *pcVar4 = '\0';
          }
          else {
            iVar2 = sub_080CD0D8(param_1);
            *(int *)(param_1 + 0x54) = iVar2 + -0x17ff;
            *pcVar4 = '\0';
          }
        }
      }
      else {
        *pcVar4 = '\0';
      }
    }
  }
  uVar3 = 0;
LAB_080cd368:
  return CONCAT44(in_lr,uVar3);
}

