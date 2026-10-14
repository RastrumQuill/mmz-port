// sub_08004178 at 0x08004178 (thumb)

undefined4 sub_08004178(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 in_lr;
  int *local_58;
  uint *local_54;
  uint local_44;
  
  local_54 = DAT_030032d0;
  local_44 = 0;
  local_58 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      if (0x1f < local_44) {
        return in_lr;
      }
      if ((uint)((int)&DAT_030032d0 - (int)DAT_030032d0) >> 3 == 0) {
        return in_lr;
      }
      iVar2 = (int)*(short *)(local_58 + 1) + (int)*(short *)(local_58 + 3) >> 1;
      iVar3 = (int)*(short *)((int)local_58 + 6) + (int)*(short *)((int)local_58 + 0xe) >> 1;
      uVar9 = *(short *)(local_58 + 1) - iVar2;
      uVar9 = uVar9 ^ (int)uVar9 >> 0x1f;
      uVar14 = 0;
      if (0 < (int)uVar9) {
        uVar14 = uVar9;
      }
      uVar9 = *(short *)(local_58 + 3) - iVar2;
      uVar9 = uVar9 ^ (int)uVar9 >> 0x1f;
      if ((int)uVar14 < (int)uVar9) {
        uVar14 = uVar9;
      }
      uVar9 = *(short *)(local_58 + 5) - iVar2 ^ *(short *)(local_58 + 5) - iVar2 >> 0x1f;
      if ((int)uVar14 < (int)uVar9) {
        uVar14 = uVar9;
      }
      uVar9 = (uint)(9 < (int)uVar14);
      if (0x11 < (int)uVar14) {
        uVar9 = uVar9 + 1;
      }
      uVar10 = *(short *)((int)local_58 + 6) - iVar3;
      uVar10 = uVar10 ^ (int)uVar10 >> 0x1f;
      uVar14 = 0;
      if (0 < (int)uVar10) {
        uVar14 = uVar10;
      }
      uVar10 = *(short *)((int)local_58 + 0xe) - iVar3;
      uVar10 = uVar10 ^ (int)uVar10 >> 0x1f;
      if ((int)uVar14 < (int)uVar10) {
        uVar14 = uVar10;
      }
      uVar10 = *(short *)((int)local_58 + 0x16) - iVar3;
      uVar10 = uVar10 ^ (int)uVar10 >> 0x1f;
      if ((int)uVar14 < (int)uVar10) {
        uVar14 = uVar10;
      }
      uVar10 = (uint)(9 < (int)uVar14);
      if (0x11 < (int)uVar14) {
        uVar10 = uVar10 + 1;
      }
      iVar8 = uVar9 + uVar10 + 6;
      iVar11 = (int)*(short *)(local_58 + 5) - (int)*(short *)(local_58 + 3);
      iVar4 = (int)*(short *)(local_58 + 1) - (int)*(short *)(local_58 + 5);
      iVar5 = (int)*(short *)(local_58 + 3) - (int)*(short *)(local_58 + 1);
      iVar6 = (uVar10 * 9 + uVar9 * 3) * 8;
      iVar7 = (*(int *)(&UNK_083123ec + iVar6) * iVar11 + *(int *)(&UNK_083123f4 + iVar6) * iVar4 +
              *(int *)(&UNK_083123fc + iVar6) * iVar5) * 0x100 >> iVar8;
      iVar11 = (-iVar11 * *(int *)(&DAT_083123e8 + iVar6) + -iVar4 * *(int *)(&UNK_083123f0 + iVar6)
               + *(int *)(&UNK_083123f8 + iVar6) * -iVar5) * 0x100 >> iVar8;
      iVar12 = (int)*(short *)((int)local_58 + 0x16) - (int)*(short *)((int)local_58 + 0xe);
      iVar4 = (int)*(short *)((int)local_58 + 6) - (int)*(short *)((int)local_58 + 0x16);
      iVar5 = (int)*(short *)((int)local_58 + 0xe) - (int)*(short *)((int)local_58 + 6);
      iVar13 = (*(int *)(&UNK_083123ec + iVar6) * iVar12 + *(int *)(&UNK_083123f4 + iVar6) * iVar4 +
               *(int *)(&UNK_083123fc + iVar6) * iVar5) * 0x100 >> iVar8;
      iVar8 = (-iVar12 * *(int *)(&DAT_083123e8 + iVar6) + *(int *)(&UNK_083123f0 + iVar6) * -iVar4
              + *(int *)(&UNK_083123f8 + iVar6) * -iVar5) * 0x100 >> iVar8;
      iVar5 = iVar8 * iVar7;
      iVar4 = iVar11 * iVar13;
      if (0xf < iVar5 - iVar4) {
        iVar6 = local_44 * 0x20;
        iVar4 = (iVar5 >> 8) - (iVar4 >> 8);
        uVar1 = sub_080EF150(iVar8 << 8,iVar4);
        *(undefined2 *)(&DAT_03002ed6 + iVar6) = uVar1;
        uVar1 = sub_080EF150(iVar13 * -0x100,iVar4);
        *(undefined2 *)(&DAT_03002ee6 + iVar6) = uVar1;
        uVar1 = sub_080EF150(iVar11 * -0x100,iVar4);
        *(undefined2 *)(&DAT_03002ede + iVar6) = uVar1;
        uVar1 = sub_080EF150(iVar7 << 8,iVar4);
        *(undefined2 *)(&DAT_03002eee + iVar6) = uVar1;
        iVar4 = uVar9 + uVar10 * 3;
        *local_54 = iVar3 - (8 << uVar10) & 0xffU | 0x700 |
                    (uint)(byte)(&UNK_083124c9)[iVar4] << 0xe |
                    (iVar2 - (8 << uVar9) & 0x1ffU) << 0x10 | local_44 << 0x19 |
                    (uint)(byte)(&UNK_083124d2)[iVar4] << 0x1e;
        *(ushort *)(local_54 + 1) =
             (ushort)(byte)(&UNK_083124c0)[iVar4] + (ushort)*(byte *)((int)local_58 + 0x1d) | 0x800
             | (ushort)*(byte *)(local_58 + 7) << 0xc;
        DAT_030032d0 = DAT_030032d0 + 2;
        local_54 = local_54 + 2;
        local_44 = local_44 + 1 & 0xff;
      }
      local_58 = (int *)*local_58;
    } while (local_58 != (int *)0x0);
  }
  return in_lr;
}

