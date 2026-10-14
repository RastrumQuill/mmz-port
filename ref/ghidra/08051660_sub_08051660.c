// sub_08051660 at 0x08051660 (thumb)

undefined4 sub_08051660(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    cVar1 = (&DAT_02022f30)[*(byte *)(iVar2 + 9)];
    *(byte *)(iVar2 + 0x41) = *(byte *)(iVar2 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(iVar2 + 0x1e) = cVar1;
    *(short *)(iVar2 + 0xc0) =
         (short)*(undefined4 *)(DAT_0202286c + 0x4c) - (short)*(undefined4 *)(iVar2 + 0x4c);
    if ((*(ushort *)(param_1 + 0x1a) & 0x1000) != 0) {
      *(undefined *)(iVar2 + 0xc2) = 1;
    }
  }
  return in_lr;
}

