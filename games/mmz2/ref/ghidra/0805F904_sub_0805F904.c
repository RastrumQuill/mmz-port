// sub_0805F904 at 0x0805F904 (thumb)

undefined4 sub_0805F904(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 200) + -0x5400;
  *(int *)(param_1 + 0xb8) = iVar5;
  pbVar7 = (byte *)(param_1 + 0xbe);
  *(int *)(param_1 + 0x58) = iVar5 + (short)(&DAT_080ef450)[*pbVar7] * 8;
  *pbVar7 = *pbVar7 + 1;
  sub_080128D4(param_1);
  iVar5 = *(int *)(param_1 + 0x54);
  do {
    do {
      iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
      if (iVar6 < 0) {
        iVar6 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
      }
      if (iVar6 < 0x5000) {
        if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
          uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar3 & 0x7fffffff;
          bVar2 = sub_080EF330(uVar3 * 2 >> 0x11,0xc);
          if (bVar2 < 4) goto LAB_0805fb0c;
          if (bVar2 < 6) {
            uVar1 = 9;
          }
          else {
            uVar1 = 0x12;
          }
          goto LAB_0805fb1a;
        }
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11 & 0xf;
        if (3 < uVar3) {
          if (uVar3 < 6) {
            uVar1 = 9;
          }
          else {
            if (0xb < uVar3) {
LAB_0805fa48:
              *(undefined *)(param_1 + 0xd) = 0xf;
              goto LAB_0805fb1c;
            }
            uVar1 = 0x12;
          }
          goto LAB_0805fb1a;
        }
LAB_0805fb0c:
        *(undefined *)(param_1 + 0xd) = 0xb;
      }
      else {
        if (iVar6 < 0) {
          if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
            uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar3 & 0x7fffffff;
            bVar2 = sub_080EF330(uVar3 * 2 >> 0x11,0xc);
            if (bVar2 < 2) {
              uVar1 = 6;
            }
            else {
              if (bVar2 < 4) goto LAB_0805fb0c;
              if (bVar2 < 6) {
                uVar1 = 9;
              }
              else {
                if (7 < bVar2) goto LAB_0805fb18;
                uVar1 = 0x12;
              }
            }
          }
          else {
            uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar3 & 0x7fffffff;
            uVar3 = uVar3 * 2 >> 0x11 & 0xf;
            if (uVar3 < 2) {
              uVar1 = 6;
            }
            else {
              if (uVar3 < 4) goto LAB_0805fb0c;
              if (uVar3 < 6) {
                uVar1 = 9;
              }
              else {
                if (7 < uVar3) {
                  if (0xb < uVar3) goto LAB_0805fa48;
                  goto LAB_0805fb18;
                }
                uVar1 = 0x12;
              }
            }
          }
        }
        else if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
          uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar3 & 0x7fffffff;
          bVar2 = sub_080EF330(uVar3 * 2 >> 0x11,0xc);
          if (bVar2 < 4) {
            uVar1 = 6;
          }
          else {
            if (bVar2 < 6) goto LAB_0805fb0c;
            if (bVar2 < 10) {
              uVar1 = 9;
            }
            else {
LAB_0805fb18:
              uVar1 = 0xd;
            }
          }
        }
        else {
          uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar3 & 0x7fffffff;
          bVar2 = sub_080EF330(uVar3 * 2 >> 0x11,0xe);
          if (bVar2 < 4) {
            uVar1 = 6;
          }
          else {
            if (bVar2 < 6) goto LAB_0805fb0c;
            if (bVar2 < 10) {
              uVar1 = 9;
            }
            else {
              if (bVar2 < 0xc) goto LAB_0805fb18;
              uVar1 = 0xf;
            }
          }
        }
LAB_0805fb1a:
        *(undefined *)(param_1 + 0xd) = uVar1;
      }
LAB_0805fb1c:
    } while (((*(char *)(param_1 + 0xd) == '\t') && (*(int *)(param_1 + 0xcc) != 0)) &&
            (*(int *)(param_1 + 0xd0) != 0));
    pcVar4 = (char *)(param_1 + 0xbd);
    if ((*pcVar4 == '\v') && (*(char *)(param_1 + 0xd) == '\x12')) {
      *(undefined *)(param_1 + 0xd) = 0xd;
    }
  } while (*pcVar4 == *(char *)(param_1 + 0xd));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(DAT_0202e130 + 0x54) <= iVar5) goto LAB_0805fbdc;
    if ((*(byte *)(DAT_0202ebf0 + 1) < 5) ||
       (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
       (uVar3 * 2 >> 0x11 & 1) == 0)) goto LAB_0805fbd8;
    uVar1 = 0xf;
  }
  else {
    if (iVar5 <= *(int *)(DAT_0202e130 + 0x54)) goto LAB_0805fbdc;
    if ((*(byte *)(DAT_0202ebf0 + 1) < 5) ||
       (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
       (uVar3 * 2 >> 0x11 & 1) == 0)) {
LAB_0805fbd8:
      uVar1 = 6;
    }
    else {
      uVar1 = 0xf;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
LAB_0805fbdc:
  *pcVar4 = *(char *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

