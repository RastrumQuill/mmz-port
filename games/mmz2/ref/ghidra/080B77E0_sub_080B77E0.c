// sub_080B77E0 at 0x080B77E0 (thumb)

undefined8 sub_080B77E0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  uint local_24;
  
  sub_08002638(&DAT_084333f4,(DAT_0202e642 - 0x3d0) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433400,(DAT_0202e442 - 0xe) * 0x20 + 0x200);
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b79dd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  if ((DAT_0202ebb5 & 0x40) == 0) {
    local_24 = 0;
    sub_08002638(&DAT_08433408,(DAT_0202e644 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433414,(DAT_0202e444 - 5) * 0x20 + 0x200);
  }
  else {
    local_24 = 4;
    sub_08002638(&DAT_0843341c,(DAT_0202e646 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433428,(DAT_0202e446 - 6) * 0x20 + 0x200);
  }
  iVar5 = local_24 << 0x10;
  uVar2 = iVar5 >> 0x10;
  if ((uint)(int)(short)local_24 < uVar2 + 4) {
    do {
      iVar3 = sub_08006B84(DAT_0202f084);
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 0x25) = 1;
        *(undefined *)(iVar3 + 9) = 0x2a;
        *(undefined4 *)(iVar3 + 0x14) = 0x80b79dd;
        *(undefined2 *)(iVar3 + 0x20) = 0;
        *(undefined *)(iVar3 + 0x22) = 0;
        *(undefined *)(iVar3 + 0x10) = 1;
        *(char *)(iVar3 + 0x11) = (char)local_24;
        *(int *)(iVar3 + 0x28) = iVar1;
      }
      uVar4 = local_24 * 0x10000 + 0x10000;
      local_24 = uVar4 >> 0x10;
    } while ((int)uVar4 >> 0x10 < (int)(uVar2 + 4));
  }
  if (uVar2 < uVar2 + 4) {
    do {
      iVar3 = sub_08006B84(DAT_0202f084);
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 0x25) = 1;
        *(undefined *)(iVar3 + 9) = 0x2a;
        *(undefined4 *)(iVar3 + 0x14) = 0x80b79dd;
        *(undefined2 *)(iVar3 + 0x20) = 0;
        *(undefined *)(iVar3 + 0x22) = 0;
        *(undefined *)(iVar3 + 0x10) = 3;
        *(char *)(iVar3 + 0x11) = (char)((uint)iVar5 >> 0x10);
        *(int *)(iVar3 + 0x28) = iVar1;
      }
      iVar5 = iVar5 + 0x10000;
    } while (iVar5 >> 0x10 < (int)(uVar2 + 4));
  }
  return CONCAT44(in_lr,iVar1);
}

