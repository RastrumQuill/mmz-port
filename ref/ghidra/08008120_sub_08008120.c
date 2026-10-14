// sub_08008120 at 0x08008120 (thumb)

undefined8 sub_08008120(uint param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  uint local_24;
  
  local_2c = 0;
  uVar4 = (int)param_2 >> 0xc;
  if (uVar4 < 0x500) {
    uVar10 = (uint)(byte)(&DAT_08290dec)[uVar4];
    local_30 = 0;
    uVar8 = param_1;
    local_24 = (int)param_1 >> 0xc;
    do {
      if (local_24 < 0x780) {
        uVar7 = (uint)(byte)(&DAT_082915ec)[local_24];
        if (0xef < (byte)(&DAT_082921ec)[uVar7 + uVar10 * 0x80]) {
          if (uVar10 != 0) {
            uVar1 = uVar10 - 1;
            if ((byte)(&DAT_082921ec)[uVar7 + uVar1 * 0x80] < 0xf0) {
              uVar4 = uVar10 * 10 - 1;
              uVar5 = (byte)(&DAT_082921ec)[uVar7 + uVar1 * 0x80] & 0xf;
              piVar9 = (int *)(&DAT_02005140 + uVar5 * 0x10);
              iVar3 = *(int *)((DAT_02005208 >> (uVar5 << 1) & 3) * 4 + (&DAT_08293bec)[uVar5]);
              uVar10 = uVar1;
              if ((DAT_0200520c & 0x7f) != uVar5) {
                pbVar6 = *(byte **)(&DAT_0200514c + uVar5 * 0x10) +
                         (uint)**(byte **)(&DAT_0200514c + uVar5 * 0x10) *
                         (uVar1 - *(int *)(iVar3 + 0x70)) + (uVar7 - *(int *)(iVar3 + 0x6c));
                iVar3 = uVar4 + uVar1 * -10;
                goto LAB_080082c8;
              }
              puVar2 = &DAT_0200543c +
                       (uVar4 + *(int *)(iVar3 + 0x70) * -10) * (uint)DAT_0200543c +
                       local_24 + *(int *)(iVar3 + 0x6c) * -0xf + 2;
              goto LAB_080082dc;
            }
          }
          goto LAB_0800823a;
        }
        uVar1 = (byte)(&DAT_082921ec)[uVar7 + uVar10 * 0x80] & 0xf;
        piVar9 = (int *)(&DAT_02005140 + uVar1 * 0x10);
        iVar3 = *(int *)((DAT_02005208 >> (uVar1 << 1) & 3) * 4 + (&DAT_08293bec)[uVar1]);
        if ((DAT_0200520c & 0x7f) == uVar1) {
          puVar2 = &DAT_0200543c +
                   (uVar4 + *(int *)(iVar3 + 0x70) * -10) * (uint)DAT_0200543c +
                   local_24 + *(int *)(iVar3 + 0x6c) * -0xf + 2;
        }
        else {
          pbVar6 = *(byte **)(&DAT_0200514c + uVar1 * 0x10) +
                   (uint)**(byte **)(&DAT_0200514c + uVar1 * 0x10) *
                   (uVar10 - *(int *)(iVar3 + 0x70)) + (uVar7 - *(int *)(iVar3 + 0x6c));
          iVar3 = uVar4 + uVar10 * -10;
LAB_080082c8:
          puVar2 = (ushort *)
                   ((iVar3 * 0xf + (uint)pbVar6[4] * 0x96 + local_24 + uVar7 * -0xf) * 2 + piVar9[2]
                   );
        }
LAB_080082dc:
        uVar7 = (uint)*(byte *)((uint)*puVar2 + *piVar9);
      }
      else {
LAB_0800823a:
        uVar7 = 1;
      }
      if (((uVar7 & 0x80) != 0) ||
         (iVar3 = sub_080C8AA0(param_2 & 0xfff,~uVar8 & 0xfff,0xfff,
                               *(undefined4 *)(&DAT_08290dac + (uVar7 & 0xf) * 4)), iVar3 == 0))
      goto LAB_0800832e;
      uVar8 = uVar8 - iVar3;
      local_2c = local_2c - iVar3;
      if ((local_24 == (int)uVar8 >> 0xc) ||
         (local_30 = local_30 + 1, local_24 = (int)uVar8 >> 0xc, 0xf < local_30)) goto LAB_0800832e;
    } while( true );
  }
LAB_0800834c:
  iVar3 = -1;
LAB_08008350:
  return CONCAT44(in_lr,iVar3);
LAB_0800832e:
  if (local_30 < 0x10) {
    iVar3 = sub_08009724(param_1 + local_2c,param_2);
    iVar3 = iVar3 - param_1;
    goto LAB_08008350;
  }
  goto LAB_0800834c;
}

