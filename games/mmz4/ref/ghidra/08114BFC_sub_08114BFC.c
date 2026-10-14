// sub_08114BFC at 0x08114BFC (thumb)

undefined4 sub_08114BFC(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 in_lr;
  
  uVar2 = DAT_0202ea78;
  switch(*(undefined *)(param_1 + 3)) {
  case 1:
    goto switchD_08114c0e_caseD_1;
  case 2:
    if (DAT_0202f38a != 0) {
LAB_081150f2:
      DAT_0202f388 = DAT_0202f388 | 2;
      return in_lr;
    }
    goto LAB_0811507c;
  case 3:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DED0(0x2a);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (DAT_0202f38a == 0) {
      DAT_0202f388 = DAT_0202f388 | 2;
      DAT_0202ea64 = 2;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08114c0e_caseD_5:
      if (DAT_0202ea64 == 0) {
        sub_081123F8(param_1);
        sub_0800243C();
        *(undefined *)(param_1 + 0xdd3) = 0;
        sub_08112080(param_1,3);
      }
    }
    break;
  case 5:
    goto switchD_08114c0e_caseD_5;
  case 6:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 7:
    if (DAT_0202ea64 == 0) {
      if (*(char *)(param_1 + 0xdce) == '\0') {
        *(undefined *)(param_1 + 3) = 0xff;
      }
      else {
        if (((DAT_0202e8b6 & 0x80) == 0) && (*(char *)(param_1 + 0xdce) == '\v')) {
          sub_080275F0(&DAT_0202e920,&DAT_0884dd8c);
        }
        else if ((*(uint *)(DAT_0202e8e0 + 0x10) & 1 << (*(byte *)(param_1 + 0xdce) + 1 & 0xff)) ==
                 0) {
          sub_080275F0(&DAT_0202e920,&DAT_0884d39c);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_0884d5e4);
        }
LAB_081150ce:
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      }
    }
    break;
  case 8:
    if ((DAT_0202e922 & 1) != 0) {
      return in_lr;
    }
    psVar4 = (short *)(param_1 + 0x6260);
    *psVar4 = *(byte *)(param_1 + 0xdce) + 1;
    sub_0801E918(param_1 + 0x6270);
    sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
    sub_0801E9AC(*(undefined *)psVar4,param_1 + 0x6300);
    sub_0801F124(*(undefined *)psVar4);
    uVar3 = 0x300;
    goto LAB_08115080;
  default:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 0;
  case 0:
    sub_0810DF3C(0);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08114c0e_caseD_1:
    if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar1 = sub_0811742C(param_1), sVar1 != 0))
    {
      if (sVar1 == 1) {
        *(undefined *)(param_1 + 3) = 3;
      }
      else if (sVar1 == -1) {
        *(undefined *)(param_1 + 3) = 0x11;
      }
      else {
LAB_08115038:
        *(undefined *)(param_1 + 3) = 2;
      }
    }
    break;
  case 0x10:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x11:
    sub_0810DF3C(1);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08114c0e_caseD_12:
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
      *(undefined *)(param_1 + 3) = 0x15;
      return in_lr;
    }
    if (sVar1 == -1) {
      if ((DAT_0202e8b4 & 0x80) == 0) {
        if ((DAT_0202e8b7 & 8) == 0) {
          if ((DAT_0202e8b7 & 4) == 0) {
            if ((DAT_0202e8b7 & 2) == 0) {
              if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
                if ((DAT_0202e8b6 & 0x40) == 0) {
                  if ((DAT_0202e8b6 & 0x20) == 0) {
                    if ((DAT_0202e8b6 & 0x10) != 0) {
                      sub_0810DFA8(0x214);
                    }
                  }
                  else {
                    sub_0810DFA8(0x214);
                  }
                }
                else {
                  sub_0810DFA8(0x218);
                }
              }
              else {
                sub_0810DFA8(0x21a);
              }
            }
            else {
              sub_0810DFA8(0x21e);
            }
          }
          else {
            sub_0810DFA8(0x220);
          }
        }
        else {
          sub_0810DFA8(0x222);
        }
        DAT_0202e8b4 = DAT_0202e8b4 | 0x80;
      }
      else if ((DAT_0202e8b7 & 8) == 0) {
        if ((DAT_0202e8b7 & 4) == 0) {
          if ((DAT_0202e8b7 & 2) == 0) {
            if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
              if ((DAT_0202e8b6 & 0x40) == 0) {
                if ((DAT_0202e8b6 & 0x20) == 0) {
                  if ((DAT_0202e8b6 & 0x10) != 0) {
                    sub_0810DFA8(0x215);
                  }
                }
                else {
                  sub_0810DFA8(0x215);
                }
              }
              else {
                sub_0810DFA8(0x219);
              }
            }
            else {
              sub_0810DFA8(0x21b);
            }
          }
          else {
            sub_0810DFA8(0x21f);
          }
        }
        else {
          sub_0810DFA8(0x221);
        }
      }
      else {
        sub_0810DFA8(0x223);
      }
LAB_081150e4:
      *(undefined *)(param_1 + 3) = 0x10;
      return in_lr;
    }
    goto LAB_08115038;
  case 0x12:
    goto switchD_08114c0e_caseD_12;
  case 0x13:
    sub_081124AC(param_1);
    sub_08002464();
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x14:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xdd8) != '\0') {
      DAT_0202f388 = DAT_0202f388 | 2;
LAB_0811507c:
      uVar3 = 0x400;
LAB_08115080:
      sub_08112080(param_1,uVar3);
      return in_lr;
    }
    sub_0810DF3C(2);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_08114c0e_caseD_15:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    uVar2 = sub_081174EC(param_1);
    if ((uVar2 & 0xffff) == 0) {
      return in_lr;
    }
    if (2 < (uVar2 & 0xffff) * 0x10000 - 0x10000 >> 0x10) goto LAB_081150e4;
    *(char *)(param_1 + 0xdcd) = (char)(uVar2 & 0xffff) + -1;
    goto LAB_081150ce;
  case 0x15:
    goto switchD_08114c0e_caseD_15;
  case 0x16:
    if (DAT_0202f38a != 0) goto LAB_081150f2;
    *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
    if (uVar2 != 0xffffffff) {
      sub_08002A98(uVar2 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    DAT_0202ea64 = 2;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x17:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    sub_081123F8(param_1);
    sub_0800243C();
    *(undefined4 *)(param_1 + 0xdd4) = 0x13020400;
    sub_08112080(param_1,5);
    return in_lr;
  }
  return in_lr;
}

