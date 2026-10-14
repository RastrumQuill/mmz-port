// sub_080E388C at 0x080E388C (thumb)

undefined4 sub_080E388C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080E3440();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

