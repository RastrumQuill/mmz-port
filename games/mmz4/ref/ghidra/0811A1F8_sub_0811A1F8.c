// sub_0811A1F8 at 0x0811A1F8 (thumb)

undefined4 sub_0811A1F8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x63a8);
  pbVar3 = (byte *)(param_1 + 0xdf7);
  if (*pbVar3 == 0) {
    *(undefined *)(param_1 + 0xdd3) = 0;
    *(undefined *)(param_1 + 0xddb) = 0;
    *pbVar3 = *pbVar3 + 1;
  }
  sub_080025D8(0x15);
  sub_0811A948(param_1);
  bVar1 = (byte)DAT_02000764;
  if ((DAT_02000764 & 2) != 0) {
    sub_08002B10(3);
    *(undefined *)(param_1 + 3) = 2;
    *pbVar3 = 0;
    return in_lr;
  }
  if ((DAT_02000764 & 1) != 0) {
    sub_08002B10(2);
    *(undefined *)(iVar5 + 0xc5) =
         *(undefined *)(param_1 + 0xdd4 + (uint)*(byte *)(param_1 + 0xdd3));
    *(undefined *)(param_1 + 3) = 2;
    *pbVar3 = bVar1 & 2;
    goto LAB_0811a31a;
  }
  if ((DAT_02000766 & 0x40) == 0) {
    if ((DAT_02000766 & 0x80) == 0) goto LAB_0811a31a;
    if (*(byte *)(param_1 + 0xdd3) + 1 < (uint)*(byte *)(param_1 + 0xdda)) {
      sub_08002B10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + '\x01';
      goto LAB_0811a31a;
    }
    if (*(char *)(param_1 + 0xddd) == '\0') goto LAB_0811a31a;
    sub_08002B10(1);
    cVar2 = *(char *)(param_1 + 0xddb) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xdd3) != '\0') {
      sub_08002B10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + -1;
      goto LAB_0811a31a;
    }
    if (*(char *)(param_1 + 0xddc) == '\0') goto LAB_0811a31a;
    sub_08002B10(1);
    cVar2 = *(char *)(param_1 + 0xddb) + -1;
  }
  *(char *)(param_1 + 0xddb) = cVar2;
LAB_0811a31a:
  sub_0811A948(param_1);
  for (uVar4 = 0; uVar4 < 6; uVar4 = uVar4 + 1 & 0xff) {
    pbVar3 = (byte *)(param_1 + 0xdd4 + uVar4);
    if (*pbVar3 == 0xff) {
      if (uVar4 != 0) break;
      sub_0810D214(&DAT_0886ba56,3,2);
    }
    else {
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar3 + 400],3,uVar4 * 2 + 2);
    }
  }
  pbVar3 = (byte *)(param_1 + 0xdd4 + (uint)*(byte *)(param_1 + 0xdd3));
  if (*pbVar3 == 0xff) {
    sub_0810D214(&DAT_0886ba81,1,0x12);
  }
  else {
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar3 + 0x1b3],1,0x12);
  }
  return in_lr;
}

