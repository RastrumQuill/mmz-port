// sub_080E8C80 at 0x080E8C80 (thumb)

undefined4 sub_080E8C80(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x7c) == '\x01') {
        uVar3 = sub_080E87EC(*(undefined4 *)(param_1 + 0x28),0x200,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
    }
    else {
      iVar2 = sub_080E87EC(*(undefined4 *)(param_1 + 0x28),*(byte *)(param_1 + 0x11) - 1 | 0x400,
                           *(undefined2 *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x7c) = *(undefined *)(param_1 + 0x7c);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 < 2) {
      uVar4 = sub_08128A9C(*(ushort *)(param_1 + 0x74),0x3c);
      iVar2 = FUN_081288bc((uVar4 & 0xffff) * 0xa7,100);
      iVar2 = 100 - iVar2;
    }
    else {
      iVar2 = FUN_081288bc(0xe10 - (uint)*(ushort *)(param_1 + 0x74),0x3c);
    }
    if ((bVar1 == 4) || (bVar1 == 1)) {
      iVar2 = sub_08128A24(iVar2,10);
    }
    else {
      iVar2 = sub_08128A9C(iVar2,10);
    }
    if (bVar1 == 2) {
      sub_0801CF00(param_1,0xf70b);
    }
    else {
      if (iVar2 == 10) {
        iVar2 = 0;
      }
      sub_0801CF00(param_1,(&DAT_08865dae)[iVar2]);
    }
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((4 - (uint)*(byte *)(param_1 + 0x11)) * 0xf + 0x14) * 0x100 +
         -0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080E88D0(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

