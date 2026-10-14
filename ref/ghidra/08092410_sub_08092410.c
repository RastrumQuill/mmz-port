// sub_08092410 at 0x08092410 (thumb)

undefined8 sub_08092410(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 10);
  }
  uVar4 = (uint)bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    uVar4 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return CONCAT44(uVar4,in_lr);
}

