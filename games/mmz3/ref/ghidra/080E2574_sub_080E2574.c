// sub_080E2574 at 0x080E2574 (thumb)

undefined4 sub_080E2574(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) && ((*(uint *)(iVar1 + 0x8c) & 0x200) == 0))
     && (*(short *)(iVar1 + 0xa4) != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if ((((*(uint *)(iVar1 + 0x8c) & 0x200) == 0) && (*(short *)(iVar1 + 0xa4) != 0)) &&
       (*(byte *)(param_1 + 0x12) != 0)) {
      DAT_0202f600 = DAT_0202f600 + (uint)*(byte *)(param_1 + 0x12) * 4;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    sub_080E25F4(param_1);
  }
  return in_lr;
}

