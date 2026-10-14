// sub_080B9108 at 0x080B9108 (thumb)

undefined4 sub_080B9108(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0xb01);
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x78);
    bVar2 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar2 + 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (((*(char *)(iVar3 + 0x94) != '\0') ||
        ((*(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(iVar3 + 0x1d) >> 5) * 4) &
         1 << (*(byte *)(iVar3 + 0x1d) & 0x1f)) != 0)) || ((*(uint *)(iVar3 + 0x8c) & 1) != 0)) {
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

