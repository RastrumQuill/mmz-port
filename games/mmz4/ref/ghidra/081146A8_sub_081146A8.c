// sub_081146A8 at 0x081146A8 (thumb)

undefined4 sub_081146A8(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    goto switchD_081146be_caseD_0;
  case 1:
    goto switchD_081146be_caseD_1;
  case 2:
    if (DAT_0202f38a == 0) {
      sub_08112080(param_1,0x400);
      return in_lr;
    }
    goto LAB_08114a04;
  case 3:
    if (DAT_0202f38a == 0) {
      DAT_0202ea64 = 2;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      goto switchD_081146be_caseD_4;
    }
LAB_08114a04:
    DAT_0202f388 = DAT_0202f388 | 2;
    return in_lr;
  case 4:
switchD_081146be_caseD_4:
    if (DAT_0202ea64 != 0) {
      return in_lr;
    }
    sub_081123F8(param_1);
    sub_0800243C();
    sub_08112080(param_1,2);
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
    goto LAB_08114be4;
  default:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 0;
    goto switchD_081146be_caseD_0;
  case 0x20:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    if ((DAT_0202e8b5 & 1) == 0) {
      sub_0810DF3C(0x238);
    }
    else {
      sub_0810DF3C(0x23c);
    }
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x21:
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sVar2 = sub_0811742C(param_1);
    if (sVar2 == 0) {
      return in_lr;
    }
    if (sVar2 == 1) {
      if ((DAT_0202e8b5 & 1) == 0) {
        sub_0810DFA8(0x239);
      }
      else {
        sub_0810DFA8(0x23d);
      }
      sub_0803A6E8(*(undefined4 *)(param_1 + 0x63a8),2);
      DAT_0202e8b6 = DAT_0202e8b6 | 4;
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    }
    else {
      if (sVar2 != -1) {
        return in_lr;
      }
      if ((DAT_0202e8b5 & 1) == 0) {
        sub_0810DFA8(0x23a);
        DAT_0202e8b5 = DAT_0202e8b5 | 1;
      }
      else {
        sub_0810DFA8(0x23e);
      }
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 0x22:
    break;
  }
  if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
    return in_lr;
  }
  goto LAB_08114be4;
switchD_081146be_caseD_0:
  sub_0810DF3C(0x28);
  *(undefined2 *)(param_1 + 10) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_081146be_caseD_1:
  if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
    return in_lr;
  }
  sVar2 = sub_0811742C(param_1);
  if (sVar2 == 0) {
    return in_lr;
  }
  if (sVar2 < 1) {
    if (sVar2 == -1) {
      if ((DAT_0202e8b5 & 1) == 0) {
        if ((DAT_0202e8b7 & 8) == 0) {
          if ((DAT_0202e8b7 & 4) == 0) {
            if ((DAT_0202e8b7 & 2) == 0) {
              if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
                if ((DAT_0202e8b6 & 0x40) == 0) {
                  if (((DAT_0202e8b6 & 0x20) == 0) && ((DAT_0202e8b6 & 0x10) == 0)) {
                    if ((DAT_0202e8b6 & 8) == 0) {
                      if ((DAT_0202e8b6 & 4) == 0) {
                        if ((DAT_0202e8b6 & 2) != 0) {
                          uVar3 = 0x237;
                          goto LAB_081149a0;
                        }
                        if ((DAT_0202e8b6 & 1) == 0) {
                          if ((DAT_0202e8b5 & 0x80) == 0) {
                            sub_0810DFA8(0x231);
                          }
                          else {
                            sub_0810DFA8(0x233);
                          }
                        }
                        else {
                          sub_0810DFA8(0x235);
                        }
                      }
                      else {
                        sub_0810DFA8(0x23f);
                      }
                    }
                    else {
                      sub_0810DFA8(0x241);
                    }
                  }
                  else {
                    sub_0810DFA8(0x243);
                  }
                }
                else {
                  sub_0810DFA8(0x247);
                }
              }
              else {
                sub_0810DFA8(0x249);
              }
            }
            else {
              sub_0810DFA8(0x24d);
            }
          }
          else {
            sub_0810DFA8(0x24f);
          }
        }
        else {
          sub_0810DFA8(0x251);
        }
        DAT_0202e8b5 = DAT_0202e8b5 | 1;
      }
      else if ((DAT_0202e8b7 & 8) == 0) {
        if ((DAT_0202e8b7 & 4) == 0) {
          if ((DAT_0202e8b7 & 2) == 0) {
            if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
              if ((DAT_0202e8b6 & 0x40) == 0) {
                if (((DAT_0202e8b6 & 0x20) == 0) && ((DAT_0202e8b6 & 0x10) == 0)) {
                  if ((DAT_0202e8b6 & 8) == 0) {
                    if ((DAT_0202e8b6 & 4) == 0) {
                      if ((DAT_0202e8b6 & 2) != 0) {
                        uVar3 = 0x23b;
LAB_081149a0:
                        sub_0810DFA8(uVar3);
                        *(undefined *)(param_1 + 3) = 0x20;
                        return in_lr;
                      }
                      if ((DAT_0202e8b6 & 1) == 0) {
                        if ((DAT_0202e8b5 & 0x80) == 0) {
                          sub_0810DFA8(0x232);
                        }
                        else {
                          sub_0810DFA8(0x234);
                        }
                      }
                      else {
                        sub_0810DFA8(0x236);
                      }
                    }
                    else {
                      sub_0810DFA8(0x240);
                    }
                  }
                  else {
                    sub_0810DFA8(0x242);
                  }
                }
                else {
                  sub_0810DFA8(0x244);
                }
              }
              else {
                sub_0810DFA8(0x248);
              }
            }
            else {
              sub_0810DFA8(0x24a);
            }
          }
          else {
            sub_0810DFA8(0x24e);
          }
        }
        else {
          sub_0810DFA8(0x250);
        }
      }
      else {
        sub_0810DFA8(0x252);
      }
LAB_08114be4:
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
  return in_lr;
}

