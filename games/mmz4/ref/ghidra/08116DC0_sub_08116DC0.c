// sub_08116DC0 at 0x08116DC0 (thumb)

undefined4 sub_08116DC0(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    sub_0810DFA8(3);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      sub_0810DF3C(4);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116dd4_caseD_2:
      if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) &&
         (sVar2 = sub_0811742C(param_1), sVar2 != 0)) {
        if (sVar2 == 1) {
          *(undefined *)(param_1 + 3) = 0x10;
        }
        else if (sVar2 == -1) {
          *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_08116dd4_caseD_2;
  case 3:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      sub_0810DFA8(0xf);
      *(undefined *)(param_1 + 3) = 0x14;
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
      *(undefined4 *)(param_1 + 0xdd4) = 0x120b0400;
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
        sub_0810DFA8(0xf);
      }
      else {
        sub_0810DFA8(0xe);
      }
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116dd4_caseD_14:
      if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
        DAT_0202f388 = DAT_0202f388 | 2;
        sub_080275F0(&DAT_0202e920,&DAT_0884d39c);
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116dd4_caseD_15:
        if ((DAT_0202e922 & 1) == 0) {
          puVar3 = (undefined2 *)(param_1 + 0x6260);
          *puVar3 = 0xb;
          sub_0801E918(param_1 + 0x6270);
          sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
          sub_0801E9AC(*(undefined *)puVar3,param_1 + 0x6300);
          sub_0801F124(*(undefined *)puVar3);
          sub_08112080(param_1,0x300);
        }
      }
    }
    break;
  case 0x14:
    goto switchD_08116dd4_caseD_14;
  case 0x15:
    goto switchD_08116dd4_caseD_15;
  }
  return in_lr;
}

