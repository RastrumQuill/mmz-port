// sub_08041240 at 0x08041240 (thumb)

undefined4 sub_08041240(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x67);
    sub_08007390(param_1 + 0x74,&DAT_0835e6bc);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    uVar1 = sub_080FE124(0x100);
    iVar3 = (uVar1 & 0xffff) * -0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    iVar3 = *(int *)(param_1 + 0xbc) + -0x6000;
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0xbc) + 0x6000;
    }
    iVar3 = iVar3 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar3;
    uVar2 = FUN_080fe2f8(iVar3,uVar1 & 0xffff);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    sub_08017700(param_1,0xa41a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((0xd000 < (*(int *)(param_1 + 0xbc) - iVar4) + 0x6800U) || (0 < *(int *)(param_1 + 0x60))) {
    iVar4 = *(int *)(param_1 + 0xbc);
    iVar3 = iVar4 + -0x6800;
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = iVar4 + 0x6800;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x71) != '\x06') {
    sub_080177F4(param_1);
  }
  return in_lr;
}

