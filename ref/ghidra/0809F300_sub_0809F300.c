// sub_0809F300 at 0x0809F300 (thumb)

undefined4 sub_0809F300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0809C6C4();
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar1 = sub_08005458(DAT_02023118);
      if (iVar1 == 0) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x4c) + 0x800;
      *(int *)(param_1 + 0x4c) = iVar3;
      uVar2 = sub_08008360(iVar3,*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(undefined *)(iVar1 + 9) = 8;
      *(undefined4 *)(iVar1 + 0x14) = 0x809f301;
      *(ushort *)(iVar1 + 0x1c) = DAT_02023180;
      *(byte *)(iVar1 + 0x1e) = DAT_02023128;
      *(undefined *)(iVar1 + 0x11) = 1;
      *(int *)(iVar1 + 0x20) = param_1;
      *(int *)(iVar1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x100;
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      sub_080014E8(&DAT_085100a0,(DAT_02023180 - 0x100) * 0x20 + 0x10000);
      sub_0800179C(&DAT_085100ac,(DAT_02023128 - 10) * 0x20 + 0x200);
    }
    else {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + 0x800;
    *(int *)(param_1 + 0x4c) = iVar1;
    uVar2 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_0809F41C(param_1);
  return in_lr;
}

