// sub_080C07C4 at 0x080C07C4 (thumb)

undefined4 sub_080C07C4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 == '\x05') {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      if ((cVar1 == '\0') || (cVar1 == '\a')) {
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
        sub_080032EC(0xf2);
      }
      else {
        sub_080127E4(param_1,0x1d02);
        sub_080128D4(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        *(undefined **)(param_1 + 0x30) = &DAT_08348840;
        *(undefined2 *)(param_1 + 0x26) = 0x2401;
        *(undefined *)(param_1 + 0xbd) = 3;
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) + -0x4000;
      }
      *(undefined *)(param_1 + 0x12) = 0x24;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      sub_080128D4(param_1);
    }
  }
  else {
    sub_080128D4(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + -0x300;
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0xc0)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
        sub_080127E4(param_1,0x1d13);
        sub_080128D4(param_1);
        *(undefined *)(param_1 + 0xbd) = 1;
      }
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

