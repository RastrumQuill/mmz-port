// sub_080C1C8C at 0x080C1C8C (thumb)

undefined4 sub_080C1C8C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0xb00);
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + *(int *)(param_1 + 0x78);
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (((*(char *)(iVar2 + 0x94) != '\0') ||
        ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(iVar2 + 0x1d) >> 5) * 4) &
         1 << (*(byte *)(iVar2 + 0x1d) & 0x1f)) != 0)) || ((*(uint *)(iVar2 + 0x8c) & 1) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    if ((*(byte *)(*(int *)(iVar2 + 0x18) + 9) & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    sub_080177F4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

