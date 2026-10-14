// sub_080D0FFC at 0x080D0FFC (thumb)

undefined4 sub_080D0FFC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0xd) == '\x03') &&
     (bVar1 = *(byte *)(param_1 + 0xb9), *(byte *)(param_1 + 0xb9) = bVar1 + 1, (bVar1 & 0xf) == 0))
  {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + 0x800;
    sub_080BC790(&local_24,0,4);
  }
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar4 + 0x50);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar4 + 0x52);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(byte *)(iVar4 + 0xd) < 5) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    uVar2 = 0x40;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (*(int *)(param_1 + 0x5c) < 0x1800) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      }
      if (*(char *)(param_1 + 0x11) == '\0') {
        bVar1 = *(byte *)(param_1 + 0x13);
        iVar5 = *(int *)(iVar4 + 0x54) -
                (uint)(bVar1 >> 4) *
                (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb8) + 0x40 & 0xff];
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x13);
        iVar5 = *(int *)(iVar4 + 0x54) +
                (uint)(bVar1 >> 4) *
                (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb8) + 0x40 & 0xff];
      }
      pbVar9 = (byte *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x54) = iVar5;
      iVar8 = *(int *)(iVar4 + 0x58) +
              (((uint)bVar1 << 0x18) >> 0x1c) * (int)(short)(&DAT_080ef450)[*pbVar9];
      *(int *)(param_1 + 0x58) = iVar8;
      pbVar10 = (byte *)(param_1 + 0xba);
      iVar5 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[*pbVar10];
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar5 >> 8);
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar5 = (int)(short)(&DAT_080ef450)[*pbVar10] * *(int *)(param_1 + 0x60);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        iVar5 = iVar5 >> 8;
      }
      else {
        iVar5 = (int)(short)(&DAT_080ef450)[*pbVar10] * *(int *)(param_1 + 0x60);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        iVar5 = -(iVar5 >> 8);
      }
      *(int *)(param_1 + 0x58) = iVar8 + iVar5;
      *pbVar9 = *pbVar9 + 2;
      if (*(byte *)(iVar4 + 0xd) < 2) {
        return in_lr;
      }
      goto LAB_080d122a;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != -1) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CF5F8(param_1);
      return in_lr;
    }
    uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         (short)(&DAT_080ef450)[(uVar6 * 2 >> 0x11 & 0xff) + 0x40 & 0xff] * 2;
    uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar6 & 0x7fffffff;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + (short)(&DAT_080ef450)[uVar6 * 2 >> 0x11 & 0xff] * 2;
    if ((*(byte *)(*(int *)(iVar4 + 0x18) + 9) & 0x40) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffec0;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar7 = 0xffffffd0;
    }
    else {
      uVar7 = 0xffffffe0;
    }
    *(undefined4 *)(param_1 + 100) = uVar7;
    uVar2 = 0x80;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
LAB_080d122a:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

