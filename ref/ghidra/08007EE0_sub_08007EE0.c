// sub_08007EE0 at 0x08007EE0 (thumb)

undefined8 sub_08007EE0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  uint local_24;
  
  local_2c = 0;
  uVar4 = (int)param_2 >> 0xc;
  if (uVar4 < 0x500) {
    uVar9 = (uint)(byte)(&DAT_08290dec)[uVar4];
    local_30 = 0;
    uVar10 = param_1;
    local_24 = (int)param_1 >> 0xc;
    do {
      if (local_24 < 0x780) {
        uVar7 = (uint)(byte)(&DAT_082915ec)[local_24];
        if (0xef < (byte)(&DAT_082921ec)[uVar7 + uVar9 * 0x80]) {
          if (uVar9 != 0) {
            uVar2 = uVar9 - 1;
            if ((byte)(&DAT_082921ec)[uVar7 + uVar2 * 0x80] < 0xf0) {
              uVar4 = uVar9 * 10 - 1;
              uVar5 = (byte)(&DAT_082921ec)[uVar7 + uVar2 * 0x80] & 0xf;
              piVar8 = (int *)(&DAT_02005140 + uVar5 * 0x10);
              iVar1 = *(int *)((DAT_02005208 >> (uVar5 << 1) & 3) * 4 + (&DAT_08293bec)[uVar5]);
              uVar9 = uVar2;
              if ((DAT_0200520c & 0x7f) != uVar5) {
                pbVar6 = *(byte **)(&DAT_0200514c + uVar5 * 0x10) +
                         (uint)**(byte **)(&DAT_0200514c + uVar5 * 0x10) *
                         (uVar2 - *(int *)(iVar1 + 0x70)) + (uVar7 - *(int *)(iVar1 + 0x6c));
                iVar1 = uVar4 + uVar2 * -10;
                goto LAB_08008088;
              }
              puVar3 = &DAT_0200543c +
                       (uVar4 + *(int *)(iVar1 + 0x70) * -10) * (uint)DAT_0200543c +
                       local_24 + *(int *)(iVar1 + 0x6c) * -0xf + 2;
              goto LAB_0800809c;
            }
          }
          goto LAB_08007ffa;
        }
        uVar2 = (byte)(&DAT_082921ec)[uVar7 + uVar9 * 0x80] & 0xf;
        piVar8 = (int *)(&DAT_02005140 + uVar2 * 0x10);
        iVar1 = *(int *)((DAT_02005208 >> (uVar2 << 1) & 3) * 4 + (&DAT_08293bec)[uVar2]);
        if ((DAT_0200520c & 0x7f) == uVar2) {
          puVar3 = &DAT_0200543c +
                   (uVar4 + *(int *)(iVar1 + 0x70) * -10) * (uint)DAT_0200543c +
                   local_24 + *(int *)(iVar1 + 0x6c) * -0xf + 2;
        }
        else {
          pbVar6 = *(byte **)(&DAT_0200514c + uVar2 * 0x10) +
                   (uint)**(byte **)(&DAT_0200514c + uVar2 * 0x10) *
                   (uVar9 - *(int *)(iVar1 + 0x70)) + (uVar7 - *(int *)(iVar1 + 0x6c));
          iVar1 = uVar4 + uVar9 * -10;
LAB_08008088:
          puVar3 = (ushort *)
                   ((iVar1 * 0xf + (uint)pbVar6[4] * 0x96 + local_24 + uVar7 * -0xf) * 2 + piVar8[2]
                   );
        }
LAB_0800809c:
        uVar7 = (uint)*(byte *)((uint)*puVar3 + *piVar8);
      }
      else {
LAB_08007ffa:
        uVar7 = 1;
      }
      if (((uVar7 & 0x80) != 0) ||
         (iVar1 = sub_080C8AA0(param_2 & 0xfff,uVar10 & 0xfff,0xfff,
                               *(undefined4 *)(&DAT_08290d6c + (uVar7 & 0xf) * 4)), iVar1 == 0))
      goto LAB_080080ea;
      uVar10 = uVar10 + iVar1;
      local_2c = local_2c + iVar1;
      if ((local_24 == (int)uVar10 >> 0xc) ||
         (local_30 = local_30 + 1, local_24 = (int)uVar10 >> 0xc, 0xf < local_30))
      goto LAB_080080ea;
    } while( true );
  }
LAB_0800810c:
  iVar1 = 1;
LAB_0800810e:
  return CONCAT44(in_lr,iVar1);
LAB_080080ea:
  if (local_30 < 0x10) {
    iVar1 = sub_08009668(param_1 + local_2c,param_2);
    iVar1 = iVar1 - param_1;
    goto LAB_0800810e;
  }
  goto LAB_0800810c;
}

