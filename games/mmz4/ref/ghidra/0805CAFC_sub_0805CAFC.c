// sub_0805CAFC at 0x0805CAFC (thumb)

undefined4 sub_0805CAFC(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(&DAT_08857458 + (uint)*(byte *)(param_1 + 0xbb) * 4) +
                   (uint)*(byte *)(param_1 + 0xbc));
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = false;
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar3 = sub_080C3AD0(param_1);
      *(int *)(param_1 + 0xcc) = iVar3;
      if (iVar3 != 0) goto LAB_0805cb3e;
    }
    else {
      bVar2 = true;
LAB_0805cb3e:
      if (!bVar2) {
        iVar4 = *(int *)(param_1 + 0xb4) + *(short *)(&DAT_08857468 + (uint)bVar1 * 2) + -0x5000;
        *(int *)(param_1 + 0x5c) = iVar4;
        iVar3 = -1;
        if (*(int *)(param_1 + 0x58) < iVar4) {
          iVar3 = 1;
        }
        *(int *)(param_1 + 100) = iVar3;
        *(int *)(param_1 + 0x60) = iVar3 * 0x300;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        goto LAB_0805cb90;
      }
    }
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08128884(param_1,0x805cd31);
  }
  else {
LAB_0805cb90:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_0885726c)
                         [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
                 (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    if (-1 < *(int *)(param_1 + 100) * (iVar3 - *(int *)(param_1 + 0x5c))) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x5c);
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

