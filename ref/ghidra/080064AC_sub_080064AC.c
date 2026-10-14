// sub_080064AC at 0x080064AC (thumb)

undefined8 sub_080064AC(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar1 = param_1 >> 0xc;
  param_2 = param_2 >> 0xc;
  if (((uVar1 < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    uVar5 = (uint)(byte)(&DAT_082915ec)[uVar1];
    uVar6 = (uint)(byte)(&DAT_08290dec)[param_2];
    if ((byte)(&DAT_082921ec)[uVar5 + uVar6 * 0x80] < 0xf0) {
      uVar4 = (byte)(&DAT_082921ec)[uVar5 + uVar6 * 0x80] & 0xf;
      iVar3 = *(int *)((DAT_02005208 >> (uVar4 << 1) & 3) * 4 + (&DAT_08293bec)[uVar4]);
      if ((DAT_0200520c & 0x7f) == uVar4) {
        puVar2 = &DAT_0200543c +
                 (param_2 + *(int *)(iVar3 + 0x70) * -10) * (uint)DAT_0200543c +
                 uVar1 + *(int *)(iVar3 + 0x6c) * -0xf + 2;
      }
      else {
        puVar2 = (ushort *)
                 (((param_2 + uVar6 * -10) * 0xf +
                  (uint)(*(byte **)(&DAT_0200514c + uVar4 * 0x10))
                        [(uint)**(byte **)(&DAT_0200514c + uVar4 * 0x10) *
                         (uVar6 - *(int *)(iVar3 + 0x70)) + (uVar5 - *(int *)(iVar3 + 0x6c)) + 4] *
                  0x96 + uVar1 + uVar5 * -0xf) * 2 + *(int *)(&DAT_02005148 + uVar4 * 0x10));
      }
      uVar1 = (uint)*puVar2;
      goto LAB_080065a0;
    }
  }
  uVar1 = 0xffffffff;
LAB_080065a0:
  return CONCAT44(in_lr,uVar1);
}

