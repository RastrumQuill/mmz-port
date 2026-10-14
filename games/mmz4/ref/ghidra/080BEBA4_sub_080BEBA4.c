// sub_080BEBA4 at 0x080BEBA4 (thumb)

undefined4 sub_080BEBA4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08128884(param_1,*(undefined4 *)(&DAT_088619c0 + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  if (cVar1 == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088619d0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

