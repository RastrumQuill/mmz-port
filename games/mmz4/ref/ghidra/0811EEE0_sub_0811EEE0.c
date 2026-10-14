// sub_0811EEE0 at 0x0811EEE0 (thumb)

undefined4 sub_0811EEE0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x63a8);
  if ((DAT_02000764 & 2) != 0) {
    sub_08002B10(3);
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    return in_lr;
  }
  if ((DAT_02000766 & 0x40) == 0) {
    if ((DAT_02000766 & 0x80) != 0) {
      uVar3 = sub_08128954(*(byte *)(param_1 + 0xdcf) + 1,3);
      *(undefined *)(param_1 + 0xdcf) = uVar3;
      goto LAB_0811efcc;
    }
    if ((DAT_02000766 & 0x20) == 0) {
      if ((DAT_02000766 & 0x10) != 0) {
        if (*(char *)(param_1 + 0xdcf) == '\0') {
          pbVar4 = (byte *)(iVar5 + 0xf1);
        }
        else {
          if (*(char *)(param_1 + 0xdcf) != '\x01') {
            bVar2 = *(byte *)(iVar5 + 0xf3);
            if (bVar2 < *(byte *)(iVar5 + 0xf0)) {
              *(byte *)(iVar5 + 0xf3) = bVar2 + 1;
              sub_08002B10(1);
            }
            goto LAB_0811efee;
          }
          pbVar4 = (byte *)(iVar5 + 0xf2);
        }
        if (*pbVar4 < *(byte *)(iVar5 + 0xf0)) {
          *pbVar4 = *pbVar4 + 1;
          goto LAB_0811efcc;
        }
      }
    }
    else if (*(char *)(param_1 + 0xdcf) == '\0') {
      cVar1 = *(char *)(iVar5 + 0xf1);
      if (cVar1 != '\0') {
        *(char *)(iVar5 + 0xf1) = cVar1 + -1;
        goto LAB_0811efcc;
      }
    }
    else if (*(char *)(param_1 + 0xdcf) == '\x01') {
      cVar1 = *(char *)(iVar5 + 0xf2);
      if (cVar1 != '\0') {
        *(char *)(iVar5 + 0xf2) = cVar1 + -1;
        goto LAB_0811efcc;
      }
    }
    else {
      cVar1 = *(char *)(iVar5 + 0xf3);
      if (cVar1 != '\0') {
        *(char *)(iVar5 + 0xf3) = cVar1 + -1;
        goto LAB_0811efcc;
      }
    }
  }
  else {
    uVar3 = sub_08128954(*(byte *)(param_1 + 0xdcf) + 2,3);
    *(undefined *)(param_1 + 0xdcf) = uVar3;
LAB_0811efcc:
    sub_08002B10(1);
  }
LAB_0811efee:
  if (*(char *)(param_1 + 0xdcf) == '\0') {
    iVar5 = *(byte *)(iVar5 + 0xf1) + 0x8c;
  }
  else {
    if (*(char *)(param_1 + 0xdcf) != '\x01') {
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(iVar5 + 0xf3) + 0xa0],0x11,7);
      goto LAB_0811f054;
    }
    iVar5 = *(byte *)(iVar5 + 0xf2) + 0x96;
  }
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar5],0x11,7);
LAB_0811f054:
  sub_0810D214(&DAT_0886aaa6,1,0x12);
  return in_lr;
}

