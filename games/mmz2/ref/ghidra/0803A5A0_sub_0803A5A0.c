// sub_0803A5A0 at 0x0803A5A0 (thumb)

undefined4 sub_0803A5A0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xc) & 0xffff00) == 0x20000) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0x17f);
    if (cVar1 == '8') {
      return in_lr;
    }
    if (cVar1 == '7') {
      *(undefined *)(param_1 + 0x13) = 9;
      sub_0803A9C0(param_1,7,2,0);
      sub_0803A578(param_1);
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

