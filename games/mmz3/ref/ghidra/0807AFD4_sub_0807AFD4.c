// sub_0807AFD4 at 0x0807AFD4 (thumb)

undefined4 sub_0807AFD4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0807AF00();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363fb0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363fc0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

