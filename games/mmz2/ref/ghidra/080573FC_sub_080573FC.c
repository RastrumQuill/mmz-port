// sub_080573FC at 0x080573FC (thumb)

undefined4 sub_080573FC(int param_1)

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
  case 0xb:
  case 0xc:
  case 0xd:
    break;
  default:
    goto switchD_0805741c_caseD_e;
  case 0xf:
  case 0x12:
  case 0x18:
    bVar1 = true;
    break;
  case 0x1b:
    bVar2 = true;
  }
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xc0);
switchD_0805741c_caseD_e:
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  if (((uVar4 * 2 >> 0x11 & 0xf) < 8) && (!bVar1)) {
    cVar6 = *(char *)(param_1 + 0xd);
    if ((*(char *)(param_1 + 0xb4) == cVar6) && (*(char *)(param_1 + 0xb4) == '\f')) {
      bVar5 = 0xd;
    }
    else {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      bVar5 = 0xd;
      if ((uVar4 * 2 >> 0x11 & 0xf) < 8) {
        bVar5 = 0xc;
      }
    }
    goto LAB_0805779e;
  }
  if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
    cVar6 = *(char *)(param_1 + 0xd);
    if (*(char *)(param_1 + 0xb4) == cVar6) {
      bVar5 = *(byte *)(param_1 + 0xd);
      if (bVar5 == 0xe) {
        bVar5 = 0x10;
LAB_08057764:
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 7) < 2) {
          bVar5 = 0xb;
        }
        goto LAB_0805779e;
      }
      if (bVar5 < 0xf) {
        if (bVar5 == 0xb) {
          uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar4 & 0x7fffffff;
          bVar5 = 0xe;
          if (7 < (uVar4 * 2 >> 0x11 & 0xf)) goto LAB_0805779e;
          goto LAB_0805779c;
        }
      }
      else if (bVar5 == 0x10) {
        bVar5 = 0xe;
        goto LAB_08057764;
      }
    }
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,10);
    bVar5 = 0xb;
    if ((bVar3 < 2) || (bVar5 = 0xe, 5 < bVar3)) goto LAB_0805779e;
    goto LAB_0805779c;
  }
  cVar6 = *(char *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xb4) != cVar6) {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,0x14);
joined_r0x080576c4:
    bVar5 = 0xb;
    if (((bVar3 < 2) || (bVar5 = 0xe, bVar3 < 6)) || (bVar5 = 0x11, 9 < bVar3)) goto LAB_0805779e;
    goto LAB_0805779c;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0xb:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0xf;
    bVar5 = 0x10;
    if ((3 < uVar4) && (bVar5 = 0x11, uVar4 < 8)) {
      bVar5 = 0xe;
    }
    break;
  default:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,0x14);
    goto joined_r0x080576c4;
  case 0xe:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0xf;
    bVar5 = 0xb;
    if ((uVar4 < 2) || (bVar5 = 0x11, 6 < uVar4)) break;
    goto LAB_0805779c;
  case 0x10:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0xf;
    bVar5 = 0xb;
    if ((1 < uVar4) && (bVar5 = 0x11, uVar4 < 7)) {
      bVar5 = 0xe;
    }
    break;
  case 0x11:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0xf;
    bVar5 = 0xb;
    if ((uVar4 < 2) || (bVar5 = 0xe, 8 < uVar4)) break;
LAB_0805779c:
    bVar5 = 0x10;
    break;
  case 0x1b:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    bVar3 = sub_080EF330(uVar4 * 2 >> 0x11,0x12);
    bVar5 = 0xb;
    if (((1 < bVar3) && (bVar5 = 0x10, 5 < bVar3)) && (bVar5 = 0x11, bVar3 < 10)) {
      bVar5 = 0xe;
    }
  }
LAB_0805779e:
  if (((bVar2) || (*(char *)(param_1 + 0xcc) == '\0')) ||
     ((*(char *)(param_1 + 0xdb) == '\0' ||
      (uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar4 & 0x7fffffff,
      (uVar4 * 2 >> 0x11 & 3) == 0)))) {
    if ((10 < bVar5) && ((bVar5 < 0xe || (bVar5 == 0xf)))) {
      *(undefined *)(param_1 + 0xc0) = *(undefined *)(param_1 + 0xd);
    }
    bVar2 = false;
    *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0xd);
    *(byte *)(param_1 + 0xd) = bVar5;
  }
  else {
    *(char *)(param_1 + 0xc0) = cVar6;
    *(undefined *)(param_1 + 0xd) = 0x1b;
  }
  *(bool *)(param_1 + 0xe) = bVar2;
  *(bool *)(param_1 + 0xf) = bVar2;
  *(char *)(param_1 + 0xdb) = bVar2;
  return in_lr;
}

