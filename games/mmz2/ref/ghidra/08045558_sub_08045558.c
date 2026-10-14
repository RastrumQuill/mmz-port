// sub_08045558 at 0x08045558 (thumb)

undefined4 sub_08045558(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa000);
    sub_08006E08(param_1 + 0x74,&DAT_0833a980);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = DAT_0202e130;
  bVar1 = (byte)DAT_0202ec42 & 1;
  if ((DAT_0202ec42 & 1) == 0) {
    pcVar3 = (char *)(param_1 + 0xbe);
    iVar7 = *(int *)(param_1 + 0x54);
    pbVar4 = (byte *)(param_1 + 0xbf);
    if (*pcVar3 != '\x10') {
      iVar6 = iVar7 - *(int *)(DAT_0202e130 + 0x54);
      if (iVar6 < 0) {
        iVar6 = *(int *)(DAT_0202e130 + 0x54) - iVar7;
      }
      if ((0x3000 < iVar6) && (2 < *pbVar4)) {
        *(undefined *)(param_1 + 0xd) = 0x10;
        *pcVar3 = '\x10';
        *pbVar4 = bVar1;
        *(byte *)(param_1 + 0xe) = bVar1;
        return in_lr;
      }
    }
    if (iVar7 < *(int *)(DAT_0202e130 + 0x54) == (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
      do {
        iVar6 = iVar7 - *(int *)(iVar2 + 0x54);
        if (iVar6 < 0) {
          iVar6 = *(int *)(iVar2 + 0x54) - iVar7;
        }
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        uVar5 = uVar5 * 2 >> 0x11 & 0xf;
        if (iVar6 < 0x3000) {
          if (uVar5 < 8) {
            *(undefined *)(param_1 + 0xd) = 5;
          }
          else {
            *(undefined *)(param_1 + 0xd) = 8;
          }
        }
        else if (iVar6 < 0x6000) {
          if (uVar5 < 6) {
            *(undefined *)(param_1 + 0xd) = 0x1a;
          }
          else if (uVar5 < 10) {
LAB_08045694:
            *(undefined *)(param_1 + 0xd) = 8;
          }
          else {
LAB_08045670:
            if (uVar5 < 0xe) goto LAB_0804569e;
LAB_080456a2:
            *(undefined *)(param_1 + 0xd) = 0x10;
          }
        }
        else if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
          if (uVar5 < 7) goto LAB_08045694;
          if (0xd < uVar5) goto LAB_080456a2;
LAB_0804569e:
          *(undefined *)(param_1 + 0xd) = 0xc;
        }
        else {
          if (6 < uVar5) goto LAB_08045670;
          *(undefined *)(param_1 + 0xd) = 0x13;
        }
      } while (*pcVar3 == *(char *)(param_1 + 0xd));
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x18;
    }
    if (*(char *)(param_1 + 0xd) == '\x10') {
      *pbVar4 = 0;
    }
    else {
      *pbVar4 = *pbVar4 + 1;
    }
    *pcVar3 = *(char *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

