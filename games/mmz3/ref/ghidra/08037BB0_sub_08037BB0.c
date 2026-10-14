// sub_08037BB0 at 0x08037BB0 (thumb)

undefined4 sub_08037BB0(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar2 = sub_08009A3C();
  if (uVar2 != 0) {
    sVar3 = sub_08008FEC(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c),
                         *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60));
    if (sVar3 != 0) {
      uVar2 = sub_08008FEC(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c),
                           *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60));
    }
    if ((ushort)(uVar2 + 0x7ff2) < 2) {
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xf;
    if (0xd < uVar2) {
      uVar2 = 1;
    }
    if (uVar2 != 0) {
      if (3 < *(byte *)(param_1 + 0x12)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
        return in_lr;
      }
      if (*(int *)(param_1 + 0x5c) < 1) {
        iVar5 = sub_08009F80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar5 == -1) goto LAB_08037c80;
      }
      else {
        iVar5 = sub_08009E14(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar5 == 1) {
LAB_08037c80:
          iVar5 = 0;
        }
      }
      if (*(int *)(param_1 + 0x60) < 1) {
        iVar6 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar6 == -1) goto LAB_08037caa;
      }
      else {
        iVar6 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar6 == 1) {
LAB_08037caa:
          iVar6 = 0;
        }
      }
      iVar8 = iVar6;
      if (iVar6 < 0) {
        iVar8 = -iVar6;
      }
      if (iVar8 == 1) {
        iVar6 = 0;
      }
      if ((iVar5 != 0) && (iVar6 != 0)) {
        iVar8 = iVar5;
        if (iVar5 < 0) {
          iVar8 = -iVar5;
        }
        iVar7 = iVar6;
        if (iVar6 < 0) {
          iVar7 = -iVar6;
        }
        if (iVar7 < iVar8) {
          iVar5 = 0;
        }
        else {
          iVar6 = 0;
        }
      }
      if (((DAT_02002650 & 0x7f) == 0x11) &&
         (iVar8 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), iVar8 != 0)) goto LAB_08037e7e;
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = -iVar5;
      }
      if (iVar8 < 0x701) {
        iVar8 = iVar6;
        if (iVar6 < 0) {
          iVar8 = -iVar6;
        }
        if (0x700 < iVar8) goto LAB_08037d1a;
        if (*(char *)(param_1 + 0x12) == '\0') {
          if (*(int *)(param_1 + 0x5c) < 0) {
            if (uVar2 < 10) {
              if (uVar2 < 8) {
                cVar1 = *(char *)(iVar4 + 0x28a);
                goto LAB_08037dec;
              }
              cVar10 = *(char *)(param_1 + 0x13);
              cVar1 = -0x26;
            }
            else {
              cVar10 = *(char *)(param_1 + 0x13);
              cVar1 = -0x14;
            }
            goto LAB_08037dea;
          }
          if ((uVar2 < 8) && (uVar2 != 1)) {
            if (uVar2 < 4) {
LAB_08037de6:
              cVar10 = *(char *)(param_1 + 0x13);
              cVar1 = '&';
            }
            else {
              cVar10 = *(char *)(param_1 + 0x13);
              cVar1 = '\x14';
            }
            goto LAB_08037dea;
          }
          cVar1 = *(char *)(iVar4 + 0x28a);
        }
        else {
          if (*(int *)(param_1 + 0x5c) < 0) {
            if (uVar2 < 10) {
              if (uVar2 < 8) {
                iVar4 = iVar5;
                if (iVar5 < 0) {
                  iVar4 = -iVar5;
                }
                iVar8 = iVar6;
                if (iVar6 < 0) {
                  iVar8 = -iVar6;
                }
                if (iVar4 <= iVar8) {
                  cVar1 = -*(char *)(param_1 + 0x13);
                  goto LAB_08037dec;
                }
                cVar10 = *(char *)(param_1 + 0x13);
                cVar1 = -0x80;
              }
              else {
                cVar10 = *(char *)(param_1 + 0x13);
                cVar1 = -0x26;
              }
            }
            else {
              cVar10 = *(char *)(param_1 + 0x13);
              cVar1 = -0x14;
            }
          }
          else if ((uVar2 < 8) && (uVar2 != 1)) {
            if (uVar2 < 4) goto LAB_08037de6;
            cVar10 = *(char *)(param_1 + 0x13);
            cVar1 = '\x14';
          }
          else {
            iVar4 = iVar5;
            if (iVar5 < 0) {
              iVar4 = -iVar5;
            }
            iVar8 = iVar6;
            if (iVar6 < 0) {
              iVar8 = -iVar6;
            }
            if (iVar4 <= iVar8) {
              cVar1 = -*(char *)(param_1 + 0x13);
              goto LAB_08037dec;
            }
            cVar10 = *(char *)(param_1 + 0x13);
            cVar1 = -0x80;
          }
LAB_08037dea:
          cVar1 = cVar1 - cVar10;
        }
LAB_08037dec:
        *(char *)(param_1 + 0x13) = cVar1;
      }
      else {
LAB_08037d1a:
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -0x80;
        iVar5 = -*(int *)(param_1 + 0x5c);
        iVar6 = -*(int *)(param_1 + 0x60);
      }
      uVar9 = 0x80 - *(byte *)(param_1 + 0x13);
      *(char *)(param_1 + 0x24) = (char)uVar9;
      uVar9 = ((uVar9 & 0xff) + 0x80) * 0x1000000;
      *(int *)(param_1 + 0x5c) = *(short *)((int)&DAT_080fe64c + (uVar9 + 0x40000000 >> 0x17)) * 7;
      *(int *)(param_1 + 0x60) = *(short *)((int)&DAT_080fe64c + (uVar9 >> 0x17)) * 7;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
  }
  cVar1 = sub_08038330(param_1);
  if (cVar1 == '\0') {
    uVar9 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar9 <= (uint)(int)*(short *)(&DAT_0835b654 + (uint)*(byte *)(param_1 + 0x10) * 2)) {
      return in_lr;
    }
  }
  else {
    sub_080B322C(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(0x2b);
  }
LAB_08037e7e:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

