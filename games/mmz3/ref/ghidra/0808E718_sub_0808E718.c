// sub_0808E718 at 0x0808E718 (thumb)

undefined4 sub_0808E718(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0808e72c_caseD_1;
  case 2:
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != '\0') {
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x71) != '\a') {
        return in_lr;
      }
      goto LAB_0808eb4a;
    }
    goto LAB_0808eb4c;
  case 3:
    sub_08017700(param_1,0x750b);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xb4) + 0xa000) {
      if (*(int *)(param_1 + 0xb4) + 0xd000 <= *(int *)(DAT_0202f5c0 + 0x54)) {
        return in_lr;
      }
    }
    else if (*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0x54) + -0x3000) {
      return in_lr;
    }
LAB_0808eb4a:
    cVar2 = '\0';
LAB_0808eb4c:
    *(undefined *)(param_1 + 0xd) = 2;
    *(char *)(param_1 + 0xe) = cVar2;
  default:
    goto switchD_0808e72c_caseD_6;
  }
  sub_08017700(param_1,0x7501);
  sub_08007390(param_1 + 0x74,&DAT_08365b50);
  iVar5 = DAT_0202f5c0;
  iVar6 = *(int *)(DAT_0202f5c0 + 0x54);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 < iVar6) {
    *(int *)(param_1 + 100) = iVar6 + -0x3000;
    iVar6 = *(int *)(iVar5 + 0x54);
    iVar5 = iVar6 - iVar4;
    if (iVar5 < 1) {
      iVar5 = iVar4 - iVar6;
    }
    if (iVar5 < 0x3000) {
LAB_0808e7d0:
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    *(int *)(param_1 + 100) = iVar6 + 0x3000;
    iVar6 = *(int *)(iVar5 + 0x54);
    iVar5 = iVar4 - iVar6;
    if (iVar5 < 1) {
      iVar5 = iVar6 - iVar4;
    }
    if (iVar5 < 0x3000) goto LAB_0808e7d0;
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  cVar2 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x14);
  *(char *)(param_1 + 0x12) = cVar2 + '<';
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808e72c_caseD_1:
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54);
    if (*(int *)(DAT_0202f5c0 + 0x54) <= iVar5) {
      iVar5 = sub_0800A2CC(iVar5 + -0x1400,*(int *)(param_1 + 0x58) + 0xa00);
      if (iVar5 < *(int *)(param_1 + 0x58)) {
        cVar2 = '\x03';
      }
      else {
        iVar5 = *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x54) = iVar5 + -0x300;
        iVar5 = sub_08009F80(iVar5 + -0x1700,*(int *)(param_1 + 0x58));
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
          if (iVar5 < 1) {
            iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
          }
          if (iVar5 < 0x3000) goto LAB_0808ea1c;
          goto LAB_0808ea30;
        }
        *(undefined *)(param_1 + 0x13) = 1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
        cVar2 = '\x03';
      }
      goto LAB_0808ea2e;
    }
    iVar5 = sub_0800A2CC(iVar5 + 0x1400,*(int *)(param_1 + 0x58) + 0xa00);
    if (iVar5 < *(int *)(param_1 + 0x58)) {
      cVar2 = '\x03';
      goto LAB_0808ea2e;
    }
    iVar5 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar5 + 0x300;
    iVar5 = sub_08009E14(iVar5 + 0x1700,*(int *)(param_1 + 0x58));
    if (iVar5 != 0) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      cVar2 = '\x03';
      goto LAB_0808ea2e;
    }
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    }
    if (iVar5 < 0x3000) {
      iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
      iVar6 = -0x3000;
      goto LAB_0808ea26;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar5 < *(int *)(DAT_0202f5c0 + 0x54)) {
      iVar5 = sub_0800A2CC(iVar5 + -0x1400,*(int *)(param_1 + 0x58) + 0xa00);
      if (iVar5 < *(int *)(param_1 + 0x58)) {
        cVar2 = '\x03';
      }
      else {
        iVar5 = *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x54) = iVar5 + -0x300;
        iVar5 = sub_08009F80(iVar5 + -0x1700,*(int *)(param_1 + 0x58));
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
          if (iVar5 < 1) {
            iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
          }
          if (iVar5 < 0x3000) goto LAB_0808ea30;
          iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
          iVar6 = -0x3000;
LAB_0808ea26:
          *(int *)(param_1 + 0x54) = iVar5 + iVar6;
          cVar2 = *(char *)(param_1 + 0xe) + '\x01';
        }
        else {
          *(undefined *)(param_1 + 0x13) = 1;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
          cVar2 = '\x03';
        }
      }
    }
    else {
      iVar5 = sub_0800A2CC(iVar5 + 0x1400,*(int *)(param_1 + 0x58) + 0xa00);
      if (iVar5 < *(int *)(param_1 + 0x58)) {
        cVar2 = '\x03';
      }
      else {
        iVar5 = *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x54) = iVar5 + 0x300;
        iVar5 = sub_08009E14(iVar5 + 0x1700,*(int *)(param_1 + 0x58));
        if (iVar5 == 0) {
          iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
          if (iVar5 < 1) {
            iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
          }
          if (0x2fff < iVar5) {
LAB_0808ea1c:
            iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
            iVar6 = 0x3000;
            goto LAB_0808ea26;
          }
          goto LAB_0808ea30;
        }
        *(undefined *)(param_1 + 0x13) = 1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
        cVar2 = '\x03';
      }
    }
LAB_0808ea2e:
    *(char *)(param_1 + 0xe) = cVar2;
  }
LAB_0808ea30:
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0x54) - iVar6;
  if (iVar5 < 1) {
    iVar5 = iVar6 - *(int *)(param_1 + 0x54);
  }
  if (0xa000 < iVar5) {
    iVar5 = *(int *)(param_1 + 0xb4);
    if (iVar5 < *(int *)(param_1 + 0x54)) {
      iVar5 = iVar5 + 0xa000;
    }
    else {
      iVar5 = iVar5 + -0xa000;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    if (iVar5 < 1) {
      if (0x2fff < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) goto LAB_0808eaa8;
LAB_0808eaa0:
      uVar1 = 2;
    }
    else {
      if (iVar5 < 0x3000) goto LAB_0808eaa0;
LAB_0808eaa8:
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
  }
  if ((*(char *)(param_1 + 0xe) == '\x02') && (*(char *)(param_1 + 0x71) == '\0')) {
    sub_08017700(param_1,0x7500);
  }
  sub_080177F4(param_1);
switchD_0808e72c_caseD_6:
  return in_lr;
}

