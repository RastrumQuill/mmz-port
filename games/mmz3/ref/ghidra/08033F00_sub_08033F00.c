// sub_08033F00 at 0x08033F00 (thumb)

undefined8 sub_08033F00(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(param_1 + 0x22b);
  bVar1 = *pbVar6;
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x22a) + -1;
    *(char *)(param_1 + 0x22a) = cVar3;
    if (cVar3 == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x216);
    if (((uVar2 & 0x40) == 0) && ((uVar2 & 0x10) == 0)) {
      uVar4 = 0x20;
LAB_08033fc6:
      if ((uVar4 & uVar2) == 0) goto LAB_08034008;
    }
    *(undefined *)(param_1 + 0x22a) = 10;
    goto LAB_08033fd0;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08034000;
    uVar2 = *(ushort *)(param_1 + 0x216);
    if ((uVar2 & 0x40) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_08034008;
        *(undefined *)(param_1 + 0x22a) = 10;
      }
      else {
        *(undefined *)(param_1 + 0x22a) = 10;
      }
LAB_08033fd0:
      *pbVar6 = *pbVar6 + 1;
    }
  }
  else {
    if (bVar1 == 2) {
      cVar3 = *(char *)(param_1 + 0x22a) + -1;
      *(char *)(param_1 + 0x22a) = cVar3;
      if (cVar3 == -1) {
        *pbVar6 = 0;
      }
      uVar2 = *(ushort *)(param_1 + 0x216);
      if ((uVar2 & 0x30) == 0) {
        uVar4 = 0x40;
        goto LAB_08033fc6;
      }
      goto LAB_08034008;
    }
    if (bVar1 == 3) {
      cVar3 = *(char *)(param_1 + 0x22a) + -1;
      *(char *)(param_1 + 0x22a) = cVar3;
      if (cVar3 == -1) {
        uVar5 = 0;
        *pbVar6 = 0;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_0803400a;
    }
LAB_08034000:
    *(undefined *)(param_1 + 0x22b) = 0;
  }
LAB_08034008:
  uVar5 = 0;
LAB_0803400a:
  return CONCAT44(in_lr,uVar5);
}

