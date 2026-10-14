// sub_080357F0 at 0x080357F0 (thumb)

undefined4 sub_080357F0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  pbVar8 = (byte *)(param_1 + 0x102);
  bVar1 = *pbVar8;
  if (bVar1 == 1) {
LAB_08035844:
    sub_0803A3BC(param_1,0x1800);
    if ('\x01' < *(char *)(param_1 + 0x72)) goto LAB_080358da;
    sub_0803C490(param_1,0x13);
    pcVar7 = (char *)(param_1 + 0x102);
    cVar2 = *pcVar7 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080358da;
      sub_0801CF00(param_1,0x1800);
      *(undefined *)(param_1 + 0x145) = 0x18;
      *pbVar8 = *pbVar8 + 1;
      goto LAB_08035844;
    }
    if (bVar1 == 2) {
      sub_0803A3BC(param_1,0x1800);
      if (*(byte *)(param_1 + 0x145) < 9) {
        sub_0801CF00(param_1,0x1801);
        *pbVar8 = *pbVar8 + 1;
      }
      goto LAB_080358da;
    }
    if ((bVar1 != 3) || (*(char *)(param_1 + 0x73) != '\x03')) goto LAB_080358da;
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xfd;
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    pcVar7 = (char *)(param_1 + 0x100);
  }
  *pcVar7 = cVar2;
LAB_080358da:
  pbVar8 = (byte *)(param_1 + 0x145);
  if (*pbVar8 != 0) {
    *pbVar8 = *pbVar8 - 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = sub_080386E0(param_1);
      sVar4 = sub_0803879C(param_1);
      sVar5 = sub_080386E0(param_1);
      iVar6 = FUN_081288bc(((int)sVar4 - (int)sVar5) * (uint)*pbVar8,0x18);
      iVar6 = -iVar6 - (int)sVar3;
    }
    else {
      sVar3 = sub_080386E0(param_1);
      sVar4 = sub_0803879C(param_1);
      sVar5 = sub_080386E0(param_1);
      iVar6 = FUN_081288bc(((int)sVar4 - (int)sVar5) * (uint)*pbVar8,0x18);
      iVar6 = sVar3 + iVar6;
    }
    *(int *)(param_1 + 0x5c) = iVar6;
  }
  return in_lr;
}

