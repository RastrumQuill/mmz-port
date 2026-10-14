// sub_0809E240 at 0x0809E240 (thumb)

undefined4 sub_0809E240(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  piVar4 = &local_14;
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      local_10 = *(int *)(param_1 + 0x58);
      local_14 = *(int *)(param_1 + 0x54) + -0x800;
      sub_080B2484(2,&local_14);
      local_14 = local_14 + 0x800;
      local_10 = local_10 + -0x400;
      goto LAB_0809e2aa;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xe) == '\0') {
        sub_08017700(param_1,0xa304);
        bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
        if ((bVar2 & 0x10) == 0) {
          *(undefined4 *)(param_1 + 0x5c) = 0xc0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(byte *)(param_1 + 0x4c) = bVar2 & 0x10;
          bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
        }
        else {
          *(undefined4 *)(param_1 + 0x5c) = 0xffffff40;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          *(undefined *)(param_1 + 0x4c) = 1;
          bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        }
        *(byte *)(param_1 + 0x4a) = bVar2;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
        *(undefined *)(param_1 + 0x13) = 0x28;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (*(char *)(param_1 + 0xe) != '\x01') {
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x13) != '\0') &&
         (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0'))
      {
        sub_08007390(param_1 + 0x74,&DAT_08367540);
      }
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = sub_08009B28();
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      }
      if (*(int *)(param_1 + 0x5c) < 1) {
        iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
        if (iVar3 == 0) goto LAB_0809e428;
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        bVar2 = *(byte *)(param_1 + 10);
        uVar5 = ~(uint)(bVar2 >> 4) & 1;
        if (uVar5 == 0) goto LAB_0809e404;
        bVar2 = bVar2 | 0x10;
      }
      else {
        iVar3 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
        if (iVar3 == 0) goto LAB_0809e428;
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        bVar2 = *(byte *)(param_1 + 10);
        uVar5 = ~(uint)(bVar2 >> 4) & 1;
        if (uVar5 == 0) {
LAB_0809e404:
          bVar2 = bVar2 & 0xef;
        }
        else {
          bVar2 = bVar2 | 0x10;
        }
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
LAB_0809e428:
      sub_080177F4(param_1);
      return in_lr;
    }
  }
  piVar4 = (int *)(param_1 + 0x54);
LAB_0809e2aa:
  sub_080B2484(2,piVar4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

