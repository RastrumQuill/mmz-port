// sub_0803EDA4 at 0x0803EDA4 (thumb)

undefined4 sub_0803EDA4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08339f14 + (uint)bVar1 * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar4 = (uint)bVar1 * 4;
  sub_08006DE4(param_1 + 0x74,*(undefined4 *)(&DAT_0833a0a4 + iVar4),param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803f521;
  *(undefined *)(param_1 + 0x13) = 0;
  iVar3 = (int)*(short *)(&DAT_08339f26 + iVar4);
  sVar2 = *(short *)(&DAT_08339f28 + iVar4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  *(int *)(param_1 + 0x60) = (int)sVar2;
  sub_0803EE58(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}

