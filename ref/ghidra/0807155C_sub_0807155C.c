// sub_0807155C at 0x0807155C (thumb)

undefined4 sub_0807155C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b1238);
    sub_080033F0(param_1 + 0x6c,9);
    iVar3 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + -0x1000) *
                         0x100 >> 0x10);
    uVar4 = ((uint)(iVar3 << 0x10) >> 0x18) + 0x10 & 0xe0;
    iVar3 = (short)(&DAT_080c8e24)[uVar4 + 0x40] * 2;
    *(int *)(param_1 + 0x54) = iVar3;
    *(bool *)(param_1 + 0x44) = 0 < iVar3;
    if (iVar3 < 1) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x58) = (int)(short)(&DAT_080c8e24)[uVar4] << 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080706E4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = *(int *)(param_1 + 0xbc);
  iVar5 = *(int *)(param_1 + 0x4c) - iVar3;
  if (0xa000 < iVar5) {
    *(int *)(param_1 + 0x4c) = iVar3 + 0xa000;
  }
  if (iVar5 < -0xa000) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc) + -0xa000;
  }
  iVar3 = *(int *)(param_1 + 0x54) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  iVar3 = *(int *)(param_1 + 0x58) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar3 >> 8;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

