// sub_081161B4 at 0x081161B4 (thumb)

undefined4 sub_081161B4(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 1:
    goto switchD_081161c6_caseD_1;
  case 2:
    if (DAT_0202f38a != 0) {
LAB_08116486:
      DAT_0202f388 = DAT_0202f388 | 2;
      return in_lr;
    }
    goto LAB_08116410;
  case 3:
    if ((DAT_0202e8b5 & 0x10) == 0) {
      sub_0810DED0(0x2ee);
      DAT_0202e8b5 = DAT_0202e8b5 | 0x10;
    }
    else {
      sub_0810DED0(0x2ef);
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (DAT_0202f38a == 0) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202dbf8 = 0;
LAB_08116410:
      sub_08112080(param_1,0x400);
    }
    break;
  default:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 0;
  case 0:
    sub_0810DF3C(0);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_081161c6_caseD_1:
    if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar1 = sub_0811742C(param_1), sVar1 != 0))
    {
      if (sVar1 == 1) {
        *(undefined *)(param_1 + 3) = 3;
      }
      else if (sVar1 == -1) {
LAB_08116478:
        *(undefined *)(param_1 + 3) = 0x20;
      }
      else {
LAB_081163cc:
        *(undefined *)(param_1 + 3) = 2;
      }
    }
    break;
  case 0x20:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x21:
    sub_0810DF3C(1);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_081161c6_caseD_22:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar1 = sub_0811742C(param_1);
    if (sVar1 == 0) {
      return in_lr;
    }
    if (sVar1 == 1) {
      sub_0810DF3C(2);
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined *)(param_1 + 3) = 0x25;
      return in_lr;
    }
    if (sVar1 != -1) goto LAB_081163cc;
    if ((DAT_0202e8b4 & 0x80) == 0) {
      sub_0810DFA8(0x206);
      DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
    }
    else {
      sub_0810DFA8(0x207);
    }
    goto LAB_08116478;
  case 0x22:
    goto switchD_081161c6_caseD_22;
  case 0x23:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x24:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xdd8) != '\0') {
      DAT_0202f388 = DAT_0202f388 | 2;
      goto LAB_08116410;
    }
    sub_0810DF3C(2);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_081161c6_caseD_25:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    uVar2 = sub_081174EC(param_1);
    if ((uVar2 & 0xffff) == 0) {
      return in_lr;
    }
    if ((uVar2 & 0xffff) * 0x10000 - 0x10000 >> 0x10 < 3) {
      *(char *)(param_1 + 0xdcd) = (char)(uVar2 & 0xffff) + -1;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      return in_lr;
    }
    goto LAB_08116478;
  case 0x25:
    goto switchD_081161c6_caseD_25;
  case 0x26:
    if (DAT_0202f38a != 0) goto LAB_08116486;
    *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
    if (uVar2 != 0xffffffff) {
      sub_08002A98(uVar2 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    DAT_0202ea64 = 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x27:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    sub_081123F8(param_1);
    sub_0800243C();
    *(undefined4 *)(param_1 + 0xdd4) = 0x23080400;
    sub_08112080(param_1,5);
    return in_lr;
  }
  return in_lr;
}

