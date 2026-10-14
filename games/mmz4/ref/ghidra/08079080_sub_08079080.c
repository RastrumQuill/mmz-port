// sub_08079080 at 0x08079080 (thumb)

undefined4 sub_08079080(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  byte local_1c [8];
  
  sub_08128B5C(local_1c,&DAT_081292e8,4);
  pbVar1 = local_1c + 4;
  sub_08128B5C(pbVar1,&DAT_081292f0,4);
  if ((DAT_0202e918 & 8) == 0) {
    pbVar5 = (byte *)(param_1 + 0xb7);
    if (1 < *pbVar5) {
      iVar6 = 0;
      if (local_1c[0] == *(byte *)(param_1 + 0xb6)) {
        local_1c[4] = 0;
      }
      else {
        do {
          iVar7 = iVar6 + 1;
          if (3 < iVar7) goto LAB_080790f6;
          iVar3 = iVar6 + 1;
          iVar6 = iVar7;
        } while (local_1c[iVar3] != *(byte *)(param_1 + 0xb6));
        pbVar1[iVar7] = 0;
      }
    }
LAB_080790f6:
    if ((4 < *(byte *)(DAT_0202e8e0 + 1)) && (bVar4 = DAT_0202e8b4 & 4, (DAT_0202e8b4 & 4) == 0)) {
      iVar6 = sub_08079198(pbVar1,4);
      bVar2 = local_1c[iVar6];
      *(undefined *)(param_1 + 0xd) = (&DAT_08859dc8)[bVar2];
      *(byte *)(param_1 + 0xe) = bVar4;
      *(byte *)(param_1 + 0xf) = bVar4;
      if ((uint)bVar2 == (uint)*(byte *)(param_1 + 0xb6)) {
        bVar4 = *pbVar5 + 1;
      }
      else {
        *(byte *)(param_1 + 0xb6) = bVar2;
        bVar4 = 1;
      }
      *pbVar5 = bVar4;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = (&DAT_08859dc8)[local_1c[1]];
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

