// sub_08039E2C at 0x08039E2C (thumb)

undefined8 sub_08039E2C(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + 0x275);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + 0x274);
    cVar2 = *pcVar6;
    *pcVar6 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *pbVar5 = 0;
    }
    if (*(char *)(param_1 + 0x276) == '\x01') {
      if ((*(ushort *)(param_1 + 0x252) & 0x10) != 0) {
        *pcVar6 = '\n';
LAB_08039f54:
        *pbVar5 = *pbVar5 + 1;
      }
    }
    else if ((*(ushort *)(param_1 + 0x252) & 0x20) != 0) {
      *pcVar6 = '\n';
      goto LAB_08039f54;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar6 = (char *)(param_1 + 0x274);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar3 = *(ushort *)(param_1 + 0x252);
        if ((uVar3 & 0x40) != 0) {
          if ((uVar3 & 0x10) == 0) {
            if ((uVar3 & 0x20) == 0) goto LAB_08039f82;
            *(byte *)(param_1 + 0x276) = (byte)uVar3 & 0x10;
            *pcVar6 = '\n';
          }
          else {
            *(undefined *)(param_1 + 0x276) = 1;
            *pcVar6 = '\n';
          }
          goto LAB_08039f54;
        }
        goto LAB_08039f82;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + 0x274);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        if ((*(ushort *)(param_1 + 0x252) & 0x80) == 0) {
          if (*(char *)(param_1 + 0x276) == '\x01') {
            uVar3 = 0x10;
          }
          else {
            uVar3 = 0x20;
          }
          if ((uVar3 & *(ushort *)(param_1 + 0x252)) != 0) {
            *pcVar6 = '\n';
            goto LAB_08039f54;
          }
        }
        goto LAB_08039f82;
      }
      if (bVar1 == 3) {
        cVar2 = *(char *)(param_1 + 0x274) + -1;
        *(char *)(param_1 + 0x274) = cVar2;
        if (cVar2 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_08039f84;
      }
    }
    *(undefined *)(param_1 + 0x275) = 0;
  }
LAB_08039f82:
  uVar4 = 0;
LAB_08039f84:
  return CONCAT44(in_lr,uVar4);
}

