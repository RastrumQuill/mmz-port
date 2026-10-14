// sub_080D3898 at 0x080D3898 (thumb)

undefined4 sub_080D3898(int param_1)

{
  undefined4 in_lr;
  
  DAT_02002410 = DAT_02002410 | 0x4000;
  DAT_0200241d = 4;
  DAT_0200241e = DAT_0200241e | 0xfe;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080D03B8();
  return in_lr;
}

