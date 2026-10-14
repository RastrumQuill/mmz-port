// sub_080DE954 at 0x080DE954 (thumb)

undefined8 sub_080DE954(ushort param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_0202f630;
  if (DAT_0202f628 != (undefined4 *)0x0) {
    puVar3 = DAT_0202f628;
    do {
      if ((param_1 & 0xfff) == (*(ushort *)(puVar3 + 1) & 0xfff)) goto LAB_080dea02;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  if (DAT_0202f62c != (undefined4 *)0x0) {
    puVar1 = DAT_0202f62c;
    puVar4 = &DAT_0202f62c;
    do {
      puVar3 = puVar1;
      if ((param_1 & 0xfff) == (*(ushort *)(puVar3 + 1) & 0xfff)) {
        *puVar4 = *puVar3;
        *puVar3 = DAT_0202f628;
        DAT_0202f628 = puVar3;
        goto LAB_080dea02;
      }
      puVar1 = (undefined4 *)*puVar3;
      puVar4 = puVar3;
    } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
  }
  if (DAT_0202f630 == (undefined4 *)0x0) {
    DAT_0202f630 = DAT_0202f62c;
    if (DAT_0202f62c == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_080dea02;
    }
    DAT_0202f62c = puVar2;
  }
  puVar3 = DAT_0202f630;
  puVar2 = (undefined4 *)*DAT_0202f630;
  *DAT_0202f630 = DAT_0202f628;
  DAT_0202f630 = puVar2;
  DAT_0202f628 = puVar3;
  *(ushort *)((int)puVar3 + 6) = *(ushort *)((int)puVar3 + 6) | 0x8000;
LAB_080dea02:
  return CONCAT44(in_lr,puVar3);
}

