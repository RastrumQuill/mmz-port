// sub_08065AB4 at 0x08065AB4 (thumb)

undefined4 sub_08065AB4(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  byte local_70 [8];
  undefined auStack_68 [4];
  undefined auStack_64 [4];
  undefined auStack_60 [4];
  undefined auStack_5c [4];
  undefined auStack_58 [4];
  byte *apbStack_54 [3];
  byte *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  byte **local_30 [2];
  byte *local_28;
  undefined *local_24;
  int iVar9;
  
  sub_08128B5C(local_70,&DAT_08129188,3);
  local_28 = local_70 + 4;
  sub_08128B5C(local_28,&DAT_0812918b,3);
  local_24 = auStack_68;
  sub_08128B5C(local_24,&DAT_0812918e,3);
  sub_08128B5C(auStack_64,&DAT_08129191,3);
  sub_08128B5C(auStack_60,&DAT_08129194,3);
  sub_08128B5C(auStack_5c,&DAT_0812918b,3);
  sub_08128B5C(auStack_58,&DAT_0812918e,3);
  local_48 = local_28;
  local_44 = local_24;
  local_40 = auStack_64;
  sub_08128B5C(apbStack_54,&local_48,0xc);
  local_3c = auStack_60;
  local_38 = auStack_5c;
  local_34 = auStack_58;
  sub_08128B5C(&local_48,&local_3c,0xc);
  if ((DAT_0202e918 & 8) == 0) {
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar6 = *(int *)(param_1 + 0x54);
    local_30[0] = apbStack_54;
    local_30[1] = &local_48;
    iVar4 = sub_0806610C(param_1);
    pbVar5 = (byte *)(param_1 + 0xcd);
    if (2 < *pbVar5) {
      iVar9 = 0;
      if (local_70[0] == *(byte *)(param_1 + 0xcc)) {
        *local_30[iVar4] = (byte *)0x0;
      }
      else {
        do {
          iVar8 = iVar9 + 1;
          if (1 < iVar8) goto LAB_08065bfe;
          iVar1 = iVar9 + 1;
          iVar9 = iVar8;
        } while (local_70[iVar1] != *(byte *)(param_1 + 0xcc));
        local_30[iVar4][iVar8] = (byte *)0x0;
      }
    }
LAB_08065bfe:
    iVar3 = sub_08066308(local_30[0x7ffe < (iVar3 - iVar6) + 0x3fffU][iVar4],3);
    bVar2 = local_70[iVar3];
    uVar7 = (uint)bVar2;
    if (uVar7 == 0xff) {
      sub_08065CC8(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xd) = (&DAT_08857b98)[uVar7];
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      if (uVar7 == *(byte *)(param_1 + 0xcc)) {
        bVar2 = *pbVar5 + 1;
      }
      else {
        *(byte *)(param_1 + 0xcc) = bVar2;
        bVar2 = 1;
      }
      *pbVar5 = bVar2;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

