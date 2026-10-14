// sub_080DC00C at 0x080DC00C (thumb)

undefined4 sub_080DC00C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x10);
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x11);
  if (((uint)*(ushort *)(iVar2 + 0x218) & *(uint *)(&DAT_0834bd84 + uVar1 * 4)) == 0) {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bd44 + uVar1 * 2));
  }
  else {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bd30 + uVar1 * 2));
  }
  sub_080128D4(param_1);
  return in_lr;
}

