// sub_0803084C at 0x0803084C (thumb)

undefined4 sub_0803084C(int param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(short *)(param_1 + 0xc2) == 0x240) {
      uVar1 = 0x180;
    }
    else if (*(short *)(param_1 + 0xc2) == 0x280) {
      uVar1 = 0x1c0;
    }
    else {
      uVar1 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  pbVar2 = (byte *)(param_1 + 0xc9);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar2] * 4 + 0x2800
  ;
  *pbVar2 = *pbVar2 + 2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0xb8) + 0x1800 <= *(int *)(param_1 + 0x4c)) {
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0xb8) + 0xd800) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xd) = 6;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

