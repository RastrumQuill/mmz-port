// sub_08055298 at 0x08055298 (thumb)

undefined4 sub_08055298(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_080033F0(param_1 + 0x6c,8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb8) = 0;
    iVar5 = *(int *)(param_1 + 0x54) >> 5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar5 = 0x15 - iVar5;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    *(char *)(param_1 + 0x13) = (char)iVar5;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080033F0(param_1 + 0x6c,(&DAT_082af8f4)[*(byte *)(param_1 + 0x12)]);
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) >> 5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar5 = 0x15 - iVar5;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    *(char *)(param_1 + 0x13) = (char)iVar5;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (2 < bVar2) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = sub_08054724(param_1);
  if (cVar1 == '\x01') {
    if (0x100 < *(int *)(param_1 + 0x58)) {
      sub_08001EAC(0x7a);
    }
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    cVar1 = *(char *)(param_1 + 0xb8) + '\x01';
    *(char *)(param_1 + 0xb8) = cVar1;
    if (cVar1 == '\x05') {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
  }
  uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x100);
  uVar3 = uVar3 & 0xf;
  if (uVar3 < 0xe) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(&DAT_082af864 + uVar3 * 4);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(&DAT_082af89c + uVar3 * 4);
  }
  if ((uVar3 != 0) && (*(int *)(param_1 + 0x58) < 0x100)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  }
  iVar5 = *(int *)(param_1 + 0x54) * 0xfa;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar5 = iVar5 >> 8;
  *(int *)(param_1 + 0x54) = iVar5;
  iVar4 = *(int *)(param_1 + 0x58) * 0xfa;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar4 >> 8;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      iVar5 = iVar5 + 0x60;
    }
    else {
      iVar5 = iVar5 + -0x60;
    }
    *(int *)(param_1 + 0x54) = iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x54);
  uVar3 = (uint)(0 < iVar5);
  *(uint *)(param_1 + 0x54) = iVar5 + -0xc + uVar3 * 0x18;
  *(bool *)(param_1 + 0x44) = 0 < iVar5;
  if (uVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

