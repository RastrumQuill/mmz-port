// sub_08033210 at 0x08033210 (thumb)

undefined4 sub_08033210(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    uVar2 = 0x4d00;
  }
  else {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = 0x4c00;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x4c00) {
      sub_0801CF00(param_1,0x4d00);
      *(undefined *)(param_1 + 0xf) = 2;
      goto LAB_08033260;
    }
  }
  sub_0801CF00(param_1,uVar2);
LAB_08033260:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

