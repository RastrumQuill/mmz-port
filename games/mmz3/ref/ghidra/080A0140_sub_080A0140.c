// sub_080A0140 at 0x080A0140 (thumb)

undefined4 sub_080A0140(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x118);
        iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
        iVar8 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1800);
        iVar5 = iVar6 >> 8;
        iVar4 = iVar8 >> 8;
        iVar5 = sub_080FE124(iVar5 * iVar5 + iVar4 * iVar4);
        uVar7 = (uint)(iVar5 << 0x10) >> 8;
        iVar5 = FUN_080fe2f8(iVar6 * 0x100,uVar7);
        *(int *)(param_1 + 0x5c) = iVar5 * 5;
        iVar5 = FUN_080fe2f8(iVar8 * 0x100,uVar7);
        *(int *)(param_1 + 0x60) = iVar5 * 5;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080a0282;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sVar2 = sub_08009A3C();
      if (sVar2 != 0) {
        uVar7 = 0x20000000;
        iVar5 = 2;
        do {
          sub_080BC178(iVar3,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x100,
                       uVar7 >> 0x18);
          uVar7 = uVar7 + 0x20000000;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
      }
      sub_080177F4(param_1);
      goto LAB_080a0282;
    }
    if (bVar1 != 0) goto LAB_080a0282;
    *(int *)(param_1 + 100) = (int)*(short *)(&DAT_0836789e + (uint)*(byte *)(param_1 + 0x12) * 2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar5;
  if (iVar5 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
LAB_080a0282:
  if (1 < *(byte *)(iVar3 + 0xc)) {
    uVar7 = 0x20000000;
    iVar5 = 3;
    do {
      sub_080BC178(iVar3,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x100,
                   uVar7 >> 0x18);
      uVar7 = uVar7 + 0x40000000;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

