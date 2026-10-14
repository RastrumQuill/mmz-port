// sub_0805A8B8 at 0x0805A8B8 (thumb)

undefined4 sub_0805A8B8(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xbe) == '\0') {
    if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
LAB_0805a910:
      if ((*(char *)(param_1 + 0xbe) != '\0') ||
         (uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar2 & 0x7fffffff,
         (uVar2 * 2 >> 0x11 & 1) == 0)) goto LAB_0805a94c;
      uVar1 = 6;
    }
    else {
      pcVar4 = (char *)(param_1 + 0xcc);
      if (*pcVar4 == '\0') {
        if (0x1f < *(short *)(param_1 + 0xa4)) goto LAB_0805a910;
        *pcVar4 = '\x01';
        uVar1 = 0x2c;
      }
      else {
        if ((*pcVar4 != '\x01') || (0xf < *(short *)(param_1 + 0xa4))) goto LAB_0805a910;
        *pcVar4 = '\x02';
        uVar1 = 0x2c;
      }
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
LAB_0805a94c:
    iVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (iVar3 == 0) {
      do {
        iVar3 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
        if (iVar3 < 0) {
          iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
        }
        uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar2 & 0x7fffffff;
        uVar2 = uVar2 * 2 >> 0x11 & 0xf;
        if (iVar3 < 0x2000) {
          if (uVar2 < 8) {
            uVar1 = 0x1a;
            goto LAB_0805aa60;
          }
          if (uVar2 < 0xc) {
            uVar1 = 0xb;
            goto LAB_0805aa60;
          }
          *(undefined *)(param_1 + 0xd) = 7;
          *(undefined *)(param_1 + 0xf) = 10;
        }
        else {
          if (iVar3 < 0x4000) {
            if (uVar2 < 4) {
              uVar1 = 0x1a;
            }
            else {
              if (7 < uVar2) {
                if (0xb < uVar2) goto LAB_0805aa5e;
LAB_0805aa3c:
                *(undefined *)(param_1 + 0xd) = 7;
                *(undefined *)(param_1 + 0xf) = 0xe;
                goto LAB_0805aa62;
              }
              uVar1 = 0xb;
            }
          }
          else if (iVar3 < 0x6000) {
            if (uVar2 < 6) {
              uVar1 = 0xb;
            }
            else if (uVar2 < 9) {
              uVar1 = 0x24;
            }
            else {
              if (uVar2 < 0xb) goto LAB_0805aa3c;
LAB_0805aa5e:
              uVar1 = 0x28;
            }
          }
          else if (uVar2 < 4) {
            uVar1 = 0x17;
          }
          else if (uVar2 < 8) {
            uVar1 = 0x12;
          }
          else {
            if (0xb < uVar2) goto LAB_0805aa5e;
            uVar1 = 0x24;
          }
LAB_0805aa60:
          *(undefined *)(param_1 + 0xd) = uVar1;
        }
LAB_0805aa62:
      } while (*(char *)(param_1 + 0xbf) == *(char *)(param_1 + 0xd));
      *(char *)(param_1 + 0xbf) = *(char *)(param_1 + 0xd);
    }
    else {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      if (((uVar2 * 2 >> 0x11 & 1) == 0) && (*(char *)(param_1 + 0xbe) == '\0')) {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0x12;
      }
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

