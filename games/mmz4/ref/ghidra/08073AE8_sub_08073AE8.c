// sub_08073AE8 at 0x08073AE8 (thumb)

undefined4 sub_08073AE8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  undefined auStack_88 [8];
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  undefined auStack_60 [8];
  byte abStack_58 [12];
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  byte *local_34;
  undefined **local_30;
  byte *local_2c;
  char *local_28;
  short *local_24;
  
  sub_08128B5C(auStack_88,&DAT_081292a0,7);
  sub_08128B5C(auStack_80,&DAT_081292a7,7);
  sub_08128B5C(auStack_78,&DAT_081292ae,7);
  sub_08128B5C(auStack_70,&DAT_081292b5,7);
  sub_08128B5C(auStack_68,&DAT_081292bc,7);
  sub_08128B5C(auStack_60,&DAT_081292c3,7);
  local_4c = auStack_88;
  local_48 = auStack_80;
  local_44 = auStack_78;
  sub_08128B5C(abStack_58,&local_4c,0xc);
  local_40 = auStack_70;
  local_3c = auStack_68;
  local_38 = auStack_60;
  sub_08128B5C(&local_4c,&local_40,0xc);
  if ((DAT_0202e918 & 8) == 0) {
    bVar1 = 0x9ffe < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4fffU;
    local_34 = abStack_58;
    local_30 = &local_4c;
    iVar3 = sub_08073D1C(param_1);
    local_2c = (byte *)(param_1 + 0xc1);
    pbVar6 = (byte *)(param_1 + 0xc0);
    local_28 = (char *)(param_1 + 0xc9);
    local_24 = (short *)(param_1 + 0xca);
    if (2 < *local_2c) {
      iVar5 = 0;
      if (*pbVar6 == 1) {
        **(undefined **)((&local_34)[bVar1] + iVar3 * 4) = 0;
      }
      else {
        do {
          iVar7 = iVar5 + 1;
          if (6 < iVar7) goto LAB_08073c42;
          pbVar4 = &DAT_08859769 + iVar5;
          iVar5 = iVar7;
        } while (*pbVar4 != *pbVar6);
        *(undefined *)(*(int *)((&local_34)[bVar1] + iVar3 * 4) + iVar7) = 0;
      }
    }
LAB_08073c42:
    if (((DAT_0202cac0 & 0x10) == 0) || (iVar5 = iVar3 << 2, (DAT_0202e8b4 & 4) != 0)) {
      iVar5 = iVar3 * 4;
      *(undefined *)(*(int *)((&local_34)[bVar1] + iVar5) + 6) = 0;
    }
    if ('\x02' < *(char *)(param_1 + 0xbb)) {
      *(undefined *)(*(int *)((&local_34)[bVar1] + iVar5) + 4) = 0;
    }
    if (*local_28 != '\0') {
      iVar3 = *(int *)((&local_34)[bVar1] + iVar5);
      *(undefined *)(iVar3 + 6) = 0;
      *(undefined *)(iVar3 + 3) = 0;
    }
    if (0 < *local_24) {
      *(undefined *)(*(int *)((&local_34)[bVar1] + iVar5) + 2) = 0;
    }
    iVar3 = sub_08073D4C(*(undefined4 *)((&local_34)[bVar1] + iVar5),7);
    bVar2 = (&DAT_08859768)[iVar3];
    *(undefined *)(param_1 + 0xd) = (&DAT_08859720)[bVar2];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if ((uint)bVar2 == (uint)*pbVar6) {
      bVar2 = *local_2c + 1;
    }
    else {
      *pbVar6 = bVar2;
      bVar2 = 1;
    }
    *local_2c = bVar2;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

