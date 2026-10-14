// sub_0805BF54 at 0x0805BF54 (thumb)

undefined4 sub_0805BF54(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 in_lr;
  undefined auStack_9c [8];
  undefined auStack_94 [8];
  undefined auStack_8c [8];
  undefined auStack_84 [8];
  undefined auStack_7c [8];
  undefined auStack_74 [8];
  undefined auStack_6c [8];
  undefined auStack_64 [8];
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined **local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined ***local_2c [3];
  
  sub_08128B5C(auStack_9c,&DAT_08128fdc,7);
  local_2c[2] = (undefined ***)auStack_94;
  sub_08128B5C(local_2c[2],&DAT_08128fdc,7);
  sub_08128B5C(auStack_8c,&DAT_08128fe3,7);
  sub_08128B5C(auStack_84,&DAT_08128fea,7);
  sub_08128B5C(auStack_7c,&DAT_08128ff1,7);
  sub_08128B5C(auStack_74,&DAT_08128ff1,7);
  sub_08128B5C(auStack_6c,&DAT_08128ff8,7);
  sub_08128B5C(auStack_64,&DAT_08128fff,7);
  local_3c = &local_5c;
  local_58 = (undefined *)local_2c[2];
  local_38 = &local_54;
  local_34 = &local_4c;
  local_30 = &local_44;
  local_2c[0] = &local_3c;
  local_2c[1] = &local_34;
  if (((DAT_0202e918 & 8) == 0) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((cVar2 = *(char *)(param_1 + 0xbf), 1 < (byte)(cVar2 - 1U) && (cVar2 != '\x04')) &&
        (cVar2 != '\x05')) && (cVar2 != '\x03')))))) {
    bVar1 = 0x7ffe < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3fffU;
    local_5c = auStack_9c;
    local_54 = auStack_8c;
    local_50 = auStack_84;
    local_4c = auStack_7c;
    local_48 = auStack_74;
    local_44 = auStack_6c;
    local_40 = auStack_64;
    iVar3 = sub_0805C208(param_1);
    iVar5 = 0;
    if (((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      iVar5 = 1;
    }
    pbVar6 = (byte *)(param_1 + 0xcd);
    pbVar7 = (byte *)(param_1 + 0xcc);
    if (1 < *pbVar6) {
      local_2c[bVar1][iVar3][iVar5][*pbVar7] = 0;
    }
    uVar4 = sub_0805C2F0(local_2c[bVar1][iVar3][iVar5],7);
    *(undefined *)(param_1 + 0xd) = (&DAT_088553e0)[uVar4];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (uVar4 == *pbVar7) {
      *pbVar6 = *pbVar6 + 1;
    }
    else {
      *pbVar6 = 1;
      *pbVar7 = (byte)uVar4;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

