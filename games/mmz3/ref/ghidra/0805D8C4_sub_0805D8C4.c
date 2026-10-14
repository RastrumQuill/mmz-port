// sub_0805D8C4 at 0x0805D8C4 (thumb)

undefined4 sub_0805D8C4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0805D6CC();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836182c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836188c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

