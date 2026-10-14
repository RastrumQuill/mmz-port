// sub_080F6958 at 0x080F6958 (thumb)

undefined4 sub_080F6958(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080F6DF8(param_1);
  }
  return in_lr;
}

