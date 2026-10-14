// sub_080079CC at 0x080079CC (thumb)

undefined8 sub_080079CC(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  
  uVar1 = (int)param_1 >> 0xc;
  uVar9 = (int)param_2 >> 0xc;
  if ((uVar1 < 0x771) && (uVar9 < 0x4f6)) {
    uVar8 = (uint)(byte)(&DAT_082915ec)[uVar1];
    uVar7 = (uint)(byte)(&DAT_08290dec)[uVar9];
    uVar6 = (uint)(byte)(&DAT_082921ec)[uVar8 + uVar7 * 0x80];
    uVar3 = uVar7;
    if (0xef < uVar6) {
      uVar3 = uVar7 - 1;
      uVar6 = (uint)(byte)(&DAT_082921ec)[uVar8 + uVar3 * 0x80];
      if ((uVar7 == 0) || (0xef < uVar6)) goto LAB_08007a1a;
      uVar9 = uVar7 * 10 - 1;
    }
    uVar6 = uVar6 & 0xf;
    iVar2 = uVar6 * 0x10;
    iVar5 = *(int *)((DAT_02005208 >> (uVar6 << 1) & 3) * 4 + (&DAT_08293bec)[uVar6]);
    if ((DAT_0200520c & 0x7f) == uVar6) {
      puVar4 = &DAT_0200543c +
               (uVar9 + *(int *)(iVar5 + 0x70) * -10) * (uint)DAT_0200543c +
               uVar1 + *(int *)(iVar5 + 0x6c) * -0xf + 2;
      iVar2 = *(int *)(&DAT_02005140 + iVar2);
    }
    else {
      puVar4 = (ushort *)
               (((uVar9 + uVar3 * -10) * 0xf +
                (uint)(*(byte **)(&DAT_0200514c + iVar2))
                      [(uVar3 - *(int *)(iVar5 + 0x70)) * (uint)**(byte **)(&DAT_0200514c + iVar2) +
                       (uVar8 - *(int *)(iVar5 + 0x6c)) + 4] * 0x96 + uVar1 + uVar8 * -0xf) * 2 +
               *(int *)(&DAT_02005148 + iVar2));
      iVar2 = *(int *)(&DAT_02005140 + iVar2);
    }
    uVar1 = (uint)*(byte *)((uint)*puVar4 + iVar2);
    iVar2 = sub_080C8A9C(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_08290cec + (uVar1 & 0xf) * 4));
    if (iVar2 == 0) {
      uVar1 = sub_08009468(param_1,param_2);
      uVar1 = uVar1 & 0xff;
    }
  }
  else {
LAB_08007a1a:
    uVar1 = 0x41;
  }
  return CONCAT44(in_lr,uVar1);
}

