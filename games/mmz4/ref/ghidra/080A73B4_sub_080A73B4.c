// sub_080A73B4 at 0x080A73B4 (thumb)

undefined4 sub_080A73B4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0xe00;
  sub_080D4898(&local_18,&DAT_0885f130,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_0885f14c,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_0885f168,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_0885f184,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  sub_0802AB70(4,0x20,param_1 + 0x54);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

