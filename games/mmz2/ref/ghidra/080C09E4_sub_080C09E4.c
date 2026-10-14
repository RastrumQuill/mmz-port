// sub_080C09E4 at 0x080C09E4 (thumb)

undefined4 sub_080C09E4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = *(int *)(param_1 + 0x28);
    if ((byte)(*(char *)(param_1 + 0x10) - 3U) < 2) {
      sub_080127E4(param_1,0x1d02);
      sub_080128D4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08348840;
      *(undefined2 *)(param_1 + 0x26) = 0x2401;
      *(undefined *)(param_1 + 0xbd) = 3;
      *(undefined *)(iVar3 + 0xc1) = 0;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) + -0x4000;
      sub_080032EC(0xf2);
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
    }
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0xc0)) {
      iVar3 = *(int *)(param_1 + 0x54) + -0x300;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar2 = *(int *)(param_1 + 0xc0);
      if (iVar3 < iVar2) {
        *(int *)(param_1 + 0x54) = iVar2;
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if ((byte)(*(char *)(param_1 + 0x10) - 3U) < 2) {
        sub_080127E4(param_1,0x1d13);
        sub_080128D4(param_1);
        *(undefined *)(param_1 + 0xbd) = 1;
      }
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

