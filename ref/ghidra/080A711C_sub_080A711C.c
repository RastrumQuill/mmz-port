// sub_080A711C at 0x080A711C (thumb)

undefined4 sub_080A711C(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EE8((int)*(short *)(param_1 + 0xc4));
  *(short *)(param_1 + 0xc4) = -1;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  DAT_02004f80 = DAT_02004f80 & 0xbfff;
  DAT_02004f8e = DAT_02004f8e | 0xfe;
  return in_lr;
}

