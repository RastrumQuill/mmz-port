// sub_08090660 at 0x08090660 (thumb)

undefined4 sub_08090660(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  sub_08002B10(0x3f);
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + 0x1000;
  sub_080D4898(&local_18,&DAT_0885cbdc,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_0885cbf8,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(&local_18,&DAT_0885cc14,0,*(byte *)(param_1 + 10) & 0x10);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

