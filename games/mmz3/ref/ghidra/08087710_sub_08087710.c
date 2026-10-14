// sub_08087710 at 0x08087710 (thumb)

undefined4 sub_08087710(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08364f00);
    sub_08017700(param_1,0x6703);
    sub_080177F4(param_1);
    iVar2 = DAT_0202f5c0;
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar2 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar3 = iVar3 >> 8;
    iVar2 = iVar2 >> 8;
    iVar2 = sub_080FE124(iVar3 * iVar3 + iVar2 * iVar2);
    uVar4 = (uint)(iVar2 << 0x10) >> 8;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar2 * 6;
      *(int *)(param_1 + 0x60) = iVar3 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if ((sVar1 != 0) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    sub_08087568(param_1);
  }
  return in_lr;
}

