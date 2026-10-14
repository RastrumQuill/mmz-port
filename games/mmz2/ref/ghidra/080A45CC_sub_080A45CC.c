// sub_080A45CC at 0x080A45CC (thumb)

undefined4 sub_080A45CC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x01') || (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08344be8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A4614(param_1);
  }
  return in_lr;
}

