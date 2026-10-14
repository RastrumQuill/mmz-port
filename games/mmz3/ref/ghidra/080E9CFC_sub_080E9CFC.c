// sub_080E9CFC at 0x080E9CFC (thumb)

undefined4 sub_080E9CFC(int *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 in_lr;
  
  iVar8 = *param_1;
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    DAT_020023c0 = DAT_020023c0 | 0x100;
    sVar2 = *(short *)(iVar6 + 0xa4);
    uVar3 = sub_08025A74(iVar6);
    uVar3 = uVar3 & 0xff;
    iVar6 = param_1[2];
    bVar1 = *(byte *)(iVar6 + 0xc0);
    uVar7 = (uint)*(byte *)(iVar6 + 0xc1);
    iVar6 = (*(byte *)(iVar6 + 0xc2) & 1) * 0x80008 +
            (short)(*(byte *)(iVar6 + 0xc2) & 2) * 0x300030;
    *(undefined4 *)(iVar8 + 0x280) = 0x120c120b;
    *(undefined4 *)(iVar8 + 0x2c0) = 0x122c122b;
    if (bVar1 == uVar7) {
      *(uint *)(iVar8 + 0x300) = uVar7 * 0x20002 + iVar6 + 0x120e120d;
      *(uint *)(iVar8 + 0x340) = uVar7 * 0x20002 + iVar6 + 0x122e122d;
    }
    else {
      iVar4 = (uint)bVar1 * 0x20002;
      *(int *)(iVar8 + 0x300) = iVar4 + iVar6 + 0x120e120d;
      *(int *)(iVar8 + 0x340) = iVar4 + iVar6 + 0x124e124d;
      *(uint *)(iVar8 + 0x380) = uVar7 * 0x20002 + iVar6 + 0x120e120d;
      *(uint *)(iVar8 + 0x3c0) = uVar7 * 0x20002 + iVar6 + 0x122e122d;
    }
    piVar9 = (int *)(iVar8 + 0x240);
    uVar7 = (uint)sVar2;
    if ((int)uVar3 < (int)uVar7) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar5 = (uint)(short)(sVar2 - (short)uVar3);
        do {
          if ((int)uVar5 < (int)(uVar7 + 4)) {
            if ((int)uVar5 < (int)uVar7) {
              *piVar9 = 0x12a312a2;
            }
            else {
              *piVar9 = (uVar5 & 3) * -0x200020 + 0x12a312a2;
            }
          }
          else {
            *piVar9 = 0x12231222;
          }
          uVar7 = uVar7 + 4 & 0xffff;
          piVar9 = piVar9 + -0x10;
        } while (uVar7 < uVar3);
      }
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          if ((int)uVar7 < (int)(uVar5 + 4)) {
            if ((int)uVar7 < (int)uVar5) {
              *piVar9 = 0x12a112a0;
            }
            else {
              *piVar9 = (uVar7 & 3) * -0x200020 + 0x12a112a0;
            }
          }
          else {
            *piVar9 = 0x12211220;
          }
          uVar5 = uVar5 + 4 & 0xffff;
          piVar9 = piVar9 + -0x10;
        } while (uVar5 < uVar3);
      }
    }
    *piVar9 = 0x12011200;
    *(undefined2 *)(piVar9 + 1) = 0x122a;
    *(ushort *)(piVar9 + 0x11) = *(byte *)(DAT_02030160 + 1) + 0x1204;
    *(undefined2 *)(piVar9 + 0x21) = 0x124a;
  }
  return in_lr;
}

