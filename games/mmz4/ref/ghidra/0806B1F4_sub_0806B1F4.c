// sub_0806B1F4 at 0x0806B1F4 (thumb)

undefined4 sub_0806B1F4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x55ff) {
    sub_0801CF00(param_1);
  }
  sub_0801CFF0(param_1);
  bVar2 = (byte)DAT_0202e918;
  if ((DAT_0202e918 & 8) != 0) {
    return in_lr;
  }
  iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar6 = *(int *)(param_1 + 0x54);
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) != iVar6 < iVar3) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(byte *)(param_1 + 0xe) = bVar2 & 8;
    return in_lr;
  }
  iVar5 = iVar6 - iVar3;
  if (iVar5 < 0) {
    iVar5 = iVar3 - iVar6;
  }
  if (iVar5 < 0x4f00) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar6 - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar3 < 0) {
      iVar3 = *(int *)(DAT_0202dbf0 + 0x54) - iVar6;
    }
    if (iVar3 < 0x8f00) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
  }
  iVar6 = 2;
  if ((0xf < *(short *)(param_1 + 0xa4)) && (iVar6 = 0, *(short *)(param_1 + 0xa4) < 0x20)) {
    iVar6 = 1;
  }
  do {
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0x1f;
    iVar5 = 0;
    if (iVar3 == 0) {
      if (iVar6 == 0) {
        if ((7 < uVar4) && (iVar5 = 1, 0x11 < uVar4)) {
LAB_0806b36e:
          iVar5 = 2;
          if ((0x17 < uVar4) && (iVar5 = 4, uVar4 < 0x1c)) {
            iVar5 = 3;
          }
        }
      }
      else if (iVar6 == 1) {
        if ((((5 < uVar4) && ((iVar5 = 1, 0xd < uVar4 && (iVar5 = 2, 0x13 < uVar4)))) &&
            (iVar5 = 3, 0x16 < uVar4)) && (iVar5 = 5, uVar4 < 0x1b)) {
LAB_0806b408:
          iVar5 = 4;
        }
      }
      else if ((((4 < uVar4) && (iVar5 = 1, 0xc < uVar4)) && (iVar5 = 2, 0x11 < uVar4)) &&
              ((iVar5 = 3, 0x15 < uVar4 && (iVar5 = 5, uVar4 < 0x19)))) goto LAB_0806b408;
    }
    else if (iVar3 == 1) {
      if (iVar6 == 0) {
        if ((9 < uVar4) && (iVar5 = 1, 0xf < uVar4)) goto LAB_0806b36e;
      }
      else if (iVar6 == 1) {
        if (((5 < uVar4) && (iVar5 = 1, 10 < uVar4)) &&
           ((iVar5 = 2, 0x11 < uVar4 && (iVar5 = 3, 0x15 < uVar4)))) {
joined_r0x0806b3ee:
          iVar5 = 5;
          if (uVar4 < 0x1a) goto LAB_0806b408;
        }
      }
      else if ((((4 < uVar4) && (iVar5 = 1, 9 < uVar4)) && (iVar5 = 2, 0xf < uVar4)) &&
              (iVar5 = 3, 0x13 < uVar4)) {
joined_r0x0806b406:
        iVar5 = 5;
        if (uVar4 < 0x18) goto LAB_0806b408;
      }
    }
    else if (iVar6 == 0) {
      if (((0xb < uVar4) && (iVar5 = 2, 0x15 < uVar4)) && (iVar5 = 4, uVar4 < 0x1b)) {
        iVar5 = 3;
      }
    }
    else if (iVar6 == 1) {
      if (((6 < uVar4) && (iVar5 = 2, 0xf < uVar4)) && (iVar5 = 3, 0x14 < uVar4))
      goto joined_r0x0806b3ee;
    }
    else if (((5 < uVar4) && (iVar5 = 2, 0xd < uVar4)) && (iVar5 = 3, 0x12 < uVar4))
    goto joined_r0x0806b406;
    if ((((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) || (iVar5 != 5)) {
      cVar1 = (&DAT_08858fa8)[iVar5];
      *(char *)(param_1 + 0xd) = cVar1;
      if (cVar1 != *(char *)(param_1 + 0xde)) {
        *(char *)(param_1 + 0xde) = cVar1;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
  } while( true );
}

