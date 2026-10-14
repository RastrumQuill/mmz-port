// sub_080C04B0 at 0x080C04B0 (thumb)

undefined4 sub_080C04B0(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xc0) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0xd0) + 0x54);
    if (*(char *)(param_1 + 0x10) == '\x03') {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0xc1) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080032EC(0xf2);
    }
    else {
      if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
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
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      sub_080128D4(param_1);
    }
  }
  else {
    sub_080128D4(param_1);
    if (*(byte *)(param_1 + 0x10) < 3) {
      iVar2 = *(int *)(param_1 + 0x54) + 0x300;
      *(int *)(param_1 + 0x54) = iVar2;
      if (*(int *)(param_1 + 0xc0) < iVar2) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0);
      }
    }
    else if (3 < *(byte *)(param_1 + 0x10)) {
      iVar2 = *(int *)(param_1 + 0x54) + -0x300;
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 < *(int *)(param_1 + 0xc0)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0);
      }
    }
    if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xc0)) {
      if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
        sub_080127E4(param_1,0x1d13);
        sub_080128D4(param_1);
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      *(undefined *)(param_1 + 0xbd) = uVar1;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

