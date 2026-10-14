// sub_08002D68 at 0x08002D68 (thumb)

undefined4 sub_08002D68(uint param_1,undefined2 param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar3 = (param_1 & 0xff) + 1;
  do {
    if ((byte)(&DAT_02000e40)[iVar6] == uVar3) {
      return in_lr;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  iVar7 = 0;
  iVar6 = iVar7;
  if (DAT_02000e40 != '\0') {
    do {
      iVar7 = iVar6 + 1;
      if (0xf < iVar7) break;
      pcVar4 = &DAT_02000e41 + iVar6;
      iVar6 = iVar7;
    } while (*pcVar4 != '\0');
  }
  if (iVar7 != 0x10) {
    iVar6 = iVar7 * 0x14;
    iVar5 = (param_1 & 0xff) * 4;
    (&DAT_02000e50)[iVar7 * 5] =
         (undefined *)(*(int *)(&DAT_0840e500 + iVar5) + (int)(&DAT_0840e500 + iVar5));
    *(undefined4 *)(iVar6 + 0x2000e54) = *(undefined4 *)(&DAT_08413200 + iVar5);
    (&DAT_02000e60)[iVar7 * 10] = 0;
    (&DAT_02000e62)[iVar7 * 10] = param_2;
    sub_08004B28(&DAT_02000e58 + iVar7 * 5);
    sub_08004B3C(&DAT_02000e58 + iVar7 * 5,0);
    iVar5 = (&DAT_02000e50)[iVar7 * 5];
    bVar1 = *(byte *)(iVar5 + 1);
    sVar2 = ((ushort)*(byte *)(iVar5 + 2) - (ushort)bVar1) + 1;
    if (((&DAT_02000e62)[iVar7 * 10] & 0x1ff) == 0) {
      sub_080EEF6C(iVar5 + (int)sVar2 *
                           (uint)*(byte *)((char)(&DAT_02000e5d)[iVar6] * 2 +
                                          *(int *)((uint)(byte)(&DAT_02000e5c)[iVar6] * 4 +
                                                  (&DAT_02000e58)[iVar7 * 5])) * 2 + 4,
                   (int)&DAT_03002ac0 + (uint)bVar1 * 2 + (uint)(ushort)(&DAT_02000e62)[iVar7 * 10],
                   (int)sVar2 & 0x1fffff);
    }
    else {
      sub_080EEF6C(iVar5 + (int)sVar2 *
                           (uint)*(byte *)((char)(&DAT_02000e5d)[iVar6] * 2 +
                                          *(int *)((uint)(byte)(&DAT_02000e5c)[iVar6] * 4 +
                                                  (&DAT_02000e58)[iVar7 * 5])) * 2 + 4,
                   (int)&DAT_03002ac0 +
                   (bVar1 & 0xf) * 2 + (uint)(ushort)(&DAT_02000e62)[iVar7 * 10],
                   (int)sVar2 & 0x1fffff);
    }
    (&DAT_02000e40)[iVar7] = (char)uVar3;
  }
  return in_lr;
}

