// sub_0808AF48 at 0x0808AF48 (thumb)

undefined4 sub_0808AF48(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  iVar2 = *(int *)(DAT_0202e130 + 0x54);
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0x240;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffdc0;
  }
  *(undefined *)(param_1 + 0x11) = 2;
  if (iVar1 < iVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  *(bool *)(param_1 + 0x4c) = iVar1 < iVar2;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | (iVar1 < iVar2) << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *pbVar3 = *pbVar3 & 0xdf | 0x20;
  return in_lr;
}

