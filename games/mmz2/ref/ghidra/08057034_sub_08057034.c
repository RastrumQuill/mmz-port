// sub_08057034 at 0x08057034 (thumb)

undefined4 sub_08057034(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined4 in_lr;
  
  bVar1 = false;
  bVar2 = false;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 2:
  case 3:
  case 4:
    break;
  default:
    goto switchD_08057054_caseD_5;
  case 6:
  case 9:
  case 0x12:
    bVar1 = true;
    break;
  case 0x1a:
    bVar2 = true;
  }
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xc0);
switchD_08057054_caseD_5:
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  if (((uVar4 * 2 >> 0x11 & 0xf) < 8) && (!bVar1)) {
    cVar6 = *(char *)(param_1 + 0xd);
    if ((*(char *)(param_1 + 0xb4) == cVar6) && (*(char *)(param_1 + 0xb4) == '\x03')) {
      bVar5 = 4;
    }
    else {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      bVar5 = 4;
      if ((uVar4 * 2 >> 0x11 & 0xf) < 8) {
        bVar5 = 3;
      }
    }
    goto LAB_0805737a;
  }
  if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
    cVar6 = *(char *)(param_1 + 0xd);
    if (*(char *)(param_1 + 0xb4) == cVar6) {
      bVar5 = *(byte *)(param_1 + 0xd);
      if (bVar5 == 5) {
        bVar5 = 7;
LAB_08057340:
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 7) < 2) {
          bVar5 = 2;
        }
        goto LAB_0805737a;
      }
      if (bVar5 < 6) {
        if (bVar5 == 2) {
          uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar4 & 0x7fffffff;
          bVar5 = 5;
          if (7 < (uVar4 * 2 >> 0x11 & 0xf)) goto LAB_0805737a;
          goto LAB_08057378;
        }
      }
      else if (bVar5 == 7) {
        bVar5 = 5;
        goto LAB_08057340;
      }
    }
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,10);
    bVar5 = 2;
    if ((bVar3 < 2) || (bVar5 = 5, 5 < bVar3)) goto LAB_0805737a;
  }
  else {
    cVar6 = *(char *)(param_1 + 0xd);
    if (*(char *)(param_1 + 0xb4) == cVar6) {
      bVar5 = *(byte *)(param_1 + 0xd);
      if (bVar5 != 5) {
        if (bVar5 < 6) {
          if (bVar5 == 2) {
            uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar4 & 0x7fffffff;
            uVar4 = uVar4 * 2 >> 0x11 & 0xf;
            bVar5 = 7;
            if ((3 < uVar4) && (bVar5 = 8, uVar4 < 8)) {
              bVar5 = 5;
            }
            goto LAB_0805737a;
          }
        }
        else {
          if (bVar5 == 7) {
            uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar4 & 0x7fffffff;
            uVar4 = uVar4 * 2 >> 0x11 & 0xf;
            bVar5 = 2;
            if ((1 < uVar4) && (bVar5 = 8, uVar4 < 7)) {
              bVar5 = 5;
            }
            goto LAB_0805737a;
          }
          if (bVar5 == 8) {
            uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar4 & 0x7fffffff;
            uVar4 = uVar4 * 2 >> 0x11 & 0xf;
            bVar5 = 2;
            if ((uVar4 < 2) || (bVar5 = 5, 8 < uVar4)) goto LAB_0805737a;
            goto LAB_08057378;
          }
        }
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,0x16);
        bVar5 = 2;
        if ((((1 < bVar3) && (bVar5 = 5, 5 < bVar3)) && (bVar5 = 7, 9 < bVar3)) &&
           (bVar5 = 8, bVar3 < 0xe)) {
          bVar5 = 0x1a;
        }
        goto LAB_0805737a;
      }
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      uVar4 = uVar4 * 2 >> 0x11 & 0xf;
      bVar5 = 2;
      if ((uVar4 < 2) || (bVar5 = 8, 6 < uVar4)) goto LAB_0805737a;
    }
    else {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,0x14);
      bVar5 = 2;
      if ((bVar3 < 2) || ((bVar5 = 5, bVar3 < 6 || (bVar5 = 8, 9 < bVar3)))) goto LAB_0805737a;
    }
  }
LAB_08057378:
  bVar5 = 7;
LAB_0805737a:
  if ((((bVar2) || (*(char *)(param_1 + 0xcc) == '\0')) || (*(char *)(param_1 + 0xdb) == '\0')) ||
     (uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar4 & 0x7fffffff,
     (uVar4 * 2 >> 0x11 & 3) == 0)) {
    if ((1 < bVar5) && ((bVar5 < 5 || (bVar5 == 6)))) {
      *(undefined *)(param_1 + 0xc0) = *(undefined *)(param_1 + 0xd);
    }
    bVar2 = false;
    *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0xd);
    *(byte *)(param_1 + 0xd) = bVar5;
  }
  else {
    *(char *)(param_1 + 0xc0) = cVar6;
    *(undefined *)(param_1 + 0xd) = 0x1a;
  }
  *(bool *)(param_1 + 0xe) = bVar2;
  *(bool *)(param_1 + 0xf) = bVar2;
  *(char *)(param_1 + 0xdb) = bVar2;
  return in_lr;
}

