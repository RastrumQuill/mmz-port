// sub_08080748 at 0x08080748 (thumb)

undefined4 sub_08080748(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08076600(param_1);
    sub_080033F0(param_1 + 0x6c,1);
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    uVar3 = bVar1 & 1;
    *(uint *)(param_1 + 0x54) = uVar3 * 0xe00 + -0x700;
    *(undefined4 *)(param_1 + 0x58) = 0x30;
    *(uint *)(param_1 + 0x5c) = uVar3 * -0x40 + 0x20;
    *(char *)(param_1 + 0x44) = (char)uVar3;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b27ac,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    cVar2 = '\x18';
  }
  else {
    cVar2 = -0x18;
  }
  cVar2 = *(char *)(param_1 + 0x12) + cVar2;
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x1f) = cVar2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x6000 < uVar3) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

