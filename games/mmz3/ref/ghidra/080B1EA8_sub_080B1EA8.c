// sub_080B1EA8 at 0x080B1EA8 (thumb)

undefined4 sub_080B1EA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe905);
  sub_080177F4(param_1);
  sub_08017BCC(param_1,*(char *)(param_1 + 0x11) + '\x05');
  *(undefined *)(param_1 + 0x25) = 9;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(uint *)(param_1 + 0x54) = ((uint)*(byte *)(param_1 + 0x11) * 0x20 + 8) * 0x100;
  *(undefined4 *)(param_1 + 0x58) = 0x7800;
  *(undefined *)(param_1 + 0x12) = *(undefined *)(iVar1 + 0xde9 + (uint)*(byte *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080B1D60(param_1);
  return in_lr;
}

