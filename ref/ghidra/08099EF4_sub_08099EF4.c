// sub_08099EF4 at 0x08099EF4 (thumb)

undefined4 sub_08099EF4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = *(undefined4 *)(iVar3 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

