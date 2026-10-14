// sub_0808F024 at 0x0808F024 (thumb)

void sub_0808F024(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x74);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x76);
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x76);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x74);
  }
  *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + -0x14;
  uVar2 = *(ushort *)(param_1 + 0x76) + 0x40;
  *(ushort *)(param_1 + 0x76) = uVar2;
  if (0x2000000 < (int)((uint)uVar2 * 0x10000)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return;
}

