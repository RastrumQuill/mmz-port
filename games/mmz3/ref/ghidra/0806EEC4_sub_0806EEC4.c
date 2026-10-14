// sub_0806EEC4 at 0x0806EEC4 (thumb)

undefined4 sub_0806EEC4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar4 = (uint *)(*(int *)(param_1 + 0x28) + 0xb4);
      *puVar4 = *puVar4 & ~(1 << *(sbyte *)(param_1 + 0x11));
    }
    puVar2 = &DAT_083630ac;
    if (1 < *(byte *)(param_1 + 0x10)) {
      puVar2 = &DAT_083630c4;
    }
    sub_08007390(param_1 + 0x74,puVar2);
    sub_08017700(param_1,*(undefined2 *)(&DAT_083630f0 + (uint)*(byte *)(param_1 + 0x10) * 2));
    iVar1 = DAT_0202f5c0;
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar1 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar1;
    iVar3 = iVar3 >> 8;
    iVar1 = iVar1 >> 8;
    iVar1 = sub_080FE124(iVar3 * iVar3 + iVar1 * iVar1);
    uVar5 = (uint)(iVar1 << 0x10) >> 8;
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar1 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar5);
      *(int *)(param_1 + 0x5c) = iVar1;
      iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar5);
      *(int *)(param_1 + 0x5c) = iVar1 * 6;
      *(int *)(param_1 + 0x60) = iVar3 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar1 = sub_08009F80(iVar1,*(undefined4 *)(param_1 + 0x58));
    if (0 < iVar1) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
      goto LAB_0806f002;
    }
  }
  else {
    iVar1 = sub_08009E14(iVar1,*(undefined4 *)(param_1 + 0x58));
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
      goto LAB_0806f002;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    if (*(int *)(param_1 + 0x60) < 1) {
      iVar1 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),iVar1);
      if (iVar1 < 1) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      return in_lr;
    }
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar1);
    if (-1 < iVar1) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_0806f002:
  sub_0806F024(param_1);
  return in_lr;
}

