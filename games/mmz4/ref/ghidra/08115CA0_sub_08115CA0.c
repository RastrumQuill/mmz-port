// sub_08115CA0 at 0x08115CA0 (thumb)

undefined4 sub_08115CA0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 1:
    goto switchD_08115cb4_caseD_1;
  case 2:
    if (DAT_0202f38a != 0) {
LAB_08116136:
      DAT_0202f388 = DAT_0202f388 | 2;
      return in_lr;
    }
    goto LAB_081160c0;
  case 3:
    sub_0810DF3C(0x1303);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar1 = sub_0811742C(param_1), sVar1 != 0))
    {
      if (sVar1 < 1) {
        if (sVar1 == -1) {
          *(undefined *)(param_1 + 3) = 5;
        }
      }
      else {
        *(undefined *)(param_1 + 3) = 0x10;
      }
    }
    break;
  case 5:
    sub_0810DFA8(0x1306);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 6:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202dbf8 = 0;
LAB_081160c0:
      uVar3 = 0x400;
LAB_081160c4:
      sub_08112080(param_1,uVar3);
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
switchD_08115cb4_caseD_1:
    if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar1 = sub_0811742C(param_1), sVar1 != 0))
    {
      if (sVar1 == 1) {
        *(undefined *)(param_1 + 3) = 3;
      }
      else if (sVar1 == -1) {
LAB_08116128:
        *(undefined *)(param_1 + 3) = 0x20;
      }
      else {
LAB_0811607c:
        *(undefined *)(param_1 + 3) = 2;
      }
    }
    break;
  case 0x10:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DFA8(0x1304);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x11:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      *(undefined2 *)(param_1 + 8) = 0x78;
      if (DAT_0202ea78 != 0xffffffff) {
        sub_08002A98(DAT_0202ea78 & 0xffff);
        DAT_0202ea78 = 0xffffffff;
      }
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115cb4_caseD_12:
      if (*(short *)(param_1 + 8) == 0x3c) {
        local_1c = 0x6c000;
        local_18 = 0x41300;
        sub_080D46EC(0,&local_1c);
      }
      sVar1 = *(short *)(param_1 + 8) + -1;
      *(short *)(param_1 + 8) = sVar1;
      if (sVar1 == 0) {
LAB_08116112:
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      }
    }
    break;
  case 0x12:
    goto switchD_08115cb4_caseD_12;
  case 0x13:
    sub_0810DFA8(0x1305);
    if (DAT_0202ea78 != 0x9f) {
      if (DAT_0202ea78 != 0xffffffff) {
        sub_08002A98(DAT_0202ea78 & 0xffff);
        DAT_0202ea78 = 0xffffffff;
      }
      sub_08002A88(0x9f);
      DAT_0202ea78 = 0x9f;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x14:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    sub_080275F0(&DAT_0202e920,&DAT_0884d39c);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115cb4_caseD_15:
    if ((DAT_0202e922 & 1) != 0) {
      return in_lr;
    }
    puVar4 = (undefined2 *)(param_1 + 0x6260);
    *puVar4 = 2;
    sub_0801E918(param_1 + 0x6270);
    sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
    sub_0801E9AC(*(undefined *)puVar4,param_1 + 0x6300);
    sub_0801F124(*(undefined *)puVar4);
    uVar3 = 0x300;
    goto LAB_081160c4;
  case 0x15:
    goto switchD_08115cb4_caseD_15;
  case 0x20:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x21:
    sub_0810DF3C(1);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115cb4_caseD_22:
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
    if (sVar1 != -1) goto LAB_0811607c;
    if ((DAT_0202e8b4 & 0x80) == 0) {
      if ((DAT_0202e8b5 & 0x80) == 0) {
        sub_0810DFA8(0x202);
      }
      else {
        sub_0810DFA8(0x204);
      }
      DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
    }
    else if ((DAT_0202e8b5 & 0x80) == 0) {
      sub_0810DFA8(0x203);
    }
    else {
      sub_0810DFA8(0x205);
    }
    goto LAB_08116128;
  case 0x22:
    goto switchD_08115cb4_caseD_22;
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
      goto LAB_081160c0;
    }
    sub_0810DF3C(2);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115cb4_caseD_25:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    uVar2 = sub_081174EC(param_1);
    if ((uVar2 & 0xffff) == 0) {
      return in_lr;
    }
    if ((uVar2 & 0xffff) * 0x10000 - 0x10000 >> 0x10 < 3) {
      *(char *)(param_1 + 0xdcd) = (char)(uVar2 & 0xffff) + -1;
      goto LAB_08116112;
    }
    goto LAB_08116128;
  case 0x25:
    goto switchD_08115cb4_caseD_25;
  case 0x26:
    if (DAT_0202f38a != 0) goto LAB_08116136;
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
    *(undefined4 *)(param_1 + 0xdd4) = 0x23070400;
    sub_08112080(param_1,5);
    return in_lr;
  }
  return in_lr;
}

