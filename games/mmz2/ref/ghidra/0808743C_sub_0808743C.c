// sub_0808743C at 0x0808743C (thumb)

undefined4 sub_0808743C(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(byte *)(param_1 + 0x12) < 0x81) {
    uVar1 = 0x17;
  }
  else {
    uVar1 = 0x19;
  }
  *(undefined *)(param_1 + 0x25) = uVar1;
  bVar4 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar4 + 1;
  if ((bVar4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 0x12);
    uVar2 = bVar4 + 0x40 & 0xff;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x12);
    uVar2 = (uint)bVar4;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + iVar3 * (short)(&DAT_080ef450)[uVar2];
  *(byte *)(param_1 + 0x12) = bVar4 + 3;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    *(int *)(param_1 + 0x5c) = iVar3 + -1;
  }
  return in_lr;
}

