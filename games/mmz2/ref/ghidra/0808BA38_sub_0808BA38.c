// sub_0808BA38 at 0x0808BA38 (thumb)

undefined4 sub_0808BA38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  *(char *)(param_1 + 0x24) = -0x80 - *(char *)(param_1 + 0x12);
  iVar2 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 10;
  *(int *)(param_1 + 100) = iVar2;
  iVar1 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -10;
  *(int *)(param_1 + 0x68) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 - *(int *)(param_1 + 0x5c));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar1 - *(int *)(param_1 + 0x60));
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x60) = iVar1;
  return in_lr;
}

