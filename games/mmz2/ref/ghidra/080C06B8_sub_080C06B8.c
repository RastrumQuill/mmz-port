// sub_080C06B8 at 0x080C06B8 (thumb)

undefined4 sub_080C06B8(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((byte)(*(char *)(param_1 + 0x10) - 2U) < 3) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\a') {
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
        sub_080032EC(0xf2);
      }
      else {
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) + -0x2000;
        if (*(char *)(param_1 + 0x10) != '\0') {
          sub_080127E4(param_1,0x1d02);
          sub_080128D4(param_1);
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        }
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        *(undefined **)(param_1 + 0x30) = &DAT_08348840;
        *(undefined2 *)(param_1 + 0x26) = 0x2401;
        *(undefined *)(param_1 + 0xbd) = 3;
      }
      *(undefined *)(param_1 + 0x12) = 0x1a;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      sub_080128D4(param_1);
    }
  }
  else {
    sub_080128D4(param_1);
    if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0xc0)) {
      iVar3 = *(int *)(param_1 + 0x54) + -0x300;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar4 = *(int *)(param_1 + 0xc0);
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x54) = iVar4;
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if (*(char *)(param_1 + 0x10) != '\a') {
        if (*(char *)(param_1 + 0x10) == '\0') {
          uVar2 = 2;
        }
        else {
          sub_080127E4(param_1,0x1d13);
          sub_080128D4(param_1);
          uVar2 = 1;
        }
        *(undefined *)(param_1 + 0xbd) = uVar2;
      }
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

