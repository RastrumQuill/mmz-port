// sub_080BE22C at 0x080BE22C (thumb)

undefined4 sub_080BE22C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08128884(param_1,*(undefined4 *)(&DAT_088618a8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (cVar1 == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088618ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

