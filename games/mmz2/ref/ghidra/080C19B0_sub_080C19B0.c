// sub_080C19B0 at 0x080C19B0 (thumb)

undefined4 sub_080C19B0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sVar1 = (&DAT_080ef450)[DAT_0202e034 >> 1 & 0xff];
  iVar3 = *(int *)(&DAT_08348884 + (uint)*(byte *)(param_1 + 0x10) * 8) * (int)sVar1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb4) + (iVar3 >> 8);
  iVar3 = *(int *)(&DAT_08348888 + (uint)*(byte *)(param_1 + 0x10) * 8) * (int)sVar1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xb8) + (iVar3 >> 8);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
  uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar2 < 0x4001) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348864;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  sub_080128D4(param_1);
  return in_lr;
}

