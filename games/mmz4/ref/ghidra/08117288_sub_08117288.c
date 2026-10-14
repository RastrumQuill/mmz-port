// sub_08117288 at 0x08117288 (thumb)

undefined4 sub_08117288(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    sub_0810DFA8(0xb1);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      sub_0810DF3C(0xb2);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_0811729c_caseD_2:
      if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) &&
         (sVar1 = sub_0811742C(param_1), sVar1 != 0)) {
        if (sVar1 == 1) {
          *(undefined *)(param_1 + 3) = 0x10;
        }
        else if (sVar1 == -1) {
LAB_08117360:
          *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
        }
      }
    }
    break;
  case 2:
    goto switchD_0811729c_caseD_2;
  case 3:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DFA8(0xb4);
    goto LAB_08117360;
  case 4:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202dbf8 = 0;
      sub_08112080(param_1,0x400);
    }
    break;
  case 0x10:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    sub_080275F0(&DAT_0202e920,&DAT_0884d39c);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x11:
    if ((DAT_0202e922 & 1) == 0) {
      puVar2 = (undefined2 *)(param_1 + 0x6260);
      *puVar2 = 0xe;
      sub_0801E918(param_1 + 0x6270);
      sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
      sub_0801E9AC(*(undefined *)puVar2,param_1 + 0x6300);
      sub_0801F124(*(undefined *)puVar2);
      sub_08112080(param_1,0x300);
    }
  }
  return in_lr;
}

