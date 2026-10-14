// sub_08118FF4 at 0x08118FF4 (thumb)

undefined4 sub_08118FF4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x63a8);
  pbVar7 = (byte *)(param_1 + 0xdf7);
  bVar1 = *pbVar7;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_081191ec;
      *(undefined *)(param_1 + 0xe04) = 1;
      uVar8 = 0;
      uVar12 = 0;
      pcVar6 = (char *)(iVar4 + 0xbc);
      if (*pcVar6 == -1) goto LAB_08119144;
      uVar10 = uVar12;
      if (*(char *)(param_1 + 0xdcd) != '\0') {
        do {
          uVar12 = uVar12 + 1 & 0xff;
LAB_08119144:
          do {
            uVar8 = uVar8 + 1 & 0xff;
            uVar10 = uVar12;
            if (3 < uVar8) goto LAB_08119162;
          } while (pcVar6[uVar8] == -1);
          uVar10 = uVar8;
        } while (uVar12 != *(byte *)(param_1 + 0xdcd));
      }
LAB_08119162:
      pcVar6 = pcVar6 + uVar10;
      if ((*pcVar6 == '\0') ||
         (uVar3 = sub_0802B604(iVar4), (short)(uVar3 & 0xff) <= *(short *)(iVar4 + 0xa4))) {
        sub_08002B10(4);
      }
      else {
        pcVar11 = (char *)(param_1 + 0xdfa);
        cVar2 = *pcVar11;
        *pcVar11 = cVar2 + -1;
        if ((char)(cVar2 + -1) != -1) goto LAB_081191ec;
        if (*pcVar6 != '\0') {
          *pcVar6 = *pcVar6 + -1;
          cVar2 = sub_0802B5AC(iVar4);
          if (cVar2 == '\0') {
            sub_081193CC(iVar4);
            goto LAB_081191dc;
          }
          if (*pcVar6 != '\0') {
            *pcVar11 = '\x03';
            goto LAB_081191ec;
          }
        }
        sub_081193CC(iVar4);
      }
LAB_081191dc:
      *(undefined *)(param_1 + 0xdf7) = 1;
      goto LAB_081191ec;
    }
    if (bVar1 != 0) goto LAB_081191ec;
    *(undefined *)(param_1 + 0xdcd) = 0;
    *pbVar7 = *pbVar7 + 1;
  }
  if ((DAT_02000766 & 0x10) == 0) {
    if (((DAT_02000766 & 0x20) != 0) && (*(char *)(param_1 + 0xdcd) != '\0')) {
      sub_08002B10(1);
      *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + -1;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xdcd);
    uVar8 = sub_08119398(param_1);
    if ((int)(uint)bVar1 < (int)((uVar8 & 0xff) - 1)) {
      sub_08002B10(1);
      *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
    }
  }
  iVar9 = *(int *)(param_1 + 0xdec);
  *(uint *)(iVar9 + 0x74) = (uint)*(byte *)(param_1 + 0xdcd) * 0x1800 + 0x8000;
  if ((*(byte *)(param_1 + 0xdcd) & 1) == 0) {
    uVar5 = 0x6000;
  }
  else {
    uVar5 = 0x5800;
  }
  *(undefined4 *)(iVar9 + 0x78) = uVar5;
  uVar8 = DAT_02000764 & 1;
  if ((DAT_02000764 & 1) == 0) {
    if ((DAT_02000764 & 2) != 0) {
      sub_08002B10(3);
      iVar9 = *(int *)(param_1 + 0xdec);
      *(uint *)(iVar9 + 0x74) = uVar8;
      *(uint *)(iVar9 + 0x78) = uVar8;
      *(char *)(param_1 + 3) = (char)uVar8;
      *(char *)(param_1 + 0xdf7) = (char)uVar8;
    }
  }
  else {
    *(char *)(param_1 + 0xdf7) = *(char *)(param_1 + 0xdf7) + '\x01';
    *(undefined *)(param_1 + 0xdfa) = 0;
  }
LAB_081191ec:
  pcVar6 = (char *)(iVar4 + 0xbc);
  uVar8 = 0;
  uVar12 = 0;
  if (*pcVar6 == -1) goto LAB_0811920a;
  uVar10 = uVar12;
  if (*(char *)(param_1 + 0xdcd) != '\0') {
    do {
      uVar12 = uVar12 + 1 & 0xff;
LAB_0811920a:
      do {
        uVar8 = uVar8 + 1 & 0xff;
        uVar10 = uVar12;
        if (3 < uVar8) goto LAB_08119228;
      } while (pcVar6[uVar8] == -1);
      uVar10 = uVar8;
    } while (uVar12 != *(byte *)(param_1 + 0xdcd));
  }
LAB_08119228:
  sub_0810D214(&DAT_0886a9f6,1,0x10);
  bVar1 = pcVar6[uVar10];
  if (bVar1 < 10) {
    sub_08117D68(bVar1,0x12,0x12);
  }
  else {
    sub_08117D68(bVar1,0x13,0x12);
  }
  return in_lr;
}

