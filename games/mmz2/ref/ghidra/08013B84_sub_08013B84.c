// sub_08013B84 at 0x08013B84 (thumb)

undefined8 sub_08013B84(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = param_1[1];
  if (iVar2 < 0x6e001) {
    if ((*param_1 < 0xc8001) || (0xcafff < *param_1)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (*param_1 < 0xba001) {
    uVar1 = 2;
  }
  else if (iVar2 < 0x88001) {
    uVar1 = 3;
  }
  else if (iVar2 < 0xa4001) {
    uVar1 = 4;
  }
  else if (iVar2 < 0xae001) {
    uVar1 = 6;
  }
  else if (*param_1 < 0x133000) {
    uVar1 = 7;
  }
  else {
    uVar1 = 5;
  }
  return CONCAT44(in_lr,uVar1);
}

