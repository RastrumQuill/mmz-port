// sub_08039B8C at 0x08039B8C (thumb)

undefined8 sub_08039B8C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(param_1 + 0x26f);
  bVar1 = *pbVar6;
  if (bVar1 == 1) {
    pcVar7 = (char *)(param_1 + 0x26e);
    cVar3 = *pcVar7;
    *pcVar7 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x252);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_08039cb4;
        *(byte *)(param_1 + 0x270) = (byte)uVar2 & 0x10;
        *pcVar7 = '\n';
      }
      else {
        *(undefined *)(param_1 + 0x270) = 1;
        *pcVar7 = '\n';
      }
    }
    else {
      *pcVar7 = '\n';
    }
LAB_08039c7c:
    *pbVar6 = *pbVar6 + 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      cVar3 = *(char *)(param_1 + 0x26e) + -1;
      *(char *)(param_1 + 0x26e) = cVar3;
      if (cVar3 == -1) {
        *pbVar6 = 0;
      }
      uVar2 = *(ushort *)(param_1 + 0x252);
      if ((uVar2 & 0x80) == 0) {
        if ((uVar2 & 0x10) == 0) {
          uVar4 = 0x20;
          goto LAB_08039c72;
        }
LAB_08039c78:
        *(undefined *)(param_1 + 0x26e) = 10;
        goto LAB_08039c7c;
      }
    }
    else {
LAB_08039cac:
      *(undefined *)(param_1 + 0x26f) = 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        cVar3 = *(char *)(param_1 + 0x26e) + -1;
        *(char *)(param_1 + 0x26e) = cVar3;
        if (cVar3 == -1) {
          uVar5 = 0;
          *pbVar6 = 0;
        }
        else {
          uVar5 = 1;
        }
        goto LAB_08039cb6;
      }
      goto LAB_08039cac;
    }
    cVar3 = *(char *)(param_1 + 0x26e) + -1;
    *(char *)(param_1 + 0x26e) = cVar3;
    if (cVar3 == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x252);
    if ((uVar2 & 0x30) == 0) {
      uVar4 = 0x80;
LAB_08039c72:
      if ((uVar4 & uVar2) != 0) goto LAB_08039c78;
    }
  }
LAB_08039cb4:
  uVar5 = 0;
LAB_08039cb6:
  return CONCAT44(in_lr,uVar5);
}

