// sub_0805EF38 at 0x0805EF38 (thumb)

undefined4 sub_0805EF38(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined auStack_64 [4];
  undefined auStack_60 [4];
  undefined auStack_5c [4];
  int aiStack_58 [3];
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined auStack_40 [12];
  undefined **local_34 [4];
  undefined *local_24;
  undefined *local_20;
  
  sub_08128B5C(auStack_64,&DAT_081290dc,3);
  sub_08128B5C(auStack_60,&DAT_081290dc,3);
  sub_08128B5C(auStack_5c,&DAT_081290dc,3);
  local_4c = auStack_64;
  local_48 = auStack_60;
  local_44 = auStack_5c;
  sub_08128B5C(aiStack_58,&local_4c,0xc);
  sub_08128B5C(&local_4c,&DAT_081290df,3);
  sub_08128B5C(&local_48,&DAT_081290e2,3);
  sub_08128B5C(&local_44,&DAT_081290e5,3);
  local_34[0] = &local_4c;
  local_34[1] = &local_48;
  local_34[2] = &local_44;
  sub_08128B5C(auStack_40,local_34,0xc);
  local_34[3] = (undefined **)auStack_40;
  local_24 = auStack_40;
  local_20 = auStack_40;
  sub_08128B5C(local_34,local_34 + 3,0xc);
  bVar1 = *(byte *)(param_1 + 0x10);
  iVar2 = sub_0805F118(param_1);
  pbVar4 = (byte *)(param_1 + 0xba);
  if (2 < *pbVar4) {
    local_34[bVar1][iVar2][*(byte *)(param_1 + 0xb9)] = 0;
  }
  uVar3 = sub_0805F15C(local_34[bVar1][iVar2],3);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(aiStack_58[bVar1] + uVar3);
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  if (uVar3 == *(byte *)(param_1 + 0xb9)) {
    *pbVar4 = *pbVar4 + 1;
  }
  else {
    *pbVar4 = 1;
    *(byte *)(param_1 + 0xb9) = (byte)uVar3;
  }
  return in_lr;
}

