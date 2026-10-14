// sub_0806F7F0 at 0x0806F7F0 (thumb)

undefined4 sub_0806F7F0(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined uVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1800);
    uVar7 = 0xff;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar7 = 1;
    }
    *(undefined *)(param_1 + 0xb7) = uVar7;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0xb5) = 3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar3 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  iVar12 = *(int *)(param_1 + 0x2c);
  if (iVar12 == 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if (*(char *)(iVar12 + 0xd) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  pbVar8 = (byte *)(param_1 + 0xbe);
  iVar5 = sub_080EF150(0xe6,*pbVar8 + 1);
  pcVar10 = (char *)(param_1 + 0xb7);
  *(int *)(param_1 + 0x5c) = *pcVar10 * iVar5;
  iVar5 = sub_080EF1E8(*(undefined *)(param_1 + 0x12),(uint)*pbVar8 * 4 + 4);
  if (iVar5 == 0) {
    pbVar9 = (byte *)(param_1 + 0xb6);
    bVar1 = *pbVar9;
    *pbVar9 = bVar1 + 1;
    if (2 < (byte)(bVar1 + 1)) {
      *pbVar9 = 0;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_080ef78c + (uint)*pbVar9 * 2));
    if (*pbVar9 == 0) {
      local_40 = *(int *)(param_1 + 0x54) + *pcVar10 * -0x1200;
      local_3c = *(int *)(param_1 + 0x58) + -0x1600;
      sub_080AC60C(3,&local_40);
    }
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = -0x1400;
  }
  else {
    iVar5 = 0x1400;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + iVar5;
  iVar11 = *(int *)(param_1 + 0x58) + -0x800;
  local_38 = iVar5;
  local_34 = iVar11;
  sVar4 = sub_08008CFC(iVar5,iVar11);
  if (sVar4 != 0) {
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar5 = sub_08009774(iVar5,iVar11);
      iVar11 = *(int *)(param_1 + 0x54) + -0x1400;
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        goto LAB_0806f978;
      }
      iVar5 = sub_08009684(iVar5,iVar11);
      iVar11 = *(int *)(param_1 + 0x54) + 0x1400;
    }
    *(int *)(param_1 + 0x5c) = iVar5 - iVar11;
  }
LAB_0806f978:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = -0x1400;
  }
  else {
    iVar5 = 0x1400;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + iVar5;
  iVar11 = *(int *)(param_1 + 0x58) + 0x800;
  local_38 = iVar5;
  local_34 = iVar11;
  sVar4 = sub_08008CFC(iVar5,iVar11);
  if (sVar4 == 0) {
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar5 = sub_08009684(iVar5,iVar11);
      iVar11 = *(int *)(param_1 + 0x54) + -0x1400;
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        goto LAB_0806f9f0;
      }
      iVar5 = sub_08009774(iVar5,iVar11);
      iVar11 = *(int *)(param_1 + 0x54) + 0x1400;
    }
    *(int *)(param_1 + 0x5c) = iVar5 - iVar11;
  }
LAB_0806f9f0:
  iVar5 = DAT_0202e130;
  local_38 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_34 = *(int *)(param_1 + 0x58) + -0x1000;
  uVar6 = (uint)*pbVar8;
  iVar11 = uVar6 * 0x1000;
  local_30 = *(int *)(iVar12 + 0x54);
  local_2c = *(int *)(iVar12 + 0x58) + uVar6 * -0x1000;
  if (((local_30 - local_38) + 0x2400U < 0x4801) &&
     (iVar11 + (local_2c - local_34) + 0xf00U <= (uint)((iVar11 + 0xf00) * 2))) {
    bVar2 = false;
    if (DAT_0202e130 != 0) {
      if (local_30 < *(int *)(DAT_0202e130 + 0x54)) {
        local_28 = sub_0801F090(DAT_0202e130);
      }
      else {
        local_28 = sub_0801F0B0(DAT_0202e130);
      }
      local_24 = sub_0801F004(iVar5,0);
      if (local_24 < local_2c) {
        local_24 = sub_0801F0E0(iVar5);
        local_24 = local_24 + -0x100;
      }
      else {
        local_24 = sub_0801F0D0(iVar5);
        local_24 = local_24 + 0x100;
      }
      local_30 = local_38 + *pcVar10 * 0x2400;
      if (((local_28 - local_30) + 0x1000U < 0x2001) &&
         ((uint)((local_24 - local_2c) + iVar11) <= uVar6 * 0x2000)) {
        uVar6 = local_28 - (*(int *)(iVar12 + 0x54) + *pcVar10 * 0x1000);
        *(uint *)(iVar12 + 0x5c) = uVar6;
        if ((*(uint *)(param_1 + 0x5c) & 0x80000000) != (uVar6 & 0x80000000)) {
          *(undefined4 *)(iVar12 + 0x5c) = 0;
        }
        bVar2 = true;
      }
      else {
        *(undefined4 *)(iVar12 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      }
    }
    cVar3 = sub_08070984(iVar12,&UNK_0833eccc + (uint)*pbVar8 * 8,*(undefined4 *)(iVar12 + 0x5c));
    if (cVar3 != '\0') {
      bVar2 = true;
    }
    if (bVar2) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar12 + 0x54) + *pcVar10 * -0x2400;
      *(undefined *)(param_1 + 0xbd) = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  local_38 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (((*(int *)(param_1 + 100) - local_38) + 0x4000U < 0x8001) ||
     (sVar4 = sub_08008CFC(local_30,*(int *)(iVar12 + 0x58) + 0x800), sVar4 == 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    sub_080705DC(param_1);
  }
  return in_lr;
}

