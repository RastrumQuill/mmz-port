// sub_08040F34 at 0x08040F34 (thumb)

undefined4 sub_08040F34(int param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  uVar1 = CONCAT11(*(undefined *)(iVar6 + 0x1e),*(undefined *)(iVar6 + 0x70));
  if (uVar1 == 0x2801) {
LAB_08040fb4:
    iVar7 = 0xd00;
    iVar8 = -0x2a00;
  }
  else {
    if (0x2801 < uVar1) {
      if (uVar1 != 0x2805) {
        if (uVar1 < 0x2806) {
          if (uVar1 != 0x2803) goto LAB_08040fd0;
        }
        else if (uVar1 != 0x2807) {
          if (uVar1 != 0x2901) goto LAB_08040fd0;
          iVar7 = -0xc00;
          iVar8 = -0x600;
          goto LAB_0804100c;
        }
      }
      goto LAB_08040fb4;
    }
    if (uVar1 != 0x2703) {
      if (uVar1 < 0x2704) {
        uVar3 = 0x2701;
      }
      else {
        if (uVar1 == 0x2705) goto LAB_08040fa8;
        uVar3 = 0x2707;
      }
      if (uVar1 != uVar3) {
LAB_08040fd0:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
        return in_lr;
      }
    }
LAB_08040fa8:
    iVar7 = 0x1300;
    iVar8 = -0x2800;
  }
LAB_0804100c:
  if (CONCAT11(*(undefined *)(iVar6 + 0x1e),*(undefined *)(iVar6 + 0x70)) == 0x2901) {
    *(undefined *)(param_1 + 0x24) = 0xe0;
    uVar5 = ~(uint)(*(byte *)(iVar6 + 10) >> 4) & 1;
    if (uVar5 != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08041092;
    }
  }
  else {
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xbc);
    iVar4 = (uint)*(byte *)(iVar6 + 0xc3) * 0xc +
            *(int *)(&DAT_08852460 + (uint)*(byte *)(iVar6 + 0x2c9) * 4);
    iVar7 = iVar7 + *(int *)(iVar4 + 4);
    iVar8 = iVar8 + *(int *)(iVar4 + 8);
    bVar2 = *(byte *)(iVar6 + 10) >> 4;
    uVar5 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08041092;
    }
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xef;
LAB_08041092:
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = *(int *)(iVar6 + 0x54) + iVar7;
  }
  else {
    iVar7 = *(int *)(iVar6 + 0x54) - iVar7;
  }
  *(int *)(param_1 + 0x54) = iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + iVar8;
  return in_lr;
}

