// sub_08084110 at 0x08084110 (thumb)

undefined8 sub_08084110(int param_1,short param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\b') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  param_3 = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      cVar1 = sub_08083FD8(param_3);
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
        uVar3 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x10) == '\0') {
          sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
          if ((sVar2 == 0) &&
             (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000
                                  ), sVar2 == 0)) {
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined *)(param_1 + 0xbc) = 0;
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
            *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
          }
          else {
            *(undefined *)(param_1 + 0xd) = 10;
          }
        }
        else if (*(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0x54) ==
                 (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
          *(undefined *)(param_1 + 0xd) = 5;
          *(undefined *)(param_1 + 0xbf) = 9;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 9;
        }
        uVar3 = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xd;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

