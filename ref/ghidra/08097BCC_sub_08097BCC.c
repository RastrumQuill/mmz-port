// sub_08097BCC at 0x08097BCC (thumb)

undefined4 sub_08097BCC(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x12);
  puVar3 = (ushort *)(param_1 + 0x7c);
  *(ushort *)(param_1 + 0x48) = *puVar3;
  *(ushort *)(param_1 + 0x4a) = *puVar3;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\n';
  uVar2 = *puVar3;
  *puVar3 = (ushort)(uVar2 - 0xd);
  if ((int)((uVar2 - 0xd) * 0x10000) < 1) {
    *puVar3 = 1;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar1 + -1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

