// sub_080F6E30 at 0x080F6E30 (thumb)

undefined4 sub_080F6E30(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb5);
    *pcVar1 = *pcVar1 + -1;
  }
  sub_080F6EF8(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

