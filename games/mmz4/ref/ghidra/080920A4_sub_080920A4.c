// sub_080920A4 at 0x080920A4 (thumb)

undefined4 sub_080920A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08091FA0();
  if (cVar1 == '\0') {
    sub_08091FF4(param_1);
    cVar1 = sub_08091FF0(param_1);
    if (cVar1 == '\0') {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885cec0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885cedc + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}

