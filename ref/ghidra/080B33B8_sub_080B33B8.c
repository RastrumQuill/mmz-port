// sub_080B33B8 at 0x080B33B8 (thumb)

undefined4 sub_080B33B8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12);
    bVar1 = cVar2 - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((byte)(cVar2 - 1U) < 0x3c) {
      if ((bVar1 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  if (((*(ushort *)(undefined4 *)(param_1 + 0x90) & 4) == 0) || (*(int *)(param_1 + 0xbc) == 0)) {
    if ((*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xb8)) ||
       (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c)), cVar2 == '\0')) {
      if (*(int *)(param_1 + 0x58) < 0x700) {
        iVar3 = *(int *)(param_1 + 0x58) + 0x40;
        goto LAB_080b3504;
      }
    }
    else {
      iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(int *)(param_1 + 0x50) = iVar3 + 1;
      iVar3 = 0;
LAB_080b3504:
      *(int *)(param_1 + 0x58) = iVar3;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (uVar6 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), uVar6 < 0x8001)) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 8);
    goto LAB_080b3560;
  }
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == '\0') {
    piVar5 = &DAT_02022888;
LAB_080b348c:
    iVar3 = *piVar5 + 0x10;
LAB_080b3490:
    *piVar5 = iVar3;
  }
  else {
    if (cVar2 == '\x01') {
      piVar5 = &DAT_02022888;
      iVar3 = DAT_02022888 + 0x20;
      goto LAB_080b3490;
    }
    if (cVar2 == '\x02') {
      piVar5 = &DAT_02022888;
      iVar3 = DAT_02022888 + 0x100;
      goto LAB_080b3490;
    }
    if (cVar2 == '\x03') {
      piVar5 = &DAT_02022884;
      iVar3 = DAT_02022884 + 4;
      goto LAB_080b3490;
    }
    if (cVar2 == '\x04') {
LAB_080b348a:
      piVar5 = &DAT_02022884;
      goto LAB_080b348c;
    }
    if (cVar2 == '\x05') {
      if (*DAT_02022b20 < 9) {
        *DAT_02022b20 = *DAT_02022b20 + 1;
      }
      sub_08001EAC(0x77);
    }
    else if (cVar2 == '\x06') {
      uVar6 = (*(byte *)(param_1 + 0x11) & 0x7f) + 0x8b;
      (&DAT_02022ad4)[(int)uVar6 >> 3] = (byte)(1 << (uVar6 & 7)) | (&DAT_02022ad4)[(int)uVar6 >> 3]
      ;
      goto LAB_080b348a;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar4 = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 0xc);
LAB_080b3560:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

