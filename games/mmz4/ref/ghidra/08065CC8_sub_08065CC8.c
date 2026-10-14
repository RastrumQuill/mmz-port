// sub_08065CC8 at 0x08065CC8 (thumb)

undefined4 sub_08065CC8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
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
  
  sub_08128B5C(local_70,&DAT_08129197,4);
  local_28 = local_70 + 4;
  sub_08128B5C(local_28,&DAT_0812919b,4);
  local_24 = auStack_68;
  sub_08128B5C(local_24,&DAT_0812919f,4);
  sub_08128B5C(auStack_64,&DAT_081291a3,4);
  sub_08128B5C(auStack_60,&DAT_081291a7,4);
  sub_08128B5C(auStack_5c,&DAT_0812919f,4);
  sub_08128B5C(auStack_58,&DAT_081291a3,4);
  local_48 = local_28;
  local_44 = local_24;
  local_40 = auStack_64;
  sub_08128B5C(apbStack_54,&local_48,0xc);
  local_3c = auStack_60;
  local_38 = auStack_5c;
  local_34 = auStack_58;
  sub_08128B5C(&local_48,&local_3c,0xc);
  bVar1 = 0x9ffe < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4fffU;
  local_30[0] = apbStack_54;
  local_30[1] = &local_48;
  iVar3 = sub_0806610C(param_1);
  pbVar4 = (byte *)(param_1 + 0xcd);
  if (2 < *pbVar4) {
    iVar6 = 0;
    if (local_70[0] == *(byte *)(param_1 + 0xcc)) {
      *local_30[bVar1][iVar3] = 0;
    }
    else {
      do {
        iVar8 = iVar6 + 1;
        if (1 < iVar8) goto LAB_08065dfa;
        iVar2 = iVar6 + 1;
        iVar6 = iVar8;
      } while (local_70[iVar2] != *(byte *)(param_1 + 0xcc));
      local_30[bVar1][iVar3][iVar8] = 0;
    }
  }
LAB_08065dfa:
  if (((DAT_0202cac0 & 0x10) == 0) || (iVar6 = iVar3 << 2, (DAT_0202e8b4 & 4) != 0)) {
    iVar6 = iVar3 * 4;
    local_30[bVar1][iVar3][2] = 0;
  }
  if (0x13 < 0x18 - *(short *)(DAT_0202ed94 + 10)) {
    puVar5 = *(undefined **)(iVar6 + (int)local_30[bVar1]);
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  iVar3 = sub_08066308(*(undefined4 *)(iVar6 + (int)local_30[bVar1]),4);
  if (iVar3 == -1) {
    sub_08065F8C(param_1);
  }
  else {
    uVar7 = (uint)local_70[iVar3];
    if ((uVar7 == 0) && (1 < *(byte *)(param_1 + 0xb7))) {
      uVar7 = 1;
    }
    *(undefined *)(param_1 + 0xd) = (&DAT_08857b98)[uVar7];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (uVar7 == *(byte *)(param_1 + 0xcc)) {
      *pbVar4 = *pbVar4 + 1;
    }
    else {
      *(byte *)(param_1 + 0xcc) = (byte)uVar7;
      *pbVar4 = 1;
    }
  }
  return in_lr;
}

