// sub_080C0CD0 at 0x080C0CD0 (thumb)

undefined4 sub_080C0CD0(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(byte *)(param_1 + 0x10) < 4) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x4000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = -0x4000;
    }
    *(int *)(param_1 + 0xc0) = iVar3 + iVar4;
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
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xf) == '\0') {
      if (*(byte *)(param_1 + 0x10) < 4) {
        iVar3 = *(int *)(param_1 + 0x58) + 0x300;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x58) + -0x300;
      }
      *(int *)(param_1 + 0x58) = iVar3;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0x12) = 0x10;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
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
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

