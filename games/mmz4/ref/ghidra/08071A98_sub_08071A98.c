// sub_08071A98 at 0x08071A98 (thumb)

undefined4 sub_08071A98(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined auStack_40 [4];
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined *apuStack_30 [4];
  undefined *local_20;
  undefined *local_1c;
  
  sub_08128B5C(auStack_40,&DAT_08129269,3);
  sub_08128B5C(auStack_3c,&DAT_0812926c,3);
  sub_08128B5C(auStack_38,&DAT_0812926f,3);
  sub_08128B5C(auStack_34,&DAT_0812926f,3);
  apuStack_30[3] = auStack_3c;
  local_20 = auStack_38;
  local_1c = auStack_34;
  sub_08128B5C(apuStack_30,apuStack_30 + 3,0xc);
  iVar1 = sub_08073D4C(apuStack_30[*(byte *)(param_1 + 0xc3)],3);
  *(undefined *)(param_1 + 0xe) = auStack_40[iVar1];
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

