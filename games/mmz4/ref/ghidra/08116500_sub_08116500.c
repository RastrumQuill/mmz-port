// sub_08116500 at 0x08116500 (thumb)

undefined4 sub_08116500(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    goto switchD_08116512_caseD_0;
  case 1:
    goto switchD_08116512_caseD_1;
  case 2:
    if (DAT_0202f38a != 0) {
LAB_081169dc:
      DAT_0202f388 = DAT_0202f388 | 2;
      return in_lr;
    }
    goto LAB_08116968;
  case 3:
    if ((DAT_0202e8b5 & 0x10) == 0) {
      if ((DAT_0202e8b6 & 8) != 0) {
        uVar3 = 0x2fa;
LAB_08116684:
        sub_0810DED0(uVar3);
        DAT_0202e8b5 = DAT_0202e8b5 | 0x10;
        *(undefined *)(param_1 + 3) = 0x10;
        return in_lr;
      }
      if ((DAT_0202e8b6 & 4) != 0) {
        uVar3 = 0x2f8;
        goto LAB_08116684;
      }
      sub_0810DFA8(0x2f0);
    }
    else {
      if ((DAT_0202e8b6 & 8) != 0) {
        uVar3 = 0x2fb;
LAB_081166ba:
        sub_0810DED0(uVar3);
        *(undefined *)(param_1 + 3) = 0x10;
        return in_lr;
      }
      if ((DAT_0202e8b6 & 4) != 0) {
        uVar3 = 0x2f9;
        goto LAB_081166ba;
      }
      sub_0810DFA8(0x2f4);
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    if ((DAT_0202e8b5 & 0x10) == 0) {
      sub_0810DF3C(0x2f1);
    }
    else {
      sub_0810DF3C(0x2f5);
    }
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116512_caseD_5:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar2 = sub_0811742C(param_1);
    if (sVar2 == 0) {
      return in_lr;
    }
    if (sVar2 == 1) {
      if ((DAT_0202e8b5 & 0x10) == 0) {
        sub_0810DFA8(0x2f2);
        DAT_0202e8b5 = DAT_0202e8b5 | 0x10;
      }
      else {
        sub_0810DFA8(0x2f6);
      }
      sub_0803A6E8(*(undefined4 *)(param_1 + 0x63a8),1);
      DAT_0202e8b6 = DAT_0202e8b6 | 4;
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    }
    else {
      if (sVar2 != -1) {
        return in_lr;
      }
      if ((DAT_0202e8b5 & 0x10) == 0) {
        sub_0810DFA8(0x2f3);
        DAT_0202e8b5 = DAT_0202e8b5 | 0x10;
      }
      else {
        sub_0810DFA8(0x2f7);
      }
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116512_caseD_6:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = 0;
LAB_08116968:
    sub_08112080(param_1,0x400);
    return in_lr;
  case 5:
    goto switchD_08116512_caseD_5;
  case 6:
    goto switchD_08116512_caseD_6;
  default:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 0;
switchD_08116512_caseD_0:
    sub_0810DF3C(0);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116512_caseD_1:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar2 = sub_0811742C(param_1);
    if (sVar2 == 0) {
      return in_lr;
    }
    if (sVar2 == 1) {
      cVar1 = '\x03';
    }
    else if (sVar2 == -1) {
LAB_08116b66:
      cVar1 = ' ';
    }
    else {
      cVar1 = '\x02';
    }
LAB_08116b68:
    *(char *)(param_1 + 3) = cVar1;
    return in_lr;
  case 0x10:
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = 0;
    goto LAB_08116968;
  case 0x20:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x21:
    sub_0810DF3C(1);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116512_caseD_22:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar2 = sub_0811742C(param_1);
    if (sVar2 == 0) {
      return in_lr;
    }
    if (sVar2 == 1) {
      sub_0810DF3C(2);
      *(undefined2 *)(param_1 + 10) = 0;
      cVar1 = '%';
      goto LAB_08116b68;
    }
    if (sVar2 != -1) {
      cVar1 = '\x02';
      goto LAB_08116b68;
    }
    if ((DAT_0202e8b4 & 0x80) == 0) {
      if ((DAT_0202e8b6 & 8) == 0) {
        if ((DAT_0202e8b6 & 4) == 0) {
          sub_0810DFA8(0x208);
LAB_08116920:
          cVar1 = '0';
          goto LAB_08116b68;
        }
        uVar3 = 0x210;
      }
      else {
        uVar3 = 0x212;
      }
      sub_0810DFA8(uVar3);
      DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
    }
    else if ((DAT_0202e8b6 & 8) == 0) {
      if ((DAT_0202e8b6 & 4) == 0) {
        sub_0810DFA8(0x20c);
        goto LAB_08116920;
      }
      sub_0810DFA8(0x211);
    }
    else {
      sub_0810DFA8(0x213);
    }
    goto LAB_08116b66;
  case 0x22:
    goto switchD_08116512_caseD_22;
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
      goto LAB_08116968;
    }
    sub_0810DF3C(2);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116512_caseD_25:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    uVar4 = sub_081174EC(param_1);
    if ((uVar4 & 0xffff) == 0) {
      return in_lr;
    }
    if ((uVar4 & 0xffff) * 0x10000 - 0x10000 >> 0x10 < 3) {
      *(char *)(param_1 + 0xdcd) = (char)(uVar4 & 0xffff) + -1;
      cVar1 = *(char *)(param_1 + 3) + '\x01';
      goto LAB_08116b68;
    }
    goto LAB_08116b66;
  case 0x25:
    goto switchD_08116512_caseD_25;
  case 0x26:
    if (DAT_0202f38a != 0) goto LAB_081169dc;
    *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
    if (uVar4 != 0xffffffff) {
      sub_08002A98(uVar4 & 0xffff);
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
    *(undefined4 *)(param_1 + 0xdd4) = 0x23090400;
    sub_08112080(param_1,5);
    return in_lr;
  case 0x30:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    if ((DAT_0202e8b4 & 0x80) == 0) {
      sub_0810DF3C(0x209);
    }
    else {
      sub_0810DF3C(0x20d);
    }
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x31:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar2 = sub_0811742C(param_1);
    if (sVar2 == 0) {
      return in_lr;
    }
    if (sVar2 == 1) {
      if ((DAT_0202e8b4 & 0x80) == 0) {
        sub_0810DFA8(0x20a);
        DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
      }
      else {
        sub_0810DFA8(0x20e);
      }
      sub_0803A6E8(*(undefined4 *)(param_1 + 0x63a8),0);
      DAT_0202e8b6 = DAT_0202e8b6 | 4;
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    }
    else {
      if (sVar2 != -1) {
        return in_lr;
      }
      if ((DAT_0202e8b4 & 0x80) == 0) {
        sub_0810DFA8(0x20b);
        DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
      }
      else {
        sub_0810DFA8(0x20f);
      }
    }
    goto LAB_08116b66;
  }
}

