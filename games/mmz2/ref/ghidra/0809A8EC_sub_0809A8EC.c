// sub_0809A8EC at 0x0809A8EC (thumb)

undefined4 sub_0809A8EC(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xd06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6000U < 0xc001) &&
     (*(int *)(param_1 + 0x58) - (*(int *)(DAT_0202e130 + 0x58) + -0x1000) < 1)) {
    sub_0809ABB4(param_1);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    puVar2 = (ushort *)(param_1 + 0xb4);
    uVar1 = *puVar2;
    if (uVar1 < 0x4000) {
      *puVar2 = uVar1 + 0x180;
      if (0x4000 < (ushort)(uVar1 + 0x180)) {
        *puVar2 = 0x4000;
      }
    }
    else if (0x4000 < uVar1) {
      *puVar2 = uVar1 - 0x180;
      if ((ushort)(uVar1 - 0x180) < 0x4000) {
        *puVar2 = 0x4000;
      }
    }
    sub_0809AC10(param_1);
  }
  return in_lr;
}

