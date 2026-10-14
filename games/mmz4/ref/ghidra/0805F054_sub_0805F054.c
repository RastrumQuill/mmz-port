// sub_0805F054 at 0x0805F054 (thumb)

undefined8 sub_0805F054(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_58 [4];
  undefined auStack_54 [4];
  undefined auStack_50 [4];
  int aiStack_4c [3];
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined **appuStack_34 [4];
  undefined **local_24;
  undefined **local_20;
  
  sub_08128B5C(auStack_58,&DAT_081290e8,2);
  sub_08128B5C(auStack_54,&DAT_081290ea,2);
  sub_08128B5C(auStack_50,&DAT_081290ec,2);
  local_40 = auStack_58;
  local_3c = auStack_54;
  local_38 = auStack_50;
  sub_08128B5C(aiStack_4c,&local_40,0xc);
  sub_08128B5C(&local_40,&DAT_081290ee,2);
  sub_08128B5C(&local_3c,&DAT_081290f0,2);
  sub_08128B5C(&local_38,&DAT_081290f2,2);
  appuStack_34[3] = &local_40;
  local_24 = &local_3c;
  local_20 = &local_38;
  sub_08128B5C(appuStack_34,appuStack_34 + 3,0xc);
  iVar1 = sub_0805F118(param_1);
  iVar2 = sub_0805F15C(appuStack_34[iVar1],2);
  return CONCAT44(in_lr,(uint)*(byte *)(aiStack_4c[iVar1] + iVar2));
}

