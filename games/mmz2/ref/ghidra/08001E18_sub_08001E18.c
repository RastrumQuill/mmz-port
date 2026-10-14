// sub_08001E18 at 0x08001E18 (thumb)

undefined8 sub_08001E18(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  uVar4 = DAT_02000ca6 + 1;
  if (DAT_02000ca6 == 0) {
LAB_08001f14:
    uVar2 = 0xfff;
  }
  else {
    if ((DAT_02000ca2 & 2) != 0) {
      if (((uVar4 & 1) != 0) && (DAT_02000cde != '\0')) {
        DAT_02000ca6 = uVar4;
        uVar2 = sub_08001A94(DAT_02000cde,3);
        puVar3 = &DAT_0400012a;
        DAT_0400012a = uVar2;
        DAT_02000cde = '\0';
        goto LAB_08001f1c;
      }
      if (DAT_02000ce1 != '\0') {
        puVar3 = (undefined2 *)(uint)DAT_02000ce2;
        DAT_0400012a = DAT_02000ce2;
        DAT_02000ca6 = uVar4;
        goto LAB_08001f1c;
      }
      goto LAB_08001f14;
    }
    if (((DAT_02000ca2 & 4) == 0) || (1 < DAT_02000ca4)) goto LAB_08001f14;
    uVar2 = DAT_02000cd0;
    if (((DAT_02000ca4 != 0) || (((uVar4 & 1) != 0 || ((DAT_02000ca9 & 0x20) == 0)))) &&
       ((DAT_02000ca4 != 1 || (((uVar4 & 3) != 0 || (DAT_02000cab != '\x1f')))))) {
      if (DAT_02000caa != 0) {
        uVar2 = DAT_02000ccc;
        if ((DAT_02000caa == 1) || (uVar2 = DAT_02000cce, DAT_02000caa == 2)) {
          DAT_0400012a = uVar2;
        }
        bVar1 = DAT_02000caa + 1;
        puVar3 = (undefined2 *)(uint)DAT_02000caa;
        DAT_02000ca6 = uVar4;
        DAT_02000caa = bVar1;
        if (2 < bVar1) {
          DAT_02000caa = 1;
        }
        goto LAB_08001f1c;
      }
      goto LAB_08001f14;
    }
  }
  puVar3 = &DAT_0400012a;
  DAT_0400012a = uVar2;
  DAT_02000ca6 = uVar4;
LAB_08001f1c:
  return CONCAT44(puVar3,in_lr);
}

