// sub_080772EC at 0x080772EC (thumb)

undefined4 sub_080772EC(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08078ED4(param_1,4);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)])
                );
    sub_08078E20(param_1);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    break;
  case 2:
    *(int *)(param_1 + 0xbc) = DAT_0202ea34 + -0x5000;
    iVar1 = DAT_0202ea30;
    *(int *)(param_1 + 0xb8) = DAT_0202ea30 + -0x7800;
    *(bool *)(param_1 + 0xc5) = iVar1 < *(int *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0xb8) + 0xe000;
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar3 = *(int *)(param_1 + 0xbc) + 0x5000;
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 100) = iVar1 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = iVar3 - *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)])
                );
    sub_08078E5C(param_1);
    bVar2 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    iVar1 = (uint)*(byte *)(param_1 + 0x12) * -*(int *)(param_1 + 100);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3f;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar1 >> 6);
    iVar1 = (uint)*(byte *)(param_1 + 0x12) * -*(int *)(param_1 + 0x68);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3f;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar1 >> 6);
    break;
  case 4:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)])
                );
    sub_08078E20(param_1);
    if ((((*(char *)(*(int *)(param_1 + 200) + 0xb4) != '\0') &&
         (*(char *)(*(int *)(param_1 + 200) + 0xb6) == '\0')) &&
        (*(char *)(*(int *)(param_1 + 0xcc) + 0xb8) != '\0')) &&
       (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  default:
    goto switchD_08077300_caseD_5;
  }
  if (bVar2 == 0) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_08077300_caseD_5:
  return in_lr;
}

