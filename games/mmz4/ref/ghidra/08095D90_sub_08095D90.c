// sub_08095D90 at 0x08095D90 (thumb)

undefined4 sub_08095D90(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb5) != '\0') && (*(char *)(param_1 + 0xb4) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08095FD8(param_1);
  }
  return in_lr;
}

