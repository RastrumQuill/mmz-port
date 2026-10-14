// sub_08068F78 at 0x08068F78 (thumb)

undefined8 sub_08068F78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083629fc + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362a0c + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
        uVar2 = 1;
        goto LAB_08068fe6;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_08068fe6;
      }
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  uVar2 = 0;
LAB_08068fe6:
  return CONCAT44(in_lr,uVar2);
}

