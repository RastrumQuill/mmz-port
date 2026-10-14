// sub_080DD93C at 0x080DD93C (thumb)

undefined4 sub_080DD93C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080DE178();
  if (*(char *)(iVar1 + 5) == '\0') {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c420 + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_080128D4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DDF34(param_1);
  }
  return in_lr;
}

