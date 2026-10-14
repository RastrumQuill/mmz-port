// sub_0809BE2C at 0x0809BE2C (thumb)

undefined4 sub_0809BE2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885dcbc + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(iVar1 + 0xd) != *(char *)(param_1 + 0xb6)) {
      *(char *)(param_1 + 0xd) = *(char *)(iVar1 + 0xd);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(char *)(param_1 + 0xb6) = *(char *)(iVar1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809C04C(param_1);
  }
  return in_lr;
}

