// sub_080B0E5C at 0x080B0E5C (thumb)

undefined4 sub_080B0E5C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CE54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801CF00(param_1,0xb900);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885fed4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b0d61;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(int *)(param_1 + 0xbc) =
       (*(int *)(&DAT_0885ff0c + (*(byte *)(param_1 + 0x11) - 1) * 4) + 0x10) * 0x100;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (1 < *(byte *)(param_1 + 0x11)) {
    uVar1 = sub_080B0C4C(param_1 + 0x54,
                         (uint)*(byte *)(param_1 + 0x10) << 8 |
                         *(byte *)(param_1 + 0x11) - 1 & 0xffff);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x140;
  *(undefined4 *)(param_1 + 0x60) = 0x140;
  *(undefined4 *)(param_1 + 0xb8) = 0x900;
  if (*(byte *)(param_1 + 0x10) < 2) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)(&DAT_0885ff0c + (*(byte *)(param_1 + 0x11) - 1) * 4) * -0x100;
    *(undefined4 *)(param_1 + 0xb4) = 0xfffff800;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)(&DAT_0885ff0c + (*(byte *)(param_1 + 0x11) - 1) * 4) * 0x100;
    *(undefined4 *)(param_1 + 0xb4) = 0x800;
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffec0;
    *(undefined4 *)(param_1 + 0xb8) = 0xfffff800;
  }
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080B0CD0(param_1);
  return in_lr;
}

