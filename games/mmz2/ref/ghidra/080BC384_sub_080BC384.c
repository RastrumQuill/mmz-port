// sub_080BC384 at 0x080BC384 (thumb)

undefined4 sub_080BC384(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = *(undefined *)(iVar3 + 0x10);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08347388 + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  uVar4 = uVar1 * 0x80 >> 0x17;
  *(uint *)(param_1 + 0x5c) = uVar4;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -(uVar1 * 0x40 >> 0x16);
  if (*(char *)(param_1 + 0x7d) != '\0') {
    *(uint *)(param_1 + 0x5c) = -uVar4;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) + '@';
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BC354(param_1);
  return in_lr;
}

