// sub_080FA060 at 0x080FA060 (thumb)

undefined4 sub_080FA060(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  sub_0801CFF0();
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x800;
  sub_080D4898(&local_18,&DAT_0886724c,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_08867268,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_08867284,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_088672a0,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  sub_0802AB70(0,0xff,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

