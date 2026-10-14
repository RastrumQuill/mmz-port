// sub_0803978C at 0x0803978C (thumb)

undefined8 sub_0803978C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + 0x267);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + 0x266);
    cVar3 = *pcVar6;
    *pcVar6 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar5 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x252);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_080398b4;
        *pcVar6 = '\n';
      }
      else {
        *pcVar6 = '\n';
      }
    }
    else {
      *pcVar6 = '\n';
    }
LAB_08039884:
    *pbVar5 = *pbVar5 + 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (((*(ushort *)(param_1 + 0x252) & 0x30) != 0) ||
           ((*(ushort *)(param_1 + 0x252) & 0x80) == 0)) goto LAB_080398b4;
        *(undefined *)(param_1 + 0x266) = 10;
        goto LAB_08039884;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + 0x266);
        cVar3 = *pcVar6;
        *pcVar6 = cVar3 + -1;
        if ((char)(cVar3 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar2 = *(ushort *)(param_1 + 0x252);
        if ((uVar2 & 0x80) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if ((uVar2 & 0x20) == 0) goto LAB_080398b4;
            *(byte *)(param_1 + 0x268) = (byte)uVar2 & 0x10;
          }
          else {
            *(undefined *)(param_1 + 0x268) = 1;
          }
          *pcVar6 = '\n';
          goto LAB_08039884;
        }
        goto LAB_080398b4;
      }
      if (bVar1 == 3) {
        cVar3 = *(char *)(param_1 + 0x266) + -1;
        *(char *)(param_1 + 0x266) = cVar3;
        if (cVar3 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_080398b6;
      }
    }
    *(undefined *)(param_1 + 0x267) = 0;
  }
LAB_080398b4:
  uVar4 = 0;
LAB_080398b6:
  return CONCAT44(in_lr,uVar4);
}

