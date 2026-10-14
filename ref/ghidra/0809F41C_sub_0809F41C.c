// sub_0809F41C at 0x0809F41C (thumb)

undefined4 sub_0809F41C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5710 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (*(byte *)(iVar1 + 0xc) < 2) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
      *(undefined *)(param_1 + 0x46) = *(undefined *)(iVar1 + 0x46);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0809F478(param_1);
    }
  }
  return in_lr;
}

