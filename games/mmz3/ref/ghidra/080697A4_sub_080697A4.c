// sub_080697A4 at 0x080697A4 (thumb)

undefined8 sub_080697A4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0xd) != '\a') && (*(char *)(param_1 + 0x10) != '\x02')) &&
      (*(char *)(param_1 + 0x10) != '\x05')) && (*(int *)(param_1 + 0xb4) == 0)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362aa0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362ac0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
LAB_08069804:
        uVar2 = 1;
        goto LAB_08069854;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      if (*(char *)(param_1 + 0xd) == '\x02') {
        if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
          sub_080B8A34(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       *(undefined *)(param_1 + 0x11));
        }
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
          uVar2 = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          goto LAB_08069854;
        }
        goto LAB_08069804;
      }
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  uVar2 = 0;
LAB_08069854:
  return CONCAT44(in_lr,uVar2);
}

