// sub_080D2F98 at 0x080D2F98 (thumb)

undefined4 sub_080D2F98(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x22) = 1;
  sub_0801CC9C(param_1);
  sub_0801CF00(param_1,0x904);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D2FDC(param_1);
  return in_lr;
}

