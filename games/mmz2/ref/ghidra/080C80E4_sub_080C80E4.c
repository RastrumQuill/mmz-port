// sub_080C80E4 at 0x080C80E4 (thumb)

undefined4 sub_080C80E4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0xc00;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080c81c4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202e69c = 0x310;
    DAT_0202e49c = 8;
    sub_08002638(&DAT_08433778,0xf800);
    sub_08002AEC(&DAT_08433784,(DAT_0202e49c - 7) * 0x20 + 0x200);
    sub_080127E4(param_1,0x8601);
    *(undefined *)(param_1 + 0x25) = 1;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    return in_lr;
  }
  sub_080127E4(param_1,0x8602);
LAB_080c81c4:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

