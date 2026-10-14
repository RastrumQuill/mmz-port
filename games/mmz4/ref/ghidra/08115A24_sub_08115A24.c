// sub_08115A24 at 0x08115A24 (thumb)

undefined4 sub_08115A24(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 2:
    sub_0810DFA8(0x1306);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 3:
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202dbf8 = 0;
      sub_08112080(param_1,0x400);
    }
    break;
  default:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 0;
  case 0:
    sub_0810DF3C(0x1303);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 1:
    if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar1 = sub_0811742C(param_1), sVar1 != 0))
    {
      if (sVar1 == 1) {
        *(undefined *)(param_1 + 3) = 0x10;
      }
      else if (sVar1 == -1) {
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
switchD_08115a38_caseD_12:
      if (*(short *)(param_1 + 8) == 0x3c) {
        local_18 = 0x6c000;
        local_14 = 0x41300;
        sub_080D46EC(0,&local_18);
      }
      sVar1 = *(short *)(param_1 + 8) + -1;
      *(short *)(param_1 + 8) = sVar1;
      if (sVar1 == 0) {
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      }
    }
    break;
  case 0x12:
    goto switchD_08115a38_caseD_12;
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
    if ((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) {
      DAT_0202f388 = DAT_0202f388 | 2;
      sub_080275F0(&DAT_0202e920,&DAT_0884d39c);
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08115a38_caseD_15:
      if ((DAT_0202e922 & 1) == 0) {
        puVar2 = (undefined2 *)(param_1 + 0x6260);
        *puVar2 = 2;
        sub_0801E918(param_1 + 0x6270);
        sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
        sub_0801E9AC(*(undefined *)puVar2,param_1 + 0x6300);
        sub_0801F124(*(undefined *)puVar2);
        sub_08112080(param_1,0x300);
      }
    }
    break;
  case 0x15:
    goto switchD_08115a38_caseD_15;
  }
  return in_lr;
}

