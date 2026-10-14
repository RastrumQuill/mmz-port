// sub_080AFA24 at 0x080AFA24 (thumb)

undefined4 sub_080AFA24(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((bVar1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar4;
  sub_08012580(param_1);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08345d50 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08345d58 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080AFB0C(param_1);
  return in_lr;
}

