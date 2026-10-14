// sub_08013AAC at 0x08013AAC (thumb)

undefined8 sub_08013AAC(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x17000) {
    uVar1 = 7;
  }
  else if (iVar2 < 0xe1000) {
    uVar1 = 0;
  }
  else if (((iVar2 - 0x10e001U < 0xefff) && (0x28000 < param_1[1])) && (param_1[1] < 0x3c000)) {
    uVar1 = 2;
  }
  else {
    iVar2 = *param_1;
    if (((iVar2 < 0xff000) && (param_1[1] < 0x3c000)) ||
       ((iVar2 < 0x13b000 && (param_1[1] < 0x32000)))) {
      uVar1 = 1;
    }
    else if (iVar2 < 0x18e000) {
      uVar1 = 3;
    }
    else {
      uVar1 = 6;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

