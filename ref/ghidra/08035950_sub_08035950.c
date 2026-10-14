// sub_08035950 at 0x08035950 (thumb)

undefined4 sub_08035950(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_080297C0();
  if (((*(uint *)(iVar3 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar3 + 0x94) & 2) == 0)) {
    cVar1 = (&DAT_083a8013)
            [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
             (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (0x40 < bVar2) {
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (2 < *(byte *)(*(int *)(param_1 + 0x20) + 0xf)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

