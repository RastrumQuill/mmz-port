// sub_080E1008 at 0x080E1008 (thumb)

undefined4 sub_080E1008(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x78) != 0) {
    **(byte **)(param_1 + 0x74) = **(byte **)(param_1 + 0x74) ^ *(byte *)(param_1 + 0x78);
    sub_080D0894(3,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

