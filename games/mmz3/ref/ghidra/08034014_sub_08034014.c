// sub_08034014 at 0x08034014 (thumb)

undefined8 sub_08034014(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(param_1 + 0x22d);
  bVar1 = *pbVar6;
  if (bVar1 == 1) {
    pcVar7 = (char *)(param_1 + 0x22c);
    cVar3 = *pcVar7;
    *pcVar7 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x216);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_0803413a;
        *(byte *)(param_1 + 0x22e) = (byte)uVar2 & 0x10;
        *pcVar7 = '\n';
      }
      else {
        *(undefined *)(param_1 + 0x22e) = 1;
        *pcVar7 = '\n';
      }
    }
    else {
      *pcVar7 = '\n';
    }
LAB_08034106:
    *pbVar6 = *pbVar6 + 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      cVar3 = *(char *)(param_1 + 0x22c) + -1;
      *(char *)(param_1 + 0x22c) = cVar3;
      if (cVar3 == -1) {
        *pbVar6 = 0;
      }
      uVar2 = *(ushort *)(param_1 + 0x216);
      if ((uVar2 & 0x80) == 0) {
        if ((uVar2 & 0x10) == 0) {
          uVar4 = 0x20;
          goto LAB_080340fc;
        }
LAB_08034102:
        *(undefined *)(param_1 + 0x22c) = 10;
        goto LAB_08034106;
      }
    }
    else {
LAB_08034132:
      *(undefined *)(param_1 + 0x22d) = 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        cVar3 = *(char *)(param_1 + 0x22c) + -1;
        *(char *)(param_1 + 0x22c) = cVar3;
        if (cVar3 == -1) {
          uVar5 = 0;
          *pbVar6 = 0;
        }
        else {
          uVar5 = 1;
        }
        goto LAB_0803413c;
      }
      goto LAB_08034132;
    }
    cVar3 = *(char *)(param_1 + 0x22c) + -1;
    *(char *)(param_1 + 0x22c) = cVar3;
    if (cVar3 == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x216);
    if ((uVar2 & 0x30) == 0) {
      uVar4 = 0x80;
LAB_080340fc:
      if ((uVar4 & uVar2) != 0) goto LAB_08034102;
    }
  }
LAB_0803413a:
  uVar5 = 0;
LAB_0803413c:
  return CONCAT44(in_lr,uVar5);
}

