// sub_0804B854 at 0x0804B854 (thumb)

undefined4 sub_0804B854(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa10c);
    sub_08006E08(param_1 + 0x74,&DAT_0833b2b0);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x3500;
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    }
    *(undefined *)(param_1 + 0xdc) = 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_08003338((int)*(short *)(param_1 + 0xc0));
    *(short *)(param_1 + 0xc0) = -1;
    sub_080032EC(0x66);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar4 = sub_0801E4D8(), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = sub_08008CFC();
  if (sVar2 != 0) {
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

