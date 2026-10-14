// sub_0812272C at 0x0812272C (thumb)

void sub_0812272C(int param_1,uint param_2)

{
  int iVar1;
  
  param_2 = param_2 & 0xff;
  DAT_0203c780 = 1;
  iVar1 = param_2 * 0xc;
  (&DAT_0203c78e)[iVar1] = 1;
  (&DAT_0203c784)[param_2 * 3] = *(undefined4 *)(param_1 + 0x6308);
  (&DAT_0203c788)[param_2 * 3] = (uint)*(byte *)(param_1 + 0x6301);
  (&DAT_0203c78c)[iVar1] = (char)*(undefined2 *)(param_1 + 0x625c);
  (&DAT_0203c78d)[iVar1] = (char)*(undefined2 *)(param_1 + 0x625e);
  return;
}

