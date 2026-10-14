// sub_080BE2A4 at 0x080BE2A4 (thumb)

undefined4 sub_080BE2A4(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x200b);
    uVar4 = 0xfffffd80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  uVar1 = sub_08007C7C(iVar2,*(undefined4 *)(param_1 + 0x58));
  if ((uVar1 == 0) || ((uVar1 & 0x8000) != 0)) {
    uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar3 < 0x1001) {
      return in_lr;
    }
  }
  else {
    sub_080D0894(3,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

