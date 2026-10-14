// sub_080DEACC at 0x080DEACC (thumb)

undefined4 sub_080DEACC(int *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 in_lr;
  
  iVar6 = *param_1;
  iVar8 = param_1[2];
  if (iVar8 != 0) {
    DAT_02000f90 = DAT_02000f90 | 0x100;
    sVar3 = *(short *)(iVar8 + 0xa4);
    bVar1 = *(byte *)(iVar8 + 0x1fd);
    uVar4 = (uint)bVar1;
    bVar2 = *(byte *)(iVar8 + 0x212);
    uVar9 = (uint)*(byte *)(iVar8 + 0x213);
    iVar8 = (*(byte *)(iVar8 + 0x215) & 1) * 0x80008 +
            (short)(*(byte *)(iVar8 + 0x215) & 2) * 0x300030;
    *(undefined4 *)(iVar6 + 0x280) = 0x120c120b;
    *(undefined4 *)(iVar6 + 0x2c0) = 0x122c122b;
    if (bVar2 == uVar9) {
      *(uint *)(iVar6 + 0x300) = uVar9 * 0x20002 + iVar8 + 0x120e120d;
      *(uint *)(iVar6 + 0x340) = uVar9 * 0x20002 + iVar8 + 0x122e122d;
    }
    else {
      iVar5 = (uint)bVar2 * 0x20002;
      *(int *)(iVar6 + 0x300) = iVar5 + iVar8 + 0x120e120d;
      *(int *)(iVar6 + 0x340) = iVar5 + iVar8 + 0x124e124d;
      *(uint *)(iVar6 + 0x380) = uVar9 * 0x20002 + iVar8 + 0x120e120d;
      *(uint *)(iVar6 + 0x3c0) = uVar9 * 0x20002 + iVar8 + 0x122e122d;
    }
    piVar10 = (int *)(iVar6 + 0x240);
    uVar9 = (uint)sVar3;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = 0;
      if (uVar4 != 0) {
        uVar7 = (uint)(short)(sVar3 - (ushort)bVar1);
        do {
          if ((int)uVar7 < (int)(uVar9 + 4)) {
            if ((int)uVar7 < (int)uVar9) {
              *piVar10 = 0x12a312a2;
            }
            else {
              *piVar10 = (uVar7 & 3) * -0x200020 + 0x12a312a2;
            }
          }
          else {
            *piVar10 = 0x12231222;
          }
          uVar9 = uVar9 + 4 & 0xffff;
          piVar10 = piVar10 + -0x10;
        } while (uVar9 < uVar4);
      }
    }
    else {
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          if ((int)uVar9 < (int)(uVar7 + 4)) {
            if ((int)uVar9 < (int)uVar7) {
              *piVar10 = 0x12a112a0;
            }
            else {
              *piVar10 = (uVar9 & 3) * -0x200020 + 0x12a112a0;
            }
          }
          else {
            *piVar10 = 0x12211220;
          }
          uVar7 = uVar7 + 4 & 0xffff;
          piVar10 = piVar10 + -0x10;
        } while (uVar7 < uVar4);
      }
    }
    *piVar10 = 0x12011200;
    *(undefined2 *)(piVar10 + 1) = 0x122a;
    *(ushort *)(piVar10 + 0x11) = *(byte *)(DAT_0202ebf0 + 1) + 0x1204;
    *(undefined2 *)(piVar10 + 0x21) = 0x124a;
  }
  return in_lr;
}

