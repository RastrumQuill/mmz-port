// sub_080E7DCC at 0x080E7DCC (thumb)

undefined4 sub_080E7DCC(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0835e530 + (uint)*(byte *)(param_1 + 2) * 4));
  sub_08002824(param_1 + 0xee0,(DAT_02000f96 & 0x1f00) << 3,0x1000);
  return in_lr;
}

