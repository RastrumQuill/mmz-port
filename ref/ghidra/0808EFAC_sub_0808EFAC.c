// sub_0808EFAC at 0x0808EFAC (thumb)

void sub_0808EFAC(int param_1)

{
  ushort uVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x76);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x74);
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x74);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x76);
  }
  *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + -0x2a;
  uVar1 = *(ushort *)(param_1 + 0x76) + 0x40;
  *(ushort *)(param_1 + 0x76) = uVar1;
  if (0x2000000 < (int)((uint)uVar1 * 0x10000)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return;
}

