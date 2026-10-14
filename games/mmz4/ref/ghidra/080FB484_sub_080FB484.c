// sub_080FB484 at 0x080FB484 (thumb)

undefined4 sub_080FB484(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) == '\0') {
    sub_08002624(0xac);
  }
  else {
    sub_08002624(0x36);
    *(char *)(param_1 + 0xbd) = '\0';
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

