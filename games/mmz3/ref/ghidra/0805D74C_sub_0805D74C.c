// sub_0805D74C at 0x0805D74C (thumb)

undefined4 sub_0805D74C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083619b4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  sub_0803D3D4(param_1,&DAT_083618f4,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x805d6a1;
  *(undefined *)(param_1 + 0x22) = 4;
  *(undefined2 *)(param_1 + 0x20) = 0x200;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0800393C(&DAT_085d82f8,(DAT_0202fb10 - 0x290) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8304,(DAT_0202f910 - 6) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d8b7c,(DAT_0202fbea - 0x390) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8b88,(DAT_0202f9ea - 7) * 0x20 + 0x200);
    iVar1 = *(int *)(param_1 + 0x54) >> 8;
    *(int *)(param_1 + 0xb4) = iVar1;
    iVar1 = FUN_080fe2f8(iVar1,0xf0);
    *(int *)(param_1 + 0xb4) = iVar1 * 0xf000;
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xc5) = 0xff;
    *(undefined *)(param_1 + 0xc6) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    sub_080258F0(0,8);
    sub_08036F90(2,4);
  }
  sub_0805D8C4(param_1);
  return in_lr;
}

