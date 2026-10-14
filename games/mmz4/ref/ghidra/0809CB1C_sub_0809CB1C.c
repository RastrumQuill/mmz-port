// sub_0809CB1C at 0x0809CB1C (thumb)

undefined4 sub_0809CB1C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') || (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885df2c + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809CB64(param_1);
  }
  return in_lr;
}

