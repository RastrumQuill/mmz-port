// sub_080065AC at 0x080065AC (thumb)

undefined8 sub_080065AC(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar1 = param_1 >> 0xc;
  param_2 = param_2 >> 0xc;
  if (((uVar1 < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    uVar6 = (uint)(byte)(&DAT_082915ec)[uVar1];
    uVar7 = (uint)(byte)(&DAT_08290dec)[param_2];
    if ((byte)(&DAT_082921ec)[uVar6 + uVar7 * 0x80] < 0xf0) {
      uVar5 = (byte)(&DAT_082921ec)[uVar6 + uVar7 * 0x80] & 0xf;
      iVar2 = uVar5 * 0x10;
      iVar4 = *(int *)((DAT_02005208 >> (uVar5 << 1) & 3) * 4 + (&DAT_08293bec)[uVar5]);
      if ((DAT_0200520c & 0x7f) == uVar5) {
        puVar3 = &DAT_0200543c +
                 (param_2 + *(int *)(iVar4 + 0x70) * -10) * (uint)DAT_0200543c +
                 uVar1 + *(int *)(iVar4 + 0x6c) * -0xf + 2;
      }
      else {
        puVar3 = (ushort *)
                 (((param_2 + uVar7 * -10) * 0xf +
                  (uint)(*(byte **)(&DAT_0200514c + iVar2))
                        [(uint)**(byte **)(&DAT_0200514c + iVar2) * (uVar7 - *(int *)(iVar4 + 0x70))
                         + (uVar6 - *(int *)(iVar4 + 0x6c)) + 4] * 0x96 + uVar1 + uVar6 * -0xf) * 2
                 + *(int *)(&DAT_02005148 + iVar2));
      }
      uVar1 = (uint)*(byte *)((uint)*puVar3 + *(int *)(&DAT_02005140 + iVar2));
      goto LAB_080066a0;
    }
  }
  uVar1 = 0x41;
LAB_080066a0:
  return CONCAT44(in_lr,uVar1);
}

