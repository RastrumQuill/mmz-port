// sub_08078FA0 at 0x08078FA0 (thumb)

undefined4 sub_08078FA0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  byte local_20 [8];
  
  sub_08128B5C(local_20,&DAT_081292e8,4);
  pbVar1 = local_20 + 4;
  sub_08128B5C(pbVar1,&DAT_081292ec,4);
  if ((DAT_0202e918 & 8) == 0) {
    pbVar4 = (byte *)(param_1 + 0xb5);
    pbVar7 = (byte *)(param_1 + 0xb4);
    if (1 < *pbVar4) {
      iVar5 = 0;
      if (local_20[0] == *pbVar7) {
        local_20[4] = 0;
      }
      else {
        do {
          iVar6 = iVar5 + 1;
          if (3 < iVar6) goto LAB_08079022;
          iVar3 = iVar5 + 1;
          iVar5 = iVar6;
        } while (local_20[iVar3] != *pbVar7);
        pbVar1[iVar6] = 0;
      }
    }
LAB_08079022:
    if ((*(byte *)(DAT_0202e8e0 + 1) < 5) || ((DAT_0202e8b4 & 4) != 0)) {
      local_20[7] = 0;
    }
    iVar5 = sub_08079198(pbVar1,4);
    bVar2 = local_20[iVar5];
    *(undefined *)(param_1 + 0xd) = (&DAT_08859dc8)[bVar2];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if ((uint)bVar2 == (uint)*pbVar7) {
      *pbVar4 = *pbVar4 + 1;
    }
    else {
      *pbVar7 = bVar2;
      *pbVar4 = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

