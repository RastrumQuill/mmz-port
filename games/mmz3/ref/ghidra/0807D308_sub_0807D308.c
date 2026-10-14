// sub_0807D308 at 0x0807D308 (thumb)

undefined4 sub_0807D308(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x801;
  sVar1 = sub_0800E41C();
  if (sVar1 != 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08364444;
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807D368(param_1);
  return in_lr;
}

