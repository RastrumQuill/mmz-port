// sub_080CD544 at 0x080CD544 (thumb)

undefined4 sub_080CD544(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((uint)*(byte *)(param_1 + 0x11) * 0x200 <
      (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) +
      (uint)*(byte *)(param_1 + 0x11) * 0x100) {
    bVar2 = *(byte *)(param_1 + 0xbc) ^ 1;
    *(byte *)(param_1 + 0xbc) = bVar2;
    if (bVar2 == 0) {
      sub_080127E4(param_1,0x6f04);
    }
    else {
      sub_080127E4(param_1,0x6f03);
    }
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = -0x100;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0x100;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  return in_lr;
}

