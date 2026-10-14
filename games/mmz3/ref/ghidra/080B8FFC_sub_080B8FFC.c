// sub_080B8FFC at 0x080B8FFC (thumb)

undefined4 sub_080B8FFC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xd4) & 8) == 0) {
        return in_lr;
      }
      cVar2 = '\x01';
      goto LAB_080b9100;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xb00);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x78);
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (((*(char *)(iVar3 + 0x94) != '\0') ||
      ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(iVar3 + 0x1d) >> 5) * 4) &
       1 << (*(byte *)(iVar3 + 0x1d) & 0x1f)) != 0)) || ((*(uint *)(iVar3 + 0x8c) & 1) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if ((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  sub_080177F4(param_1);
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xd4) & 2) == 0) {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b9100:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

