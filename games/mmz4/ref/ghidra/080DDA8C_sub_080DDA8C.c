// sub_080DDA8C at 0x080DDA8C (thumb)

undefined4 sub_080DDA8C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0xe00;
  sub_080D4898(&local_18,&DAT_0885d4dc,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_0885d4f8,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

