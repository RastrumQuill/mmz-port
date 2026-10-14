// sub_080E96DC at 0x080E96DC (thumb)

undefined4 sub_080E96DC(int param_1)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar6 = *(byte *)(iVar3 + 0x1fd) - 0x10 >> 2;
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar9 = (ushort *)(*(int *)(param_1 + 0x18) + 900);
    uVar5 = 0;
    if (uVar6 != 0xfffffffc) {
      do {
        uVar7 = (uint)*(short *)(iVar3 + 0xa4);
        uVar10 = 10;
        sVar2 = 0xc;
        if ((int)(uint)*(byte *)(iVar3 + 0x1fd) < (int)uVar7) {
          uVar7 = uVar7 - *(byte *)(iVar3 + 0x1fd);
          uVar8 = (uVar5 + 1) * 4;
          if (uVar7 < uVar8 - 4) {
            uVar10 = 0xe;
          }
          else {
            uVar10 = 10;
            if (uVar7 < uVar8) {
              uVar10 = ((short)uVar8 - (short)uVar7) + 10U & 0xff;
            }
          }
          sVar2 = 0xe;
        }
        else {
          uVar8 = (uVar5 + 1) * 4;
          if (uVar7 < uVar8 - 4) {
            uVar10 = 0xe;
          }
          else if (uVar7 < uVar8) {
            uVar10 = ((short)uVar8 - *(short *)(iVar3 + 0xa4)) + 10U & 0xff;
          }
        }
        uVar5 = uVar5 + 1;
        *puVar9 = sVar2 * 0x20 + uVar10 & 0x3ff | 0x3000;
        puVar9[0x20] = (sVar2 + 1) * 0x20 + uVar10 & 0x3ff | 0x3000;
        puVar9 = puVar9 + 1;
      } while (uVar5 < uVar6 + 4);
    }
    *puVar9 = 0x2195;
    puVar9[0x20] = 0x21b5;
  }
  else if (uVar6 != 0) {
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x18) + 0xd6);
    do {
      puVar4 = puVar1;
      *puVar4 = 0x206b;
      puVar4[0x20] = 0x208a;
      puVar4[0x40] = 0x20a8;
      uVar6 = uVar6 - 1;
      puVar1 = puVar4 + 1;
    } while (uVar6 != 0);
    puVar4[1] = 0x206c;
    puVar4[0x21] = 0x208c;
    puVar4[0x41] = 0x20ac;
  }
  return in_lr;
}

