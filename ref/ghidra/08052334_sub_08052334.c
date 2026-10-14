// sub_08052334 at 0x08052334 (thumb)

undefined4 sub_08052334(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar5;
  if (iVar5 < 1) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar4 = (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + -0x1800;
  iVar2 = iVar4 >> 8;
  iVar2 = sub_080C88FC((iVar5 >> 8) * (iVar5 >> 8) + iVar2 * iVar2);
  uVar3 = (uint)(iVar2 << 0x10) >> 8;
  iVar5 = sub_080C8AD0(iVar5 * 0x100,uVar3);
  iVar2 = sub_080C8AD0(iVar4 * 0x100,uVar3);
  iVar5 = iVar5 * 0x180;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar2 = iVar2 * 0x180;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar4 = *(int *)(param_1 + 0x54) * 0xf0;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  iVar5 = (iVar5 >> 8) * 0xf;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar4 = (iVar4 >> 8) + (iVar5 >> 8);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar5 = *(int *)(param_1 + 0x58) * 0xf0;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar5 >> 8;
  iVar2 = (iVar2 >> 8) * 0xf;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar5 = (iVar5 >> 8) + (iVar2 >> 8);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
  iVar5 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x4c);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc4);
  }
  if (0x18000 < iVar5) {
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

