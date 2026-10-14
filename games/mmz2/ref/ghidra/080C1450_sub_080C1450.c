// sub_080C1450 at 0x080C1450 (thumb)

undefined4 sub_080C1450(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
      sub_080127E4(param_1,0x1d02);
      sub_080128D4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    else {
      sub_080032EC(0xf2);
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348840;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
    *(undefined *)(param_1 + 0xbd) = 3;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0x12) = 0x25;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0xc0)) {
      iVar3 = *(int *)(param_1 + 0x58) + 0x300;
      *(int *)(param_1 + 0x58) = iVar3;
      iVar4 = *(int *)(param_1 + 0xc0);
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
        sub_080127E4(param_1,0x1d13);
        sub_080128D4(param_1);
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(undefined *)(param_1 + 0xbd) = uVar2;
      *(undefined *)(param_1 + 0xd) = 0x18;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

