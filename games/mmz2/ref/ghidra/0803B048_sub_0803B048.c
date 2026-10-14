// sub_0803B048 at 0x0803B048 (thumb)

undefined4 sub_0803B048(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08337b3c + (uint)*(byte *)(param_1 + 0x10) * 4));
  if (*(char *)(param_1 + 0xc) == '\x02') {
    sub_0803B280(param_1);
  }
  return in_lr;
}

