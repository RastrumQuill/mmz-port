// sub_0810931C at 0x0810931C (thumb)

undefined4 sub_0810931C(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (DAT_0202dc00 == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088693b8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

