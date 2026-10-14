// sub_08028AD4 at 0x08028AD4 (thumb)

undefined4 sub_08028AD4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082acbb8 + (uint)*(byte *)(param_1 + 0xe) * 4));
  sub_08025CE8(param_1);
  if ((1 < *(byte *)(param_1 + 0xe)) && (cVar1 = sub_08029248(param_1), cVar1 != '\0')) {
    sub_08028D58(param_1);
  }
  return in_lr;
}

