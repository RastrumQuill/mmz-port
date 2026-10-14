// sub_08079D0C at 0x08079D0C (thumb)

undefined4 sub_08079D0C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x80;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801C560(0);
    sub_0801CC9C(param_1);
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,0xb105);
    sub_08001D30(&DAT_08c450e0,(DAT_0202e1f0 - 0x250) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450ec,(DAT_0202dff0 - 5) * 0x20 + 0x200);
    uVar2 = sub_080B7904(param_1,0,0);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    sub_080B80C4(param_1,0,0);
    sub_080B80C4(param_1,1,0);
    sub_080FE070(param_1,0,0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0x1000;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(int *)(param_1 + 100) = DAT_0202ea30 + -0x7800;
    *(int *)(param_1 + 0x68) = DAT_0202ea34 + -0x5000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb107);
    sub_0801CFF0(param_1);
    sub_080CD554(param_1,0,0);
    sub_08002B10(0x194);
    sub_08002B10(0x14f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x4ef9) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801CF00(param_1,0xb101);
  }
  sub_0801CFF0(param_1);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

