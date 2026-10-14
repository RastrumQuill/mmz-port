// sub_0809A138 at 0x0809A138 (thumb)

undefined4 sub_0809A138(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
    *(ushort *)(iVar3 + 0x90) = *(ushort *)(iVar3 + 0x90) & 0xfffe;
    cVar1 = (&DAT_083a8013)
            [((uint)*(ushort *)(iVar3 + 0x1c) * 4 + (uint)*(ushort *)(iVar3 + 0x1c)) * 4 +
             (uint)*(byte *)(iVar3 + 9) * 4 + (&DAT_083a8000)[*(byte *)(iVar3 + 9)]];
    *(byte *)(iVar3 + 0x41) = *(byte *)(iVar3 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(iVar3 + 0x1e) = cVar1;
    *(undefined *)(param_1 + 0x11) = 0;
  }
  else {
    *(ushort *)(iVar3 + 0x90) = *(ushort *)(iVar3 + 0x90) | 1;
    *(byte *)(iVar3 + 0x41) = *(byte *)(iVar3 + 0x41) & 0xf | 0xd0;
    *(undefined *)(iVar3 + 0x1e) = 0xd;
    *(undefined *)(param_1 + 0x11) = 1;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if (0x20 < bVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

