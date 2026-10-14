// sub_080DC59C at 0x080DC59C (thumb)

undefined4 sub_080DC59C(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080DC99C();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DC7CC(param_1);
  }
  else {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c048 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0) && (sVar2 = sub_080DCA40(param_1), sVar2 != 0))
    {
      sub_080DCB20(param_1);
      sub_080128D4(param_1);
    }
  }
  return in_lr;
}

