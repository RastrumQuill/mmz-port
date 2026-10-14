// sub_080724BC at 0x080724BC (thumb)

undefined4 sub_080724BC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    if (*(char *)(iVar4 + 0xc) != '\x04') {
      return in_lr;
    }
  }
  else if (((*(char *)(param_1 + 0xb4) == '\0') && (*(char *)(iVar4 + 0xd) != '\x1d')) &&
          ((((*(uint *)(iVar4 + 0x8c) & 0x200) == 0 && (*(short *)(iVar4 + 0xa4) != 0)) ||
           ((DAT_0202ec38 & 0x10) != 0)))) {
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08072590(param_1);
  return in_lr;
}

