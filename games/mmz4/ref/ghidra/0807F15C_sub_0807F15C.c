// sub_0807F15C at 0x0807F15C (thumb)

undefined4 sub_0807F15C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  bVar1 = (byte)DAT_0202e918 & 8;
  if ((DAT_0202e918 & 8) != 0) {
    return in_lr;
  }
  pbVar4 = (byte *)(param_1 + 0xd6);
  if (*pbVar4 != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(byte *)(param_1 + 0xe) = bVar1;
    *pbVar4 = bVar1;
    *(undefined *)(param_1 + 0xd7) = *(undefined *)(param_1 + 0xd);
    return in_lr;
  }
  cVar2 = '\0';
  piVar6 = (int *)(param_1 + 0xbc);
  iVar7 = 3;
  do {
    if (*piVar6 == 0) {
      cVar2 = cVar2 + '\x01';
    }
    piVar6 = piVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  if (cVar2 == '\x04') {
    do {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      uVar5 = uVar5 * 2 >> 0x11 & 3;
      if (uVar5 == 0) {
        if (*(char *)(param_1 + 0xd5) == *(char *)(param_1 + 0xd4)) {
          *(undefined *)(param_1 + 0xd) = 4;
          *pbVar4 = 1;
        }
        else {
          uVar3 = 5;
LAB_0807f20a:
          *(undefined *)(param_1 + 0xd) = uVar3;
        }
      }
      else {
        if (uVar5 != 1) {
          uVar3 = 6;
          goto LAB_0807f20a;
        }
        *(undefined *)(param_1 + 0xd) = 4;
      }
    } while (*(char *)(param_1 + 0xd7) == *(char *)(param_1 + 0xd));
    *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd);
  }
  else {
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    if ((uVar5 * 2 >> 0x11 & 1) == 0) {
      if (*(char *)(param_1 + 0xd5) == *(char *)(param_1 + 0xd4)) {
        *(undefined *)(param_1 + 0xd) = 4;
        *pbVar4 = 1;
        goto LAB_0807f260;
      }
      uVar3 = 5;
    }
    else {
      uVar3 = 4;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
  }
LAB_0807f260:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

