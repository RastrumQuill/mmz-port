// sub_080E9B00 at 0x080E9B00 (thumb)

undefined8 sub_080E9B00(ushort param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_02030be0;
  if (DAT_02030bd8 != (undefined4 *)0x0) {
    puVar3 = DAT_02030bd8;
    do {
      if ((param_1 & 0xfff) == (*(ushort *)(puVar3 + 1) & 0xfff)) goto LAB_080e9bae;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  if (DAT_02030bdc != (undefined4 *)0x0) {
    puVar1 = DAT_02030bdc;
    puVar4 = &DAT_02030bdc;
    do {
      puVar3 = puVar1;
      if ((param_1 & 0xfff) == (*(ushort *)(puVar3 + 1) & 0xfff)) {
        *puVar4 = *puVar3;
        *puVar3 = DAT_02030bd8;
        DAT_02030bd8 = puVar3;
        goto LAB_080e9bae;
      }
      puVar1 = (undefined4 *)*puVar3;
      puVar4 = puVar3;
    } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
  }
  if (DAT_02030be0 == (undefined4 *)0x0) {
    DAT_02030be0 = DAT_02030bdc;
    if (DAT_02030bdc == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_080e9bae;
    }
    DAT_02030bdc = puVar2;
  }
  puVar3 = DAT_02030be0;
  puVar2 = (undefined4 *)*DAT_02030be0;
  *DAT_02030be0 = DAT_02030bd8;
  DAT_02030be0 = puVar2;
  DAT_02030bd8 = puVar3;
  *(ushort *)((int)puVar3 + 6) = *(ushort *)((int)puVar3 + 6) | 0x8000;
LAB_080e9bae:
  return CONCAT44(in_lr,puVar3);
}

