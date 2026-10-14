// sub_0801F3D0 at 0x0801F3D0 (thumb)

undefined8 sub_0801F3D0(uint param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if ((param_1 != 0xffffffff) && (uVar1 = (uint)DAT_020011d2, uVar1 != 0)) {
    puVar2 = (ushort *)(&DAT_020011d4 + uVar1 * 0x18);
    do {
      puVar2 = puVar2 + -0xc;
      uVar1 = uVar1 - 1;
      if (*puVar2 == param_1) {
        uVar1 = uVar1 & 0xff;
        goto LAB_0801f412;
      }
    } while (uVar1 != 0);
  }
  uVar1 = 0xff;
LAB_0801f412:
  return CONCAT44(in_lr,uVar1);
}

