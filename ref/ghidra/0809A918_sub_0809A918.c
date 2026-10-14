// sub_0809A918 at 0x0809A918 (thumb)

void sub_0809A918(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  iVar2 = *(int *)(param_1 + 0x54) +
          ((short)(&DAT_080c8e24)[(bVar1 + 0x81 & 0xff) + 0x40] + 0x100 >> 1);
  *(int *)(param_1 + 0x54) = iVar2;
  if (0x800 < iVar2) {
    *(undefined4 *)(param_1 + 0x54) = 0x800;
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0x12) == -1) {
    *(undefined *)(param_1 + 0x12) = 0xfd;
  }
  return;
}

