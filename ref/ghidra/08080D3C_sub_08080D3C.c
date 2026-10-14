// sub_08080D3C at 0x08080D3C (thumb)

undefined4 sub_08080D3C(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3 + -1;
    if (cVar3 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0xff;
    }
    else if (*(char *)(param_1 + 0xf) == '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -3;
    }
    else {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x03';
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) &&
       (cVar3 = *(char *)(param_1 + 0x12), *(char *)(param_1 + 0x12) = cVar3 + -1, cVar3 == '\0')) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      uVar6 = sub_080C88E8(((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) + -0x1000) *
                           0x10 >> 0x10,
                           (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x10 >> 0x10
                          );
      iVar5 = (uVar6 & 0xffff) + 0x8000;
      iVar4 = iVar5 >> 8;
      *(short *)(param_1 + 0xc2) = (short)((uint)iVar5 >> 8);
      uVar6 = (uint)*(byte *)(param_1 + 0x13);
      if ((int)uVar6 < (int)*(short *)(param_1 + 0xc2)) {
        uVar6 = iVar4 - uVar6;
        *(char *)(param_1 + 0x12) = (char)uVar6;
        *(bool *)(param_1 + 0xf) = (uVar6 & 0xff) < 0x7f;
      }
      else {
        iVar4 = uVar6 - iVar4;
        *(char *)(param_1 + 0x12) = (char)iVar4;
        *(byte *)(param_1 + 0xf) = (byte)((uint)(iVar4 * 0x1000000) >> 0x1f);
      }
      if (*(char *)(param_1 + 0x12) < '\0') {
        *(byte *)(param_1 + 0x12) = ~*(byte *)(param_1 + 0x12);
      }
      cVar3 = sub_080C8C38(*(undefined *)(param_1 + 0x12),3);
      *(char *)(param_1 + 0x12) = cVar3 + '\x03';
    }
  }
  else if ((bVar1 == 2) &&
          (cVar3 = *(char *)(param_1 + 0x12), *(char *)(param_1 + 0x12) = cVar3 + -1, cVar3 == '\0')
          ) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  psVar7 = (short *)(param_1 + 0xc0);
  sVar2 = *psVar7;
  *psVar7 = sVar2 + 0x10;
  if (0x400 < (short)(sVar2 + 0x10)) {
    *psVar7 = 0x400;
  }
  uVar6 = *(byte *)(param_1 + 0x13) + 0x80 & 0xff;
  iVar5 = (int)*psVar7 * (int)(short)(&DAT_080c8e24)[uVar6 + 0x40];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar5 >> 8;
  iVar4 = (int)(short)(&DAT_080c8e24)[uVar6] * (int)*psVar7;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar4 >> 8;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar5 >> 8);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar4 >> 8);
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
  return in_lr;
}

