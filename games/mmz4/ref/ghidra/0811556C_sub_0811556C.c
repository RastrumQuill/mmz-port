// sub_0811556C at 0x0811556C (thumb)

undefined4 sub_0811556C(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    sub_0810DFA8(0x65);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      sub_0810DF3C(4);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115580_caseD_2:
      if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) &&
         (sVar2 = sub_0811742C(param_1), sVar2 != 0)) {
        if (sVar2 == 1) {
          *(undefined *)(param_1 + 3) = 0x10;
        }
        else if (sVar2 == -1) {
LAB_08115658:
          *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_08115580_caseD_2;
  case 3:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DFA8(6);
    goto LAB_08115658;
  case 4:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202dbf8 = 0;
      sub_08112080(param_1,0x400);
    }
    break;
  case 0x10:
    if (DAT_0202f38a != 0) {
      DAT_0202f388 = DAT_0202f388 | 2;
      return in_lr;
    }
    *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
    if (uVar1 != 0xffffffff) {
      sub_08002A98(uVar1 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    DAT_0202ea64 = 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x11:
    if (DAT_0202ea64 == 0) {
      sub_081123F8(param_1);
      sub_0800243C();
      *(undefined *)(param_1 + 0xdcd) = 0;
      *(undefined4 *)(param_1 + 0xdd4) = 0x12040400;
      sub_08112080(param_1,5);
    }
    break;
  case 0x12:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x13:
    if (DAT_0202ea64 == 0) {
      if (*(char *)(param_1 + 0xdd8) == '\0') {
        sub_0810DFA8(6);
      }
      else {
        sub_0810DFA8(5);
      }
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115580_caseD_14:
      if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
        DAT_0202f388 = DAT_0202f388 | 2;
        DAT_0202dbf8 = 0;
        sub_08112080(param_1,0x400);
      }
    }
    break;
  case 0x14:
    goto switchD_08115580_caseD_14;
  }
  return in_lr;
}

