// sub_080CF2B0 at 0x080CF2B0 (thumb)

undefined4 sub_080CF2B0(int param_1)

{
  sbyte sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0x11);
  iVar4 = *(int *)(iVar3 + 0xb8) + 0x8fff;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0x340;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if (((int)(uint)*(byte *)(iVar3 + 0xce) >> sVar1 & 1U) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CF3B4(param_1);
  }
  else if (iVar4 <= iVar2) {
    *(byte *)(iVar3 + 0xcf) = (byte)(1 << sVar1) | *(byte *)(iVar3 + 0xcf);
    *(int *)(param_1 + 0x58) = iVar4;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

