// sub_080D9A74 at 0x080D9A74 (thumb)

undefined4 sub_080D9A74(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  sub_080D0894(2,&local_10);
  sub_080D9AB8(param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

