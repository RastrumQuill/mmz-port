// sub_0811579C at 0x0811579C (thumb)

undefined4 sub_0811579C(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    goto switchD_081157ae_caseD_0;
  case 1:
    goto switchD_081157ae_caseD_1;
  case 2:
    if (DAT_0202f38a != 0) {
LAB_08115974:
      DAT_0202f388 = DAT_0202f388 | 2;
      return in_lr;
    }
    goto LAB_08115900;
  default:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 0;
    goto switchD_081157ae_caseD_0;
  case 0x10:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x11:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
  case 0x12:
    break;
  case 0x13:
    goto switchD_081157ae_caseD_13;
  case 0x14:
    if (DAT_0202f38a != 0) goto LAB_08115974;
    *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
    if (uVar3 != 0xffffffff) {
      sub_08002A98(uVar3 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    DAT_0202ea64 = 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x15:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    sub_081123F8(param_1);
    sub_0800243C();
    *(undefined4 *)(param_1 + 0xdd4) = 0x10050400;
    sub_08112080(param_1,5);
    return in_lr;
  case 0x16:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x17:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    goto LAB_08115a16;
  }
  if (*(char *)(param_1 + 0xdd8) != '\0') {
    DAT_0202f388 = DAT_0202f388 | 2;
LAB_08115900:
    sub_08112080(param_1,0x400);
    return in_lr;
  }
  sub_0810DF3C(2);
  *(undefined2 *)(param_1 + 10) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_081157ae_caseD_13:
  if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
    return in_lr;
  }
  uVar3 = sub_081174EC(param_1);
  if ((uVar3 & 0xffff) == 0) {
    return in_lr;
  }
  if ((uVar3 & 0xffff) * 0x10000 - 0x10000 >> 0x10 < 3) {
    *(char *)(param_1 + 0xdcd) = (char)(uVar3 & 0xffff) + -1;
    cVar1 = *(char *)(param_1 + 3) + '\x01';
  }
  else {
    cVar1 = '\0';
  }
  goto LAB_08115a18;
switchD_081157ae_caseD_0:
  sub_0810DF3C(1);
  *(undefined2 *)(param_1 + 10) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_081157ae_caseD_1:
  if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar2 = sub_0811742C(param_1), sVar2 != 0)) {
    if (sVar2 == 1) {
      *(undefined *)(param_1 + 3) = 0x12;
      *(undefined *)(param_1 + 0xdd8) = 0;
    }
    else {
      if (sVar2 == -1) {
        if ((DAT_0202e8b4 & 0x80) == 0) {
          sub_0810DFA8(0x200);
          DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
        }
        else {
          sub_0810DFA8(0x201);
        }
LAB_08115a16:
        cVar1 = -1;
      }
      else {
        cVar1 = *(char *)(param_1 + 3) + '\x01';
      }
LAB_08115a18:
      *(char *)(param_1 + 3) = cVar1;
    }
  }
  return in_lr;
}

