// sub_0811516C at 0x0811516C (thumb)

undefined4 sub_0811516C(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    goto switchD_0811517e_caseD_0;
  case 1:
    goto switchD_0811517e_caseD_1;
  case 2:
    if (DAT_0202f38a == 0) {
      sub_08112080(param_1,0x400);
      return in_lr;
    }
    goto LAB_081153c8;
  case 3:
    if (DAT_0202f38a == 0) {
      DAT_0202ea64 = 2;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      goto switchD_0811517e_caseD_4;
    }
LAB_081153c8:
    DAT_0202f388 = DAT_0202f388 | 2;
    return in_lr;
  case 4:
switchD_0811517e_caseD_4:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    sub_081123F8(param_1);
    sub_0800243C();
    sub_08112080(param_1,4);
    if (DAT_0202ea78 == 0x95) {
      return in_lr;
    }
    if (DAT_0202ea78 != 0xffffffff) {
      sub_08002A98(DAT_0202ea78 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    sub_08002A88(0x95);
    DAT_0202ea78 = 0x95;
    return in_lr;
  case 5:
    sub_081124AC(param_1);
    sub_08002464();
    if (DAT_0202ea78 != 0x93) {
      if (DAT_0202ea78 != 0xffffffff) {
        sub_08002A98(DAT_0202ea78 & 0xffff);
        DAT_0202ea78 = 0xffffffff;
      }
      sub_08002A88(0x93);
      DAT_0202ea78 = 0x93;
    }
    DAT_0202ea64 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 6:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    goto LAB_0811555e;
  case 0x10:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DF3C(0x278);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x11:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar2 = sub_0811742C(param_1);
    if (sVar2 == 0) {
      return in_lr;
    }
    if (sVar2 != 1) {
      if (sVar2 != -1) {
        return in_lr;
      }
      sub_0810DFA8(0x27a);
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_0811517e_caseD_12:
      if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
        return in_lr;
      }
      sub_0810DF3C(0x27b);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_0811517e_caseD_13:
      if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
        return in_lr;
      }
      sVar2 = sub_0811742C(param_1);
      if (sVar2 == 0) {
        return in_lr;
      }
      if (sVar2 == 1) {
        sub_0810DFA8(0x27c);
        goto LAB_0811555e;
      }
      if (sVar2 != -1) {
        return in_lr;
      }
      uVar3 = 0x27d;
      goto LAB_0811555a;
    }
    sub_0810DFA8(0x279);
    goto LAB_0811555e;
  case 0x12:
    goto switchD_0811517e_caseD_12;
  case 0x13:
    goto switchD_0811517e_caseD_13;
  }
  if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
    return in_lr;
  }
  *(undefined *)(param_1 + 3) = 0;
switchD_0811517e_caseD_0:
  sub_0810DF3C(0x29);
  *(undefined2 *)(param_1 + 10) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_0811517e_caseD_1:
  if (((DAT_0202f38a == 0) || (DAT_0202f38a == 4)) && (sVar2 = sub_0811742C(param_1), sVar2 != 0)) {
    if (sVar2 < 1) {
      if (sVar2 == -1) {
        if ((DAT_0202e8b5 & 2) == 0) {
          if ((DAT_0202e8b7 & 8) == 0) {
            if ((DAT_0202e8b7 & 4) == 0) {
              if ((DAT_0202e8b7 & 2) == 0) {
                if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
                  if ((DAT_0202e8b6 & 0x40) == 0) {
                    if ((DAT_0202e8b6 & 0x20) == 0) {
                      if ((DAT_0202e8b6 & 0x10) == 0) {
                        sub_0810DFA8(0x276);
                        DAT_0202e8b5 = DAT_0202e8b5 | 2;
                        *(undefined *)(param_1 + 3) = 0x10;
                        return in_lr;
                      }
                      sub_0810DFA8(0x27e);
                    }
                    else {
                      sub_0810DFA8(0x27e);
                    }
                  }
                  else {
                    sub_0810DFA8(0x282);
                  }
                }
                else {
                  sub_0810DFA8(0x284);
                }
              }
              else {
                sub_0810DFA8(0x288);
              }
            }
            else {
              sub_0810DFA8(0x28a);
            }
          }
          else {
            sub_0810DFA8(0x28c);
          }
          DAT_0202e8b5 = DAT_0202e8b5 | 2;
        }
        else if ((DAT_0202e8b7 & 8) == 0) {
          if ((DAT_0202e8b7 & 4) == 0) {
            if ((DAT_0202e8b7 & 2) == 0) {
              if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
                if ((DAT_0202e8b6 & 0x40) == 0) {
                  if ((DAT_0202e8b6 & 0x20) == 0) {
                    if ((DAT_0202e8b6 & 0x10) == 0) {
                      sub_0810DFA8(0x277);
                      *(undefined *)(param_1 + 3) = 0x10;
                      return in_lr;
                    }
                    uVar3 = 0x27f;
LAB_0811555a:
                    sub_0810DFA8(uVar3);
                  }
                  else {
                    sub_0810DFA8(0x27f);
                  }
                }
                else {
                  sub_0810DFA8(0x283);
                }
              }
              else {
                sub_0810DFA8(0x285);
              }
            }
            else {
              sub_0810DFA8(0x289);
            }
          }
          else {
            sub_0810DFA8(0x28b);
          }
        }
        else {
          sub_0810DFA8(0x28d);
        }
LAB_0811555e:
        uVar1 = 0xff;
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 3) = uVar1;
  }
  return in_lr;
}

