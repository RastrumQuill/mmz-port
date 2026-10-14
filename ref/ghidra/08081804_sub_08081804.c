// sub_08081804 at 0x08081804 (thumb)

undefined4 sub_08081804(int param_1)

{
  byte bVar1;
  short sVar2;
  byte extraout_var;
  int iVar3;
  char cVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (((((*(ushort *)(param_1 + 0x90) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf) == 0)) &&
      ((bool)(~(*(byte *)(iVar6 + 10) >> 4) & 1) !=
       *(int *)(iVar6 + 0x4c) < *(int *)(DAT_0202286c + 0x4c))) &&
     (iVar3 = sub_08001F08(0x3d), iVar3 == 0)) {
    sub_08001EAC(0x3d);
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0xc0);
    sVar2 = *(short *)(param_1 + 0xc4) + -1;
    *(short *)(param_1 + 0xc4) = sVar2;
    if (sVar2 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      sub_080C88E8(((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) + -0x1000) * 0x10 >>
                   0x10,(*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x10 >> 0x10);
      puVar5 = (ushort *)(param_1 + 0xc2);
      *puVar5 = (ushort)extraout_var;
      iVar3 = (short)(&DAT_080c8e24)[(short)*puVar5 + 0x40] * 0x180;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x54) = iVar3 >> 8;
      iVar3 = (short)(&DAT_080c8e24)[(short)*puVar5] * 0x180;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x58) = iVar3 >> 8;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    if (*(char *)(iVar6 + 0xd) == '\x13') {
      iVar6 = (uint)*(byte *)(param_1 + 9) << 2;
      goto LAB_08081a10;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      bVar1 = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0xc0);
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 0x1f) == 0) {
        sub_08081048(param_1,4,*(undefined *)(param_1 + 0x12));
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined2 *)(param_1 + 0xc4) = 0x20;
      }
      if (*(char *)(iVar6 + 0xd) == '\x13') {
        iVar6 = (uint)*(byte *)(param_1 + 9) << 2;
        goto LAB_08081a10;
      }
    }
  }
  else if (bVar1 == 2) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0xc0);
    cVar4 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    if (cVar4 == '\x14') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined2 *)(param_1 + 0xc4) = 0x200;
    }
  }
  else if (bVar1 == 3) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0xc0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    sVar2 = *(short *)(param_1 + 0xc4) + -1;
    *(short *)(param_1 + 0xc4) = sVar2;
    if (sVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
  }
  if (*(byte *)(iVar6 + 0xc) < 2) {
    return in_lr;
  }
  iVar6 = (uint)*(byte *)(param_1 + 9) << 2;
LAB_08081a10:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)((int)&DAT_082b17b0 + iVar6) + 8);
  *(undefined *)(param_1 + 0x11) = 1;
  return in_lr;
}

