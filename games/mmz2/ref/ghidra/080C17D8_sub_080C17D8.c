// sub_080C17D8 at 0x080C17D8 (thumb)

undefined4 sub_080C17D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08012580();
  sub_080127E4(param_1,0x1200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08348864;
  *(undefined2 *)(param_1 + 0x26) = 0x2401;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar1 = *(int *)(param_1 + 0x54) + -0x800;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x58) + -0x800;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x11) != '\0') {
    sub_08066898(param_1,&DAT_0834886c);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C1874(param_1);
  return in_lr;
}

