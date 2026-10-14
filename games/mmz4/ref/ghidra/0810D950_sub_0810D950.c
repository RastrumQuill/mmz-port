// sub_0810D950 at 0x0810D950 (thumb)

undefined4 sub_0810D950(int *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar9 = *param_1;
  iVar7 = param_1[2];
  if (iVar7 == 0) {
    return in_lr;
  }
  DAT_02000a00 = DAT_02000a00 | 0x100;
  sVar3 = *(short *)(iVar7 + 0xa4);
  uVar4 = sub_0802B614(iVar7);
  uVar4 = uVar4 & 0xff;
  iVar7 = param_1[2];
  bVar1 = *(byte *)(iVar7 + 0xc0);
  bVar2 = *(byte *)(iVar7 + 0xc1);
  uVar8 = (uint)*(byte *)(iVar7 + 0xe6);
  if ((DAT_0202e8b4 & 4) == 0) {
    if ((DAT_0202e8b4 & 1) == 0) {
      if ((DAT_0202e8b4 & 2) == 0) {
        *(undefined4 *)(iVar9 + 0x280) = 0x128b128a;
        uVar5 = 0x12ab12aa;
      }
      else {
        *(undefined4 *)(iVar9 + 0x280) = 0x12191218;
        uVar5 = 0x12391238;
      }
    }
    else {
      *(undefined4 *)(iVar9 + 0x280) = 0x12171216;
      uVar5 = 0x12371236;
    }
  }
  else {
    *(undefined4 *)(iVar9 + 0x280) = 0x12151214;
    uVar5 = 0x12351234;
  }
  *(undefined4 *)(iVar9 + 0x2c0) = uVar5;
  if (bVar1 < 3) {
    iVar7 = (uint)bVar1 * 0x20002;
    *(int *)(iVar9 + 0x300) = iVar7 + 0x120d120c;
    iVar11 = 0x124d124c;
LAB_0810da8e:
    iVar7 = iVar7 + iVar11;
  }
  else {
    if (uVar8 != 0xff) {
      iVar7 = uVar8 * 0x20002;
      *(int *)(iVar9 + 0x300) = iVar7 + 0x126d126c;
      iVar11 = 0x12ad12ac;
      goto LAB_0810da8e;
    }
    *(undefined4 *)(iVar9 + 0x300) = 0x12131212;
    iVar7 = 0x12531252;
  }
  *(int *)(iVar9 + 0x340) = iVar7;
  if (bVar2 < 3) {
    iVar7 = (uint)bVar2 * 0x20002;
    *(int *)(iVar9 + 0x380) = iVar7 + 0x120d120c;
    iVar11 = 0x122d122c;
  }
  else {
    if (uVar8 == 0xff) {
      *(undefined4 *)(iVar9 + 0x380) = 0x12131212;
      iVar7 = 0x12331232;
      goto LAB_0810db00;
    }
    iVar7 = uVar8 * 0x20002;
    *(int *)(iVar9 + 0x380) = iVar7 + 0x126d126c;
    iVar11 = 0x128d128c;
  }
  iVar7 = iVar7 + iVar11;
LAB_0810db00:
  *(int *)(iVar9 + 0x3c0) = iVar7;
  piVar10 = (int *)(iVar9 + 0x240);
  uVar8 = (uint)sVar3;
  if ((int)uVar4 < (int)uVar8) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar6 = (uint)(short)(sVar3 - (short)uVar4);
      do {
        if ((int)uVar6 < (int)(uVar8 + 4)) {
          if ((int)uVar6 < (int)uVar8) {
            *piVar10 = 0x12a312a2;
          }
          else {
            *piVar10 = (uVar6 & 3) * -0x200020 + 0x12a312a2;
          }
        }
        else {
          *piVar10 = 0x12231222;
        }
        uVar8 = uVar8 + 4 & 0xffff;
        piVar10 = piVar10 + -0x10;
      } while (uVar8 < uVar4);
    }
  }
  else {
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        if ((int)uVar8 < (int)(uVar6 + 4)) {
          if ((int)uVar8 < (int)uVar6) {
            *piVar10 = 0x12a112a0;
          }
          else {
            *piVar10 = (uVar8 & 3) * -0x200020 + 0x12a112a0;
          }
        }
        else {
          *piVar10 = 0x12211220;
        }
        uVar6 = uVar6 + 4 & 0xffff;
        piVar10 = piVar10 + -0x10;
      } while (uVar6 < uVar4);
    }
  }
  *piVar10 = 0x12011200;
  *(undefined2 *)(piVar10 + 1) = 0x122a;
  *(ushort *)(piVar10 + 0x11) = *(byte *)(DAT_0202e8e0 + 1) + 0x1204;
  *(undefined2 *)(piVar10 + 0x21) = 0x124a;
  return in_lr;
}

