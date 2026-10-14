// sub_08077F00 at 0x08077F00 (thumb)

undefined8 sub_08077F00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363be0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363c04 + (uint)*(byte *)(param_1 + 0xd) * 4));
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      sub_080177F4(param_1);
      uVar2 = 1;
      goto LAB_08077f72;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_1 + 0xd) == '\x03') {
      sub_08077E2C(param_1);
    }
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_08077f72;
    }
    *(undefined *)(param_1 + 0xf) = 0;
  }
  uVar2 = 0;
LAB_08077f72:
  return CONCAT44(in_lr,uVar2);
}

