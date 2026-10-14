// sub_080F2250 at 0x080F2250 (thumb)

undefined4 sub_080F2250(int param_1)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088669b8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_0801CF00(param_1,0x3200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
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
    sub_08006984(0x54);
    bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if ((DAT_0202e8b6 & 8) == 0) {
      if ((DAT_0202e8b5 & 2) == 0) {
        if ((DAT_0202e8b6 & 4) == 0) {
          if ((DAT_0202e8b6 & 2) == 0) {
            if ((DAT_0202e8b6 & 1) == 0) {
              if ((DAT_0202e8b5 & 0x80) == 0) {
                if ((DAT_0202e8b5 & 0x40) == 0) {
                  sub_0810DED0(0x260);
                }
                else {
                  sub_0810DED0(0x262);
                }
              }
              else {
                sub_0810DED0(0x264);
              }
              DAT_0202e8b5 = DAT_0202e8b5 | 2;
              goto LAB_080f2542;
            }
            if ((DAT_0202e8b4 & 4) == 0) {
              if ((DAT_0202e8b4 & 1) == 0) {
                if ((DAT_0202e8b4 & 2) == 0) {
                  sub_0810DFA8(0x266);
                }
                else {
                  sub_0810DFA8(0x25c);
                }
              }
              else {
                sub_0810DFA8(0x25a);
              }
            }
            else {
              sub_0810DFA8(0x28e);
            }
          }
          else {
            sub_0810DFA8(0x26a);
          }
        }
        else {
          sub_0810DFA8(0x272);
          DAT_0202e8b6 = DAT_0202e8b6 | 8;
          DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
          DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
        }
      }
      else {
        if ((DAT_0202e8b6 & 2) == 0) {
          if ((DAT_0202e8b5 & 0x80) == 0) {
            if ((DAT_0202e8b5 & 0x40) == 0) {
              sub_0810DED0(0x261);
            }
            else {
              sub_0810DED0(0x263);
            }
          }
          else {
            sub_0810DED0(0x265);
          }
LAB_080f2542:
          cVar4 = '\x10';
          break;
        }
        sub_0810DFA8(0x26e);
      }
LAB_080f2892:
      cVar4 = ' ';
    }
    else {
      sub_08112080(&DAT_0202f610,0x30400);
      cVar4 = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    sub_0801CFF0(param_1);
    if (DAT_0202f612 != '\0') {
      return in_lr;
    }
    DAT_0202dbf8 = DAT_0202f612;
    cVar4 = '\x01';
    break;
  default:
    goto switchD_080f2264_caseD_3;
  case 0x10:
    sub_0801CFF0(param_1);
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
    cVar4 = '\x01';
    break;
  case 0x20:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    if ((DAT_0202e8b6 & 4) == 0) {
      if ((DAT_0202e8b6 & 2) == 0) {
        sub_0810DF3C(0x267);
      }
      else if ((DAT_0202e8b5 & 2) == 0) {
        sub_0810DF3C(0x26b);
      }
      else {
        sub_0810DF3C(0x26f);
      }
    }
    else {
      sub_0810DF3C(0x273);
    }
    DAT_0202f61a = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x21:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    cVar4 = sub_080F35F8(param_1);
    if (cVar4 == '\0') {
      return in_lr;
    }
    if (cVar4 == '\x01') {
      if ((DAT_0202e8b6 & 4) == 0) {
        uVar2 = (ushort)DAT_0202e8b6;
        if ((DAT_0202e8b6 & 2) != 0) {
          if ((DAT_0202e8b5 & 2) == 0) {
            sub_0810DFA8(0x26c);
          }
          else {
            sub_0810DFA8(0x270);
          }
          *(undefined *)(param_1 + 0xd) = 0x23;
          sub_0803A6E8(DAT_0202dbf0,3);
          DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
          DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
          DAT_0202e8b6 = DAT_0202e8b6 | 4;
          DAT_0202f61a = 0;
          return in_lr;
        }
        sub_0810DFA8(0x268);
        sub_0803A6E8(DAT_0202dbf0,3);
        DAT_0202e8b6 = DAT_0202e8b6 | 6;
        DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
        DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
        cVar4 = '#';
        DAT_0202f61a = uVar2 & 2;
        break;
      }
      if ((DAT_0202e8b4 & 4) == 0) {
        if ((DAT_0202e8b4 & 1) == 0) {
          if ((DAT_0202e8b4 & 2) == 0) {
            sub_0810DFA8(0x274);
          }
          else {
            sub_0810DFA8(0x25d);
          }
        }
        else {
          sub_0810DFA8(0x25b);
        }
      }
      else {
        sub_0810DFA8(0x28f);
      }
    }
    else {
      if (cVar4 != -1) {
        sub_08002B10(3);
        return in_lr;
      }
      if ((DAT_0202e8b6 & 4) == 0) {
        if ((DAT_0202e8b6 & 2) == 0) {
          sub_0810DFA8(0x269);
          DAT_0202e8b6 = DAT_0202e8b6 | 2;
          DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
          DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
        }
        else if ((DAT_0202e8b5 & 2) == 0) {
          sub_0810DFA8(0x26d);
          DAT_0202e8b5 = DAT_0202e8b5 | 2;
        }
        else {
          sub_0810DFA8(0x271);
        }
      }
      else {
        sub_0810DFA8(0x275);
      }
    }
    DAT_0202f61a = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f2264_caseD_22:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
    cVar4 = '\x01';
    break;
  case 0x22:
    goto switchD_080f2264_caseD_22;
  case 0x23:
    sub_0801CFF0(param_1);
    if ((DAT_0202f38a != 0) && (DAT_0202f38a != 4)) {
      return in_lr;
    }
    sub_0810DFA8(0x272);
    DAT_0202e8b6 = DAT_0202e8b6 | 8;
    DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
    DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    goto LAB_080f2892;
  }
  *(char *)(param_1 + 0xd) = cVar4;
switchD_080f2264_caseD_3:
  return in_lr;
}

