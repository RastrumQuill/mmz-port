// sub_08065ED0 at 0x08065ED0 (thumb)

undefined4 sub_08065ED0(int param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  byte local_1c [8];
  
  sub_08128B5C(local_1c,&DAT_081291ab,2);
  pbVar1 = local_1c + 4;
  sub_08128B5C(pbVar1,&DAT_081291ad,2);
  if ((DAT_0202e918 & 8) == 0) {
    pbVar5 = (byte *)(param_1 + 0xcd);
    pbVar8 = (byte *)(param_1 + 0xcc);
    if (2 < *pbVar5) {
      iVar6 = 0;
      if (local_1c[0] == *pbVar8) {
        local_1c[4] = 0;
      }
      else {
        do {
          iVar7 = iVar6 + 1;
          if (1 < iVar7) goto LAB_08065f46;
          iVar3 = iVar6 + 1;
          iVar6 = iVar7;
        } while (local_1c[iVar3] != *pbVar8);
        pbVar1[iVar7] = 0;
      }
    }
LAB_08065f46:
    iVar6 = sub_08066308(pbVar1,2);
    bVar4 = local_1c[iVar6];
    cVar2 = (&DAT_08857b98)[bVar4];
    *(char *)(param_1 + 0xd) = cVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (cVar2 == '\r') {
      *(undefined *)(param_1 + 0xe0) = 0;
    }
    if ((uint)bVar4 == (uint)*pbVar8) {
      bVar4 = *pbVar5 + 1;
    }
    else {
      *pbVar8 = bVar4;
      bVar4 = 1;
    }
    *pbVar5 = bVar4;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

