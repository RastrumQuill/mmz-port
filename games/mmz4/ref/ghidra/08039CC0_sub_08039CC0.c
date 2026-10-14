// sub_08039CC0 at 0x08039CC0 (thumb)

undefined8 sub_08039CC0(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + 0x272);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + 0x271);
    cVar2 = *pcVar6;
    *pcVar6 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *pbVar5 = 0;
    }
    if (*(char *)(param_1 + 0x273) == '\x01') {
      if ((*(ushort *)(param_1 + 0x252) & 0x10) != 0) {
        *pcVar6 = '\n';
LAB_08039df0:
        *pbVar5 = *pbVar5 + 1;
      }
    }
    else if ((*(ushort *)(param_1 + 0x252) & 0x20) != 0) {
      *pcVar6 = '\n';
      goto LAB_08039df0;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar6 = (char *)(param_1 + 0x271);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar3 = *(ushort *)(param_1 + 0x252);
        if ((uVar3 & 0x80) != 0) {
          if ((uVar3 & 0x10) == 0) {
            if ((uVar3 & 0x20) == 0) goto LAB_08039e20;
            *(byte *)(param_1 + 0x273) = (byte)uVar3 & 0x10;
            *pcVar6 = '\n';
          }
          else {
            *(undefined *)(param_1 + 0x273) = 1;
            *pcVar6 = '\n';
          }
          goto LAB_08039df0;
        }
        goto LAB_08039e20;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + 0x271);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        if ((*(ushort *)(param_1 + 0x252) & 0x40) == 0) {
          if (*(char *)(param_1 + 0x273) == '\x01') {
            uVar3 = 0x10;
          }
          else {
            uVar3 = 0x20;
          }
          if ((uVar3 & *(ushort *)(param_1 + 0x252)) != 0) {
            *pcVar6 = '\n';
            goto LAB_08039df0;
          }
        }
        goto LAB_08039e20;
      }
      if (bVar1 == 3) {
        cVar2 = *(char *)(param_1 + 0x271) + -1;
        *(char *)(param_1 + 0x271) = cVar2;
        if (cVar2 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_08039e22;
      }
    }
    *(undefined *)(param_1 + 0x272) = 0;
  }
LAB_08039e20:
  uVar4 = 0;
LAB_08039e22:
  return CONCAT44(in_lr,uVar4);
}

