// sub_080C0264 at 0x080C0264 (thumb)

undefined4 sub_080C0264(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(uint *)(param_1 + 0xc0) =
         *(int *)(param_1 + 0x58) + (7 - (uint)*(byte *)(param_1 + 0x10)) * -0x2000;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x10) * '\n';
    if (*(char *)(param_1 + 0x10) == '\a') {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0xc1) = 0;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08348840;
      *(undefined2 *)(param_1 + 0x26) = 0x2401;
      *(undefined *)(param_1 + 0xbd) = 3;
      *(undefined *)(param_1 + 0xf) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xf) == '\0') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        if (*(char *)(param_1 + 0x10) != '\0') {
          sub_080127E4(param_1,0x1d02);
          sub_080128D4(param_1);
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        }
        sub_080032EC(0xf2);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        *(undefined **)(param_1 + 0x30) = &DAT_08348840;
        *(undefined2 *)(param_1 + 0x26) = 0x2401;
        *(undefined *)(param_1 + 0xbd) = 3;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + -0x300;
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 <= *(int *)(param_1 + 0xc0)) {
        if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
          sub_080127E4(param_1,0x1d13);
          sub_080128D4(param_1);
          uVar1 = 1;
        }
        else {
          uVar1 = 2;
        }
        *(undefined *)(param_1 + 0xbd) = uVar1;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

