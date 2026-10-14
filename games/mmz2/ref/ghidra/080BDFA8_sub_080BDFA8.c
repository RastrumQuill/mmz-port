// sub_080BDFA8 at 0x080BDFA8 (thumb)

undefined4 sub_080BDFA8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 5;
  *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 5;
  if (*(byte *)(param_1 + 0x11) < 2) {
    iVar2 = *(int *)(param_1 + 0x78) + (uint)*(byte *)(param_1 + 0x12) * -0x200;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x78) + (uint)*(byte *)(param_1 + 0x12) * 0x200;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x74) +
       (uint)*(byte *)(param_1 + 0x12) * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\f';
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BDB6C(param_1);
  }
  return in_lr;
}

