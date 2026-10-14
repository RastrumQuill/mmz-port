// sub_080F28A8 at 0x080F28A8 (thumb)

undefined4 sub_080F28A8(int param_1)

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
    goto switchD_080f28c2_caseD_1;
  case 2:
    goto switchD_080f28c2_caseD_2;
  case 3:
    sub_0801CFF0(param_1);
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
    sub_0810DEE0(0x102,0x5a);
    sub_08002B10(6);
    goto LAB_080f2fa0;
  default:
    goto switchD_080f28c2_caseD_4;
  case 0x20:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    if ((DAT_0202e8b5 & 4) == 0) {
      sub_0810DF3C(0x299);
    }
    else {
      sub_0810DF3C(0x29d);
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
      if ((DAT_0202e8b5 & 4) == 0) {
        sub_0810DFA8(0x29a);
      }
      else {
        sub_0810DFA8(0x29e);
      }
      sub_0803A6E8(DAT_0202dbf0,4);
      DAT_0202e8b6 = DAT_0202e8b6 | 4;
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    }
    else {
      if (cVar3 != -1) {
        sub_08002B10(3);
        return in_lr;
      }
      if ((DAT_0202e8b5 & 4) == 0) {
        sub_0810DFA8(0x29b);
        DAT_0202e8b5 = DAT_0202e8b5 | 4;
      }
      else {
        sub_0810DFA8(0x29f);
      }
    }
    DAT_0202f61a = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x22:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    goto LAB_080f2f92;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088669b8,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  sub_0801CF00(param_1,0x3300);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f28c2_caseD_1:
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
  sub_08006984(0x5b);
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
  bVar2 = *(byte *)(DAT_0202eda8 + 0x14) & 0xf;
  if ((*(byte *)(DAT_0202eda8 + 0x14) & 0xf) == 0) {
LAB_080f2aa8:
    if ((DAT_0202e8b5 & 4) == 0) {
      if ((DAT_0202e8b7 & 8) == 0) {
        if ((DAT_0202e8b7 & 4) == 0) {
          if ((DAT_0202e8b7 & 2) == 0) {
            if (((DAT_0202e8b7 & 1) == 0) && ((DAT_0202e8b6 & 0x80) == 0)) {
              if ((DAT_0202e8b6 & 0x40) == 0) {
                if ((DAT_0202e8b6 & 0x20) == 0) {
                  if ((DAT_0202e8b6 & 0x10) == 0) {
                    if ((DAT_0202e8b6 & 8) == 0) {
                      if ((DAT_0202e8b6 & 4) == 0) {
                        if ((DAT_0202e8b6 & 2) != 0) {
                          uVar5 = 0x298;
                          goto LAB_080f2dac;
                        }
                        if ((DAT_0202e8b6 & 1) == 0) {
                          if ((DAT_0202e8b5 & 0x80) == 0) {
                            if ((DAT_0202e8b5 & 0x40) == 0) {
                              sub_0810DED0(0x290);
                            }
                            else if ((DAT_0202e8b4 & 4) == 0) {
                              if ((DAT_0202e8b4 & 1) == 0) {
                                if ((DAT_0202e8b4 & 2) == 0) {
                                  sub_0810DED0(0x292);
                                }
                                else {
                                  sub_0810DED0(0x2e6);
                                }
                              }
                              else {
                                sub_0810DED0(0x2ba);
                              }
                            }
                            else {
                              sub_0810DED0(0x2b6);
                            }
                          }
                          else {
                            sub_0810DED0(0x294);
                          }
                        }
                        else {
                          sub_0810DED0(0x296);
                        }
                      }
                      else {
                        sub_0810DED0(0x2a0);
                      }
                    }
                    else if ((DAT_0202e8b4 & 4) == 0) {
                      if ((DAT_0202e8b4 & 1) == 0) {
                        if ((DAT_0202e8b4 & 2) == 0) {
                          sub_0810DED0(0x2a2);
                        }
                        else {
                          sub_0810DED0(0x2e7);
                        }
                      }
                      else {
                        sub_0810DED0(699);
                      }
                    }
                    else {
                      sub_0810DED0(0x2b7);
                    }
                  }
                  else if ((DAT_0202e8b4 & 4) == 0) {
                    if ((DAT_0202e8b4 & 1) == 0) {
                      if ((DAT_0202e8b4 & 2) == 0) goto LAB_080f2b84;
                      sub_0810DED0(0x2e9);
                    }
                    else {
                      sub_0810DED0(0x2bd);
                    }
                  }
                  else {
                    sub_0810DED0(0x2b9);
                  }
                }
                else {
LAB_080f2b84:
                  sub_0810DED0(0x2a4);
                }
              }
              else {
                sub_0810DED0(0x2a8);
              }
            }
            else {
              sub_0810DED0(0x2aa);
            }
          }
          else {
            sub_0810DED0(0x2ae);
          }
        }
        else {
          sub_0810DED0(0x2b0);
        }
      }
      else {
        sub_0810DED0(0x2b2);
      }
      DAT_0202e8b5 = DAT_0202e8b5 | 4;
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
                      uVar5 = 0x29c;
LAB_080f2dac:
                      sub_0810DFA8(uVar5);
                      *(undefined *)(param_1 + 0xd) = 0x20;
                      return in_lr;
                    }
                    if ((DAT_0202e8b6 & 1) == 0) {
                      if ((DAT_0202e8b5 & 0x80) == 0) {
                        if ((DAT_0202e8b5 & 0x40) == 0) {
                          sub_0810DED0(0x291);
                        }
                        else {
                          sub_0810DED0(0x293);
                        }
                      }
                      else {
                        sub_0810DED0(0x295);
                      }
                    }
                    else {
                      sub_0810DED0(0x297);
                    }
                  }
                  else {
                    sub_0810DED0(0x2a1);
                  }
                }
                else if ((DAT_0202e8b4 & 4) == 0) {
                  if ((DAT_0202e8b4 & 1) == 0) {
                    if ((DAT_0202e8b4 & 2) == 0) {
                      sub_0810DED0(0x2a3);
                    }
                    else {
                      sub_0810DED0(0x2e8);
                    }
                  }
                  else {
                    sub_0810DED0(700);
                  }
                }
                else {
                  sub_0810DED0(0x2b8);
                }
              }
              else {
                sub_0810DED0(0x2a5);
              }
            }
            else {
              sub_0810DED0(0x2a9);
            }
          }
          else {
            sub_0810DED0(0x2ab);
          }
        }
        else {
          sub_0810DED0(0x2af);
        }
      }
      else {
        sub_0810DED0(0x2b1);
      }
    }
    else {
      sub_0810DED0(0x2b3);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f28c2_caseD_2:
    sub_0801CFF0(param_1);
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
LAB_080f2f92:
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
LAB_080f2fa0:
    uVar4 = 1;
  }
  else if (*(char *)(DAT_0202dbf0 + 0xbc) == -1) {
    sub_0810DED0(0x2b4);
    *(undefined *)(DAT_0202dbf0 + 0xbc) = 0;
    *(byte *)(DAT_0202eda8 + 0x14) = bVar2 - 1 | *(byte *)(DAT_0202eda8 + 0x14) & 0xf0;
    uVar4 = 3;
  }
  else {
    if (*(char *)(DAT_0202dbf0 + 0xbd) != -1) goto LAB_080f2aa8;
    sub_0810DED0(0x2b5);
    *(undefined *)(DAT_0202dbf0 + 0xbd) = 0;
    *(byte *)(DAT_0202eda8 + 0x14) = bVar2 - 1 | *(byte *)(DAT_0202eda8 + 0x14) & 0xf0;
    uVar4 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar4;
switchD_080f28c2_caseD_4:
  return in_lr;
}

