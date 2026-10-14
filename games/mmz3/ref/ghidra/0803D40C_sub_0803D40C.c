// sub_0803D40C at 0x0803D40C (thumb)

undefined4 sub_0803D40C(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835e280)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  piVar2 = (int *)(param_1 + 0xb4);
  iVar1 = *(int *)(param_1 + 0x54) >> 8;
  *piVar2 = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xf0);
  *piVar2 = iVar1 * 0xf000 + 0x7800;
  iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1 + -0x400;
  *(int *)(param_1 + 0x54) = *piVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xbd) = 0xff;
  *(undefined *)(param_1 + 0xbc) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = 0;
    do {
      if (uVar3 != 5) {
        iVar1 = sub_080656A0(uVar3 & 0xff);
        *(int *)(iVar1 + 0xb4) = param_1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0xb);
    if ((DAT_02002446 & 0x40) == 0) {
      sub_0803D3D4(param_1,&DAT_0835e268,0x40);
    }
    else {
      sub_0803D3D4(param_1,&DAT_0835e268,0x50);
    }
    sub_0800393C(&DAT_085d795c,(DAT_0202fa1a - 0x380) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7968,(DAT_0202f81a - 5) * 0x20 + 0x200);
  }
  sub_0803D534(param_1);
  return in_lr;
}

