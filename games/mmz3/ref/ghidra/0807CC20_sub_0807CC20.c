// sub_0807CC20 at 0x0807CC20 (thumb)

undefined4 sub_0807CC20(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0807CA94();
  if (cVar1 == '\0') {
    sub_0807CAE4(param_1);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364320 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836433c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

