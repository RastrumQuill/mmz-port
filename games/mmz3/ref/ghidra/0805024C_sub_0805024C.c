// sub_0805024C at 0x0805024C (thumb)

undefined4 sub_0805024C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835fd7c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  sub_0803D3D4(param_1,&DAT_0835fd34,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8050181;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x10) != '\x01') {
    iVar1 = *(int *)(param_1 + 0x54) >> 8;
    *(int *)(param_1 + 0xb8) = iVar1;
    iVar1 = FUN_080fe2f8(iVar1,0xf0);
    *(int *)(param_1 + 0xb8) = iVar1 * 0xf000 + 0x7800;
    iVar1 = *(int *)(param_1 + 0x58) >> 8;
    *(int *)(param_1 + 0xbc) = iVar1;
    iVar1 = FUN_080fe2f8(iVar1,0xa0);
    *(int *)(param_1 + 0xbc) = (iVar1 + 1) * 0xa000;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined *)(param_1 + 0xca) = 0;
    *(undefined *)(param_1 + 0xcb) = 0;
    *(undefined *)(param_1 + 0xcd) = 0x40;
    *(undefined *)(param_1 + 0xce) = 0;
    *(undefined *)(param_1 + 0xcf) = 0;
    sub_0800393C(&DAT_085d7eac,(DAT_0202faa2 - 0x280) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7eb8,(DAT_0202f8a2 - 5) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d7ec0,(DAT_0202faa4 - 0x294) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7ecc,(DAT_0202f8a4 - 6) * 0x20 + 0x200);
    *(undefined2 *)(param_1 + 0xd0) = 0xffff;
    *(undefined *)(param_1 + 0xd2) = 1;
  }
  sub_080503CC(param_1);
  return in_lr;
}

