// sub_08085B80 at 0x08085B80 (thumb)

undefined4 sub_08085B80(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,6);
    sub_0800561C(param_1 + 0x74,&DAT_082b2ef0);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar4 = (uint)*(byte *)(param_1 + 0xb8);
    iVar5 = (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + -0x1000;
    iVar2 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                         iVar5 * 0x100 >> 0x10);
    iVar2 = (int)((((uint)(iVar2 << 0x10) >> 0x18) - uVar4) * 0x1000000) >> 0x18;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (4 < iVar2) {
      uVar3 = (uint)*(byte *)(param_1 + 0x13);
      if (0 < iVar5) {
        uVar3 = uVar3 ^ 1;
      }
      uVar4 = uVar4 + 2 + uVar3 * -4 & 0xff;
    }
    uVar3 = uVar4;
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (uVar4 < 0x60) {
        uVar3 = 0x60;
      }
      if (0xa0 < uVar3) {
        uVar3 = 0xa0;
      }
    }
    else if (((uVar4 - 0x21 & 0xff) < 0xbf) && (uVar3 = 0xe0, uVar4 < 0x7f)) {
      uVar3 = 0x20;
    }
    iVar2 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080c8e24)[uVar3 + 0x40];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar2 >> 8;
    iVar5 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080c8e24)[uVar3];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x58) = iVar5 >> 8;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar2 >> 8);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar5 >> 8);
    *(byte *)(param_1 + 0xb8) = (byte)uVar3;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  cVar1 = sub_080858D4(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

