// sub_08039A80 at 0x08039A80 (thumb)

undefined8 sub_08039A80(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(param_1 + 0x26d);
  bVar1 = *pbVar6;
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x26c) + -1;
    *(char *)(param_1 + 0x26c) = cVar3;
    if (cVar3 == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x252);
    if (((uVar2 & 0x40) == 0) && ((uVar2 & 0x10) == 0)) {
      uVar4 = 0x20;
LAB_08039b40:
      if ((uVar4 & uVar2) == 0) goto LAB_08039b7e;
    }
    *(undefined *)(param_1 + 0x26c) = 10;
    goto LAB_08039b4a;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08039b76;
    uVar2 = *(ushort *)(param_1 + 0x252);
    if ((uVar2 & 0x40) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_08039b7e;
        *(undefined *)(param_1 + 0x26c) = 10;
      }
      else {
        *(undefined *)(param_1 + 0x26c) = 10;
      }
LAB_08039b4a:
      *pbVar6 = *pbVar6 + 1;
    }
  }
  else {
    if (bVar1 == 2) {
      cVar3 = *(char *)(param_1 + 0x26c) + -1;
      *(char *)(param_1 + 0x26c) = cVar3;
      if (cVar3 == -1) {
        *pbVar6 = 0;
      }
      uVar2 = *(ushort *)(param_1 + 0x252);
      if ((uVar2 & 0x30) == 0) {
        uVar4 = 0x40;
        goto LAB_08039b40;
      }
      goto LAB_08039b7e;
    }
    if (bVar1 == 3) {
      cVar3 = *(char *)(param_1 + 0x26c) + -1;
      *(char *)(param_1 + 0x26c) = cVar3;
      if (cVar3 == -1) {
        uVar5 = 0;
        *pbVar6 = 0;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_08039b80;
    }
LAB_08039b76:
    *(undefined *)(param_1 + 0x26d) = 0;
  }
LAB_08039b7e:
  uVar5 = 0;
LAB_08039b80:
  return CONCAT44(in_lr,uVar5);
}

