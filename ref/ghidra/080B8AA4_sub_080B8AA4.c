// sub_080B8AA4 at 0x080B8AA4 (thumb)

undefined4 sub_080B8AA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 9) * 4;
  sub_080033DC(param_1 + 0x6c,*(undefined4 *)(&DAT_085bc000 + iVar1));
  sub_08001FCC(param_1 + 0x2c,*(undefined4 *)(&DAT_08594000 + iVar1),param_1 + 0x4c);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | *(char *)(param_1 + 0x1e) << 4;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xbf | 8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return in_lr;
}

