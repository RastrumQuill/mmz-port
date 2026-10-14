// sub_080BC48C at 0x080BC48C (thumb)

undefined4 sub_080BC48C(int *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 in_lr;
  
  iVar4 = *param_1;
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    DAT_02004f30 = DAT_02004f30 | 0x100;
    sVar3 = *(short *)(iVar7 + 0x8c);
    bVar1 = *(byte *)(iVar7 + 0x183);
    uVar5 = (uint)bVar1;
    bVar2 = *(byte *)(iVar7 + 0x18a);
    uVar9 = (uint)*(byte *)(iVar7 + 0x18b);
    iVar7 = (*(byte *)(iVar7 + 0x19d) & 1) * 0x80008 +
            (short)(*(byte *)(iVar7 + 0x19d) & 2) * 0x300030;
    *(undefined4 *)(iVar4 + 0x280) = 0x120c120b;
    *(undefined4 *)(iVar4 + 0x2c0) = 0x122c122b;
    if (bVar2 == uVar9) {
      *(uint *)(iVar4 + 0x300) = uVar9 * 0x20002 + iVar7 + 0x120e120d;
      *(uint *)(iVar4 + 0x340) = uVar9 * 0x20002 + iVar7 + 0x122e122d;
    }
    else {
      iVar6 = (uint)bVar2 * 0x20002;
      *(int *)(iVar4 + 0x300) = iVar6 + iVar7 + 0x120e120d;
      *(int *)(iVar4 + 0x340) = iVar6 + iVar7 + 0x124e124d;
      *(uint *)(iVar4 + 0x380) = uVar9 * 0x20002 + iVar7 + 0x120e120d;
      *(uint *)(iVar4 + 0x3c0) = uVar9 * 0x20002 + iVar7 + 0x122e122d;
    }
    piVar10 = (int *)(iVar4 + 0x240);
    uVar9 = (uint)sVar3;
    if ((int)uVar5 < (int)uVar9) {
      uVar9 = 0;
      iVar4 = param_1[1];
      if (uVar5 != 0) {
        uVar8 = (uint)(short)(sVar3 - (ushort)bVar1);
        do {
          if ((int)uVar8 < (int)(uVar9 + 4)) {
            if ((int)uVar8 < (int)uVar9) {
              *piVar10 = 0x12a312a2;
            }
            else {
              *piVar10 = (uVar8 & 3) * -0x200020 + 0x12a312a2;
            }
          }
          else {
            *piVar10 = 0x12231222;
          }
          uVar9 = uVar9 + 4 & 0xffff;
          piVar10 = piVar10 + -0x10;
        } while (uVar9 < uVar5);
      }
    }
    else {
      uVar8 = 0;
      iVar4 = param_1[1];
      if (uVar5 != 0) {
        do {
          if ((int)uVar9 < (int)(uVar8 + 4)) {
            if ((int)uVar9 < (int)uVar8) {
              *piVar10 = 0x12a112a0;
            }
            else {
              *piVar10 = (uVar9 & 3) * -0x200020 + 0x12a112a0;
            }
          }
          else {
            *piVar10 = 0x12211220;
          }
          uVar8 = uVar8 + 4 & 0xffff;
          piVar10 = piVar10 + -0x10;
        } while (uVar8 < uVar5);
      }
    }
    *piVar10 = 0x12011200;
    *(undefined2 *)(piVar10 + 1) = 0x122a;
    *(ushort *)(piVar10 + 0x11) = *(byte *)(iVar4 + 0x178) + 0x1204;
    *(undefined2 *)(piVar10 + 0x21) = 0x124a;
  }
  return in_lr;
}

