// sub_08116B74 at 0x08116B74 (thumb)

undefined4 sub_08116B74(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    sub_0810DFA8(9);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      sub_0810DF3C(10);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116b88_caseD_2:
      if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) &&
         (sVar1 = sub_0811742C(param_1), sVar1 != 0)) {
        if (sVar1 == 1) {
          *(undefined *)(param_1 + 3) = 4;
        }
        else if (sVar1 == -1) {
LAB_08116cfc:
          sub_0810DFA8(0xb);
          *(undefined *)(param_1 + 3) = 3;
        }
      }
    }
    break;
  case 2:
    goto switchD_08116b88_caseD_2;
  case 3:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202dbf8 = 0;
      sub_08112080(param_1,0x400);
    }
    break;
  case 4:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DED0(0x2a);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 5:
    if (DAT_0202f38a == 0) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202ea64 = 2;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08116b88_caseD_6:
      if (DAT_0202ea64 == 0) {
        sub_081123F8(param_1);
        sub_0800243C();
        *(undefined *)(param_1 + 0xdd3) = 1;
        sub_08112080(param_1,3);
      }
    }
    break;
  case 6:
    goto switchD_08116b88_caseD_6;
  case 7:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 8:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xdce) != '\0') {
      if ((*(uint *)(DAT_0202e8e0 + 0x10) & 1 << (*(byte *)(param_1 + 0xdce) + 1 & 0xff)) == 0) {
        sub_080275F0(&DAT_0202e920,&DAT_0884d39c);
      }
      else {
        sub_080275F0(&DAT_0202e920,&DAT_0884d5e4);
      }
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      return in_lr;
    }
    goto LAB_08116cfc;
  case 9:
    if ((DAT_0202e922 & 1) == 0) {
      psVar2 = (short *)(param_1 + 0x6260);
      *psVar2 = *(byte *)(param_1 + 0xdce) + 1;
      sub_0801E918(param_1 + 0x6270);
      sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
      sub_0801E9AC(*(undefined *)psVar2,param_1 + 0x6300);
      sub_0801F124(*(undefined *)psVar2);
      sub_08112080(param_1,0x300);
    }
  }
  return in_lr;
}

