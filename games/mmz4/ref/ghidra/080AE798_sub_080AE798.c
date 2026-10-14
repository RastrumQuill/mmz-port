// sub_080AE798 at 0x080AE798 (thumb)

undefined4 sub_080AE798(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xd7);
  *pcVar1 = *pcVar1 + '\x01';
  if ((*(char *)(param_1 + 0xd) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885fb48 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AE7F4(param_1);
  }
  return in_lr;
}

