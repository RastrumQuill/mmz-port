// sub_0810D774 at 0x0810D774 (thumb)

undefined8 sub_0810D774(ushort param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_0202f350;
  if (DAT_0202f348 != (undefined4 *)0x0) {
    puVar3 = DAT_0202f348;
    do {
      if ((param_1 & 0xfff) == (*(ushort *)(puVar3 + 1) & 0xfff)) goto LAB_0810d822;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  if (DAT_0202f34c != (undefined4 *)0x0) {
    puVar1 = DAT_0202f34c;
    puVar4 = &DAT_0202f34c;
    do {
      puVar3 = puVar1;
      if ((param_1 & 0xfff) == (*(ushort *)(puVar3 + 1) & 0xfff)) {
        *puVar4 = *puVar3;
        *puVar3 = DAT_0202f348;
        DAT_0202f348 = puVar3;
        goto LAB_0810d822;
      }
      puVar1 = (undefined4 *)*puVar3;
      puVar4 = puVar3;
    } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
  }
  if (DAT_0202f350 == (undefined4 *)0x0) {
    DAT_0202f350 = DAT_0202f34c;
    if (DAT_0202f34c == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_0810d822;
    }
    DAT_0202f34c = puVar2;
  }
  puVar3 = DAT_0202f350;
  puVar2 = (undefined4 *)*DAT_0202f350;
  *DAT_0202f350 = DAT_0202f348;
  DAT_0202f350 = puVar2;
  DAT_0202f348 = puVar3;
  *(ushort *)((int)puVar3 + 6) = *(ushort *)((int)puVar3 + 6) | 0x8000;
LAB_0810d822:
  return CONCAT44(in_lr,puVar3);
}

