// sub_0810A3E0 at 0x0810A3E0 (thumb)

undefined4 sub_0810A3E0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x63a8);
  *(uint *)(param_1 + 0x54) = ((*(byte *)(param_1 + 0x11) & 3) * 0x18 + 0x80) * 0x100;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    uVar1 = 0x3800;
  }
  else {
    uVar1 = 0x3000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (3 < *(byte *)(param_1 + 0x11)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  if ((int)((uint)*(ushort *)(iVar3 + 200) & 1 << uVar2) >> uVar2 == 0) {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886966c + uVar2 * 2));
    *(undefined *)(param_1 + 0x22) = 1;
  }
  else {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886965c + uVar2 * 2));
    *(undefined *)(param_1 + 0x22) = 0;
  }
  return in_lr;
}

