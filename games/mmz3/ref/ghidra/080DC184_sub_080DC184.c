// sub_080DC184 at 0x080DC184 (thumb)

undefined4 sub_080DC184(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080FE4D8((ushort)*(byte *)(param_1 + 0x10) * 0x60 + (short)DAT_0202f4ac,0x180);
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 0xc0) {
    iVar2 = sub_080FE460(uVar1 * 0xa000,0xc0);
    iVar2 = *(int *)(param_1 + 0x68) + iVar2 + -0x5000;
  }
  else {
    iVar2 = sub_080FE460((uVar1 - 0xc0) * 0xa000,0xc0);
    iVar2 = *(int *)(param_1 + 0x68) - (iVar2 + -0x5000);
  }
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(int *)(DAT_0202f5c0 + 0x58) + -0xc00 < *(int *)(param_1 + 0x58)) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836ddc4;
    *(undefined2 *)(param_1 + 0x26) = 0xa001;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  sub_080177F4(param_1);
  return in_lr;
}

