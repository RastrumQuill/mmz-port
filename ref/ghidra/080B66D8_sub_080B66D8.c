// sub_080B66D8 at 0x080B66D8 (thumb)

undefined4 sub_080B66D8(int param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(param_1 + 0x20) + 0xc) & 0xffff00) != 0x20600) {
    uVar8 = (uint)*(ushort *)(param_1 + 0xd0);
    uVar9 = uVar8 - 1;
    *(ushort *)(param_1 + 0xd0) = (ushort)uVar9;
    sub_08018FF8(*(int *)(param_1 + 0x20),(int *)(param_1 + 0xc4),0);
    if (*(byte *)(param_1 + 0xc) < 2) {
      if (*(byte *)(param_1 + 0xc) == 1) {
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b82a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        iVar6 = *(int *)(param_1 + 0xbc) +
                ((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0xd3) + 0x40] * 0xc0 >> 8);
        iVar3 = *(int *)(param_1 + 0xc0) +
                ((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0xd3)] * 0xc0 >> 8);
        *(int *)(param_1 + 0xbc) = iVar6;
        *(int *)(param_1 + 0xc0) = iVar3;
        iVar7 = *(byte *)(param_1 + 0x12) + 1;
        iVar7 = iVar7 + (iVar7 >> 4) * -0x10;
        *(char *)(param_1 + 0x12) = (char)iVar7;
        *(int *)(param_1 + 0x4c) =
             iVar6 + *(int *)(param_1 + 0xc4) + (short)(&DAT_080c8e24)[iVar7 * 0x10] * 0x10;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 200) + iVar3;
        iVar6 = iVar7 * 0x10 + 0x40;
        iVar3 = iVar6;
        if (iVar6 < 0) {
          iVar3 = iVar7 * 0x10 + 0x13f;
        }
        iVar6 = iVar6 + (iVar3 >> 8) * -0x100;
        iVar4 = iVar6 + 0x100;
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = iVar6 + 0x1ff;
        }
        iVar3 = 2;
        if (0x7f < iVar4 + (iVar7 >> 8) * -0x100) {
          iVar3 = 3;
        }
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | (byte)(iVar3 << 2);
      }
      else {
        iVar3 = 2;
      }
      uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),iVar3);
      *(undefined *)(param_1 + 0x13) = uVar1;
      sub_080B50EC(param_1);
      if (uVar9 < 0x30c) {
        uVar5 = 2;
        if (0xb3 < uVar9) {
          uVar5 = 4;
          uVar9 = uVar8 - 0xb5;
        }
        iVar3 = sub_080C8CB0(uVar9 + 1,uVar5);
        if (iVar3 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xfe;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 1;
        }
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      if (uVar9 != 0) {
        return in_lr;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
  sub_08099D0C(param_1);
  return in_lr;
}

