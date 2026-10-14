// sub_080CD5B4 at 0x080CD5B4 (thumb)

undefined4 sub_080CD5B4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801260C(param_1);
  *(int *)(param_1 + 0x40) = param_1 + 0x5c;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08349594,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_083495c4;
  *(undefined2 *)(param_1 + 0x26) = 0x3c01;
  sub_080127E4(param_1,0x7000);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x58) = DAT_0202d004 + -0x800;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + -0x801;
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x68) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CD678(param_1);
  return in_lr;
}

