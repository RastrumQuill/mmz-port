// sub_08071E94 at 0x08071E94 (thumb)

undefined4 sub_08071E94(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1a03);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = sub_080093C4(local_10,*(undefined4 *)(param_1 + 0x58));
    local_c = local_c + -0x1000;
    sub_080B3AD8(&local_10,3,0);
    *(undefined *)(param_1 + 0xbd) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  puVar2 = (ushort *)(param_1 + 0xbe);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 0x10;
  *(ushort *)(param_1 + 0x50) = uVar1 + 0x10;
  *(ushort *)(param_1 + 0x52) = *puVar2;
  if (0xff < *puVar2) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

