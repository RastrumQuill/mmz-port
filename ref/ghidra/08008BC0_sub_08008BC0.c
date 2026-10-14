// sub_08008BC0 at 0x08008BC0 (thumb)

undefined4 sub_08008BC0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_2c;
  uint local_24;
  
  uVar1 = (int)param_1 >> 0xc;
  uVar7 = (int)param_2 >> 0xc;
  if (uVar7 < 0x500) {
    uVar2 = (uint)(byte)(&DAT_08290dec)[uVar7];
    local_2c = 0;
    uVar11 = param_1;
    if (uVar1 < 0x780) {
      iVar5 = uVar2 * 10;
      local_24 = iVar5 - 1;
      do {
        uVar10 = (uint)(byte)(&DAT_082915ec)[uVar1];
        uVar9 = (uint)(byte)(&DAT_082921ec)[uVar10 + uVar2 * 0x80];
        if (0xef < uVar9) {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          uVar9 = (uint)(byte)(&DAT_082921ec)[uVar10 + uVar2 * 0x80];
          if (0xef < uVar9) break;
          iVar5 = iVar5 + -10;
          uVar7 = local_24;
          local_24 = local_24 - 10;
        }
        uVar9 = uVar9 & 0xf;
        iVar3 = uVar9 * 0x10;
        iVar8 = *(int *)((DAT_02005208 >> (uVar9 << 1) & 3) * 4 + (&DAT_08293bec)[uVar9]);
        if ((DAT_0200520c & 0x7f) == uVar9) {
          iVar8 = (uVar7 + *(int *)(iVar8 + 0x70) * -10) * (uint)DAT_0200543c +
                  uVar1 + *(int *)(iVar8 + 0x6c) * -0xf + 2;
          puVar4 = &DAT_0200543c;
        }
        else {
          iVar8 = (uVar7 - iVar5) * 0xf +
                  (uint)(*(byte **)(&DAT_0200514c + iVar3))
                        [(uint)**(byte **)(&DAT_0200514c + iVar3) * (uVar2 - *(int *)(iVar8 + 0x70))
                         + (uVar10 - *(int *)(iVar8 + 0x6c)) + 4] * 0x96 + uVar1 + uVar10 * -0xf;
          puVar4 = *(undefined2 **)(&DAT_02005148 + iVar3);
        }
        if (((*(byte *)((uint)(ushort)puVar4[iVar8] + *(int *)(&DAT_02005140 + iVar3)) & 0x80) == 0)
           && (iVar3 = sub_080C8AA0(param_2 & 0xfff,~uVar11 & 0xfff,0xfff,
                                    *(undefined4 *)
                                     (&DAT_08290dac +
                                     (*(byte *)((uint)(ushort)puVar4[iVar8] +
                                               *(int *)(&DAT_02005140 + iVar3)) & 0xf) * 4)),
              iVar3 != 0)) break;
        if ((local_2c & 1) == 0) {
          uVar11 = ((int)uVar11 >> 0xc) << 0xc;
        }
        else {
          uVar11 = uVar11 - 1;
        }
        uVar1 = (int)uVar11 >> 0xc;
        local_2c = local_2c + 1;
        if ((0x7f < (int)local_2c) || (0x77f < uVar1)) break;
      } while( true );
    }
    iVar5 = sub_08008120(uVar11,param_2);
    uVar6 = sub_08009A30(param_1,param_2,uVar11 + iVar5);
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

