// sub_080B7E64 at 0x080B7E64 (thumb)

undefined4 sub_080B7E64(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080B8170(param_1,*(undefined4 *)(param_1 + 0xd0));
  if (cVar1 == '\0') {
    sub_080B81B8(param_1);
    sub_080B7CAC(param_1);
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b83dc + (uint)*(byte *)(param_1 + 0xe) * 4));
  }
  return in_lr;
}

