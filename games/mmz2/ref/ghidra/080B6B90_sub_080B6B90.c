// sub_080B6B90 at 0x080B6B90 (thumb)

undefined4 sub_080B6B90(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08346e2c + (uint)*(byte *)(param_1 + 0x11) * 2));
  sub_080128D4(param_1);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = 0x200 - (uVar2 * 0x40 >> 0x16);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar2 * 2 >> 0x11 & 7) + 0xc) * -0x40;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + *(int *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B6984(param_1);
  return in_lr;
}

