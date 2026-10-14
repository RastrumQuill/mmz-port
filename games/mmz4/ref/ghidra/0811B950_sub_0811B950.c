// sub_0811B950 at 0x0811B950 (thumb)

undefined4 sub_0811B950(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x63a8);
  cVar1 = sub_08117C68(param_1);
  if (cVar1 != '\0') {
    return in_lr;
  }
  if ((DAT_02000766 & 0x40) == 0) {
    if ((DAT_02000766 & 0x80) != 0) {
      iVar4 = *(byte *)(param_1 + 0xde4) + 1;
      goto LAB_0811b9a0;
    }
    if (*(char *)(iVar6 + 0xf5) != -1) {
      if ((DAT_02000766 & 0x20) == 0) {
        if ((DAT_02000766 & 0x10) != 0) {
          if (*(char *)(param_1 + 0xde4) == '\0') {
            pbVar5 = (byte *)(iVar6 + 0xf1);
          }
          else {
            if (*(char *)(param_1 + 0xde4) != '\x01') {
              bVar3 = *(byte *)(iVar6 + 0xf3);
              if (bVar3 < *(byte *)(iVar6 + 0xf0)) {
                *(byte *)(iVar6 + 0xf3) = bVar3 + 1;
                sub_08002B10(1);
              }
              goto LAB_0811ba56;
            }
            pbVar5 = (byte *)(iVar6 + 0xf2);
          }
          if (*pbVar5 < *(byte *)(iVar6 + 0xf0)) {
            bVar3 = *pbVar5 + 1;
LAB_0811ba38:
            *pbVar5 = bVar3;
            sub_08002B10(1);
          }
        }
      }
      else if (*(char *)(param_1 + 0xde4) == '\0') {
        pbVar5 = (byte *)(iVar6 + 0xf1);
        if (*pbVar5 != 0) {
          bVar3 = *pbVar5 - 1;
          goto LAB_0811ba38;
        }
      }
      else if (*(char *)(param_1 + 0xde4) == '\x01') {
        pbVar5 = (byte *)(iVar6 + 0xf2);
        if (*pbVar5 != 0) {
          bVar3 = *pbVar5 - 1;
          goto LAB_0811ba38;
        }
      }
      else {
        pbVar5 = (byte *)(iVar6 + 0xf3);
        if (*pbVar5 != 0) {
          bVar3 = *pbVar5 - 1;
          goto LAB_0811ba38;
        }
      }
      goto LAB_0811ba56;
    }
  }
  else {
    iVar4 = *(byte *)(param_1 + 0xde4) + 2;
LAB_0811b9a0:
    uVar2 = sub_08128954(iVar4,3);
    *(undefined *)(param_1 + 0xde4) = uVar2;
    sub_08002B10(1);
LAB_0811ba56:
    if (*(byte *)(iVar6 + 0xf5) != 0xff) {
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(iVar6 + 0xf5) + 0x5a],0x15,1);
      sub_0810D214(&DAT_0886aaa6,1,0x12);
      if (*(char *)(param_1 + 0xde4) == '\0') {
        iVar6 = *(byte *)(iVar6 + 0xf1) + 0x8c;
      }
      else if (*(char *)(param_1 + 0xde4) == '\x01') {
        iVar6 = *(byte *)(iVar6 + 0xf2) + 0x96;
      }
      else {
        iVar6 = *(byte *)(iVar6 + 0xf3) + 0xa0;
      }
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar6],0x11,8);
      goto LAB_0811baee;
    }
  }
  sub_0810D214(&DAT_0886aac2,1,0x12);
  sub_0810D214(&DAT_0886aad3,0x11,8);
LAB_0811baee:
  sub_0811BBA0(param_1);
  sub_080025D8(0x41);
  return in_lr;
}

