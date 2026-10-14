// sub_08075B58 at 0x08075B58 (thumb)

undefined8 sub_08075B58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\b') && (*(int *)(param_1 + 0xb4) == 0)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      if ((*(char *)(param_1 + 0x10) != '\x01') && (iVar1 = sub_08063614(param_1), iVar1 != 0)) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363898 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083638c0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
LAB_08075bb4:
        uVar2 = 1;
        goto LAB_08075c14;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      if (((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) &&
         (*(char *)(param_1 + 0xb8) != '\0')) {
        sub_08075838(param_1);
        sub_08017700(param_1,0x2a04);
        sub_080177F4(param_1);
      }
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
          uVar2 = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          goto LAB_08075c14;
        }
        goto LAB_08075bb4;
      }
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  uVar2 = 0;
LAB_08075c14:
  return CONCAT44(in_lr,uVar2);
}

