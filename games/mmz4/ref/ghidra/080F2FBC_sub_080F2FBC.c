// sub_080F2FBC at 0x080F2FBC (thumb)

undefined4 sub_080F2FBC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080f2fd6_caseD_1;
  case 2:
    goto switchD_080f2fd6_caseD_2;
  case 3:
    sub_0801CFF0(param_1);
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
    if (((*(byte *)(DAT_0202edac + 2) & 0xf) >> 2 & 1) == 0) {
      sub_081089D4(10);
    }
    goto LAB_080f3580;
  default:
    goto switchD_080f2fd6_caseD_4;
  case 0x20:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    if ((DAT_0202e8b5 & 8) == 0) {
      sub_0810DF3C(0x2c9);
    }
    else {
      sub_0810DF3C(0x2cd);
    }
    DAT_0202f61a = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x21:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    cVar3 = sub_080F35F8(param_1);
    if (cVar3 == '\0') {
      return in_lr;
    }
    if (cVar3 == '\x01') {
      if ((DAT_0202e8b5 & 8) == 0) {
        sub_0810DFA8(0x2ca);
      }
      else {
        sub_0810DFA8(0x2ce);
      }
      sub_0803A6E8(DAT_0202dbf0,5);
      DAT_0202e8b6 = DAT_0202e8b6 | 4;
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    }
    else {
      if (cVar3 != -1) {
        sub_08002B10(3);
        return in_lr;
      }
      if ((DAT_0202e8b5 & 8) == 0) {
        sub_0810DFA8(0x2cb);
        DAT_0202e8b5 = DAT_0202e8b5 | 8;
      }
      else {
        sub_0810DFA8(0x2cf);
      }
    }
    DAT_0202f61a = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x22:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    goto LAB_080f3572;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08866958,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  sub_0801CF00(param_1,0x9b00);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f2fd6_caseD_1:
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
    return in_lr;
  }
  if (DAT_0202dbf8 == '\0') {
    return in_lr;
  }
  if (DAT_03003908 != param_1 + 0x74) {
    return in_lr;
  }
  sub_08006984(0x5a);
  bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if ((DAT_0202e8b5 & 8) == 0) {
    if ((DAT_0202e8b7 & 8) != 0) {
      sub_0810DED0(0x2e2);
LAB_080f3294:
      DAT_0202e8b5 = DAT_0202e8b5 | 8;
      goto LAB_080f33ca;
    }
    if ((DAT_0202e8b7 & 4) != 0) {
      sub_0810DED0(0x2e0);
      goto LAB_080f3294;
    }
    if ((DAT_0202e8b7 & 2) != 0) {
      sub_0810DED0(0x2de);
      goto LAB_080f3294;
    }
    if (((DAT_0202e8b7 & 1) != 0) || ((DAT_0202e8b6 & 0x80) != 0)) {
      sub_0810DED0(0x2da);
      goto LAB_080f3294;
    }
    if ((DAT_0202e8b6 & 0x40) != 0) {
      sub_0810DED0(0x2d8);
      goto LAB_080f3294;
    }
    if ((DAT_0202e8b6 & 0x20) != 0) {
      sub_0810DED0(0x2d4);
      goto LAB_080f3294;
    }
    if ((DAT_0202e8b6 & 0x10) == 0) {
      if ((DAT_0202e8b6 & 8) == 0) {
        if ((DAT_0202e8b6 & 4) == 0) {
          if ((DAT_0202e8b6 & 2) != 0) {
            uVar5 = 0x2c8;
            goto LAB_080f337c;
          }
          if ((DAT_0202e8b6 & 1) == 0) {
            if ((DAT_0202e8b5 & 0x80) == 0) {
              if ((DAT_0202e8b5 & 0x40) == 0) {
                sub_0810DED0(0x2c0);
              }
              else {
                sub_0810DED0(0x2c2);
              }
            }
            else {
              sub_0810DED0(0x2c4);
            }
          }
          else {
            sub_0810DED0(0x2c6);
          }
        }
        else {
          sub_0810DED0(0x2d0);
        }
      }
      else {
        sub_0810DED0(0x2d2);
      }
      goto LAB_080f3294;
    }
    if (((*(byte *)(DAT_0202edac + 2) & 0xf) >> 2 & 1) != 0) {
      sub_0810DED0(0x2d5);
      goto LAB_080f3294;
    }
    sub_0810DED0(0x2d4);
    uVar4 = 3;
  }
  else {
    if ((DAT_0202e8b7 & 8) == 0) {
      if ((DAT_0202e8b7 & 4) == 0) {
        if ((DAT_0202e8b7 & 2) == 0) {
          if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
            if ((DAT_0202e8b6 & 0x40) == 0) {
              if (((DAT_0202e8b6 & 0x20) == 0) && ((DAT_0202e8b6 & 0x10) == 0)) {
                if ((DAT_0202e8b6 & 8) == 0) {
                  if ((DAT_0202e8b6 & 4) == 0) {
                    if ((DAT_0202e8b6 & 2) != 0) {
                      uVar5 = 0x2cc;
LAB_080f337c:
                      sub_0810DFA8(uVar5);
                      *(undefined *)(param_1 + 0xd) = 0x20;
                      return in_lr;
                    }
                    if ((DAT_0202e8b6 & 1) == 0) {
                      if ((DAT_0202e8b5 & 0x80) == 0) {
                        if ((DAT_0202e8b5 & 0x40) == 0) {
                          sub_0810DED0(0x2c1);
                        }
                        else {
                          sub_0810DED0(0x2c3);
                        }
                      }
                      else {
                        sub_0810DED0(0x2c5);
                      }
                    }
                    else {
                      sub_0810DED0(0x2c7);
                    }
                  }
                  else {
                    sub_0810DED0(0x2d1);
                  }
                }
                else {
                  sub_0810DED0(0x2d3);
                }
              }
              else {
                sub_0810DED0(0x2d5);
              }
            }
            else {
              sub_0810DED0(0x2d9);
            }
          }
          else {
            sub_0810DED0(0x2db);
          }
        }
        else {
          sub_0810DED0(0x2df);
        }
      }
      else {
        sub_0810DED0(0x2e1);
      }
    }
    else {
      sub_0810DED0(0x2e3);
    }
LAB_080f33ca:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f2fd6_caseD_2:
    sub_0801CFF0(param_1);
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
LAB_080f3572:
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
LAB_080f3580:
    uVar4 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar4;
switchD_080f2fd6_caseD_4:
  return in_lr;
}

