// sub_0802F39C at 0x0802F39C (thumb)

undefined4 sub_0802F39C(int param_1)

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
  
  pbVar8 = (byte *)(param_1 + 0xee);
  bVar1 = *pbVar8;
  if (bVar1 == 1) {
LAB_0802f3f0:
    sub_08034558(param_1,0x1800);
    if ('\x01' < *(char *)(param_1 + 0x72)) goto LAB_0802f482;
    sub_08038394(param_1,0x12);
    pcVar7 = (char *)(param_1 + 0xee);
    cVar2 = *pcVar7 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0802f482;
      sub_08017700(param_1,0x1800);
      *(undefined *)(param_1 + 0x129) = 0x18;
      *pbVar8 = *pbVar8 + 1;
      goto LAB_0802f3f0;
    }
    if (bVar1 == 2) {
      sub_08034558(param_1,0x1800);
      if (*(byte *)(param_1 + 0x129) < 9) {
        sub_08017700(param_1,0x1801);
        *pbVar8 = *pbVar8 + 1;
      }
      goto LAB_0802f482;
    }
    if ((bVar1 != 3) || (*(char *)(param_1 + 0x73) != '\x03')) goto LAB_0802f482;
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xfe;
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    pcVar7 = (char *)(param_1 + 0xec);
  }
  *pcVar7 = cVar2;
LAB_0802f482:
  pbVar8 = (byte *)(param_1 + 0x129);
  if (*pbVar8 != 0) {
    *pbVar8 = *pbVar8 - 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = sub_08032C9C(param_1);
      sVar4 = sub_08032D6C(param_1);
      sVar5 = sub_08032C9C(param_1);
      iVar6 = FUN_080fe2f8(((int)sVar4 - (int)sVar5) * (uint)*pbVar8,0x18);
      iVar6 = -iVar6 - (int)sVar3;
    }
    else {
      sVar3 = sub_08032C9C(param_1);
      sVar4 = sub_08032D6C(param_1);
      sVar5 = sub_08032C9C(param_1);
      iVar6 = FUN_080fe2f8(((int)sVar4 - (int)sVar5) * (uint)*pbVar8,0x18);
      iVar6 = sVar3 + iVar6;
    }
    *(int *)(param_1 + 0x5c) = iVar6;
  }
  return in_lr;
}

