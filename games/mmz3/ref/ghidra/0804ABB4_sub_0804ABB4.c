// sub_0804ABB4 at 0x0804ABB4 (thumb)

undefined4 sub_0804ABB4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x60);
    sub_08017700(param_1,0xa736);
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 200);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar1 = (*(int *)(param_1 + 0x58) + -0x3000) - *(int *)(param_1 + 0xcc);
    *(int *)(param_1 + 0x60) = iVar1;
    iVar2 = iVar2 >> 8;
    iVar1 = iVar1 >> 8;
    iVar1 = sub_080FE124(iVar2 * iVar2 + iVar1 * iVar1);
    uVar3 = (uint)(iVar1 << 0x10) >> 8;
    iVar1 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar3);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar3);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar1 = iVar1 * 0x480;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    iVar2 = iVar2 * 0x480;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar2 = *(int *)(param_1 + 0xb4) + 0x5000;
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x54) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4) + -0x5000;
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar1 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x2000);
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    }
  }
  else {
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar1);
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

