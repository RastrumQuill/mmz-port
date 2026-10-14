// sub_0803DC30 at 0x0803DC30 (thumb)

undefined4 sub_0803DC30(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x5502);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08339d54,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803e411;
  *(undefined *)(param_1 + 0x13) = 0;
  iVar6 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar2 & 1;
  if (bVar1 == 4) {
    uVar5 = (uint)((bVar2 & 1) == 0);
  }
  if (uVar5 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  iVar3 = -1;
  if (uVar5 != 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x5c) = iVar3 * 0x580;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar4 = (uint)bVar1 * 4;
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar6 + 0x54) + *(short *)(&DAT_08335a8e + iVar4) * iVar3 + iVar3 * -0x580;
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + (int)*(short *)(&DAT_08335a90 + iVar4);
  sub_080032EC(0x1a);
  *(undefined *)(param_1 + 0xd) = 1;
  sub_0803DDF4(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}

