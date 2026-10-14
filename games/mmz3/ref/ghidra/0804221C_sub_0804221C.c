// sub_0804221C at 0x0804221C (thumb)

undefined4 sub_0804221C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x6d);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xa41f);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + 0x800;
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 200);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar2 = (iVar2 + -0x2800) - *(int *)(param_1 + 0xcc);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar1 = iVar1 >> 8;
    iVar2 = iVar2 >> 8;
    iVar1 = sub_080FE124(iVar1 * iVar1 + iVar2 * iVar2);
    uVar3 = (uint)(iVar1 << 0x10) >> 8;
    iVar1 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar3);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar3);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar1 = iVar1 * 0x580;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    iVar2 = iVar2 * 0x580;
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
  iVar2 = *(int *)(param_1 + 0xbc) + 0x6000;
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x54) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xbc) + -0x6000;
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
  iVar2 = (*(int *)(param_1 + 0xc0) + 0x800) - iVar1;
  if ((iVar2 < 0) && (0 < *(int *)(param_1 + 0x60))) {
    *(int *)(param_1 + 0x58) = iVar1 + iVar2;
  }
  sub_080177F4(param_1);
  if ((iVar2 < 0) && (0 < *(int *)(param_1 + 0x60))) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

