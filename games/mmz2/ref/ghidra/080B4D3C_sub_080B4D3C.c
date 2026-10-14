// sub_080B4D3C at 0x080B4D3C (thumb)

undefined4 sub_080B4D3C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(char *)(iVar2 + 0xd) == '\n') || (1 < *(byte *)(iVar2 + 0xc))) {
      sub_080127E4(param_1,0x2804);
      *(undefined *)(param_1 + 0xd) = 2;
    }
    else if (*(char *)(param_1 + 0x71) == '\x04') {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    if (((*(char *)(iVar2 + 0xd) == '\n') || (1 < *(byte *)(iVar2 + 0xc))) ||
       (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, 0x5f < bVar1)) {
      sub_080127E4(param_1,0x2804);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080B4C80(param_1);
  }
  return in_lr;
}

