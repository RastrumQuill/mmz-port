// sub_0808A8E0 at 0x0808A8E0 (thumb)

undefined4 sub_0808A8E0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -2;
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  iVar3 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 10;
  *(int *)(param_1 + 100) = iVar3;
  iVar2 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -10;
  *(int *)(param_1 + 0x68) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 - *(int *)(param_1 + 0x5c));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 - *(int *)(param_1 + 0x60));
  *(int *)(param_1 + 0x5c) = iVar3;
  *(int *)(param_1 + 0x60) = iVar2;
  return in_lr;
}

