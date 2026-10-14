// sub_08092698 at 0x08092698 (thumb)

undefined4 sub_08092698(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  sub_080D0894(1,&local_14);
  sub_08002B10(0x2a);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DBA58(param_1,&local_14,&DAT_0885cf86,3);
  }
  else {
    sub_080DBAE4(param_1,&local_14,&DAT_0885cf86,3);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0802AAD4(3,param_1 + 0x54);
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

