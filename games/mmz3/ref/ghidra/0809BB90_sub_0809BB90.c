// sub_0809BB90 at 0x0809BB90 (thumb)

undefined8 sub_0809BB90(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) >> 8;
  iVar2 = iVar4 + -0x18;
  if (iVar2 < 0) {
    iVar2 = iVar4 + 7;
  }
  uVar3 = iVar2 >> 5 & 0xff;
  uVar6 = 0;
  do {
    if ((&DAT_08367024)[uVar6 + uVar3 * 6] == 0xff) break;
    bVar1 = (&DAT_08367024)[uVar6 + uVar3 * 6];
    iVar2 = (uint)(bVar1 >> 1) * 0x1000 + 0x2800;
    if (((*(short *)(*(int *)(param_1 + 0x28) + 0xdf0 + (uint)bVar1 * 2) != 0xff) &&
        (*(int *)(param_1 + 0xb8) < iVar2)) && (iVar2 <= *(int *)(param_1 + 0x58))) {
      *(byte *)(param_1 + 0xbc) = bVar1;
      pcVar5 = (char *)(*(int *)(param_1 + 0x28) + 0xe04 + (uint)*(byte *)(param_1 + 0xbc));
      *pcVar5 = *pcVar5 + '\x01';
      *(int *)(param_1 + 0x58) = iVar2;
      uVar3 = (uint)(byte)(&DAT_08367042)[uVar6 + uVar3 * 5];
      goto LAB_0809bc3c;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 6);
  uVar3 = 0;
LAB_0809bc3c:
  return CONCAT44(in_lr,uVar3);
}

