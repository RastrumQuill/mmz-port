// sub_08093668 at 0x08093668 (thumb)

undefined8 sub_08093668(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\a') && (*(int *)(param_1 + 0xb4) == 0)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083665e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366604 + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
LAB_080936be:
        uVar2 = 1;
        goto LAB_080936f0;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) goto LAB_080936be;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  uVar2 = 0;
LAB_080936f0:
  return CONCAT44(in_lr,uVar2);
}

