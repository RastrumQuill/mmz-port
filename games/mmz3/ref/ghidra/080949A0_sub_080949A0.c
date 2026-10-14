// sub_080949A0 at 0x080949A0 (thumb)

undefined4 sub_080949A0(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0xf;
    sub_0800471C(0x40);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083666f4);
    sub_08017700(param_1,0x5800);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(byte *)(DAT_0202f5c0 + 0x143) = *(byte *)(DAT_0202f5c0 + 0x143) & 0xf0 | 1;
  *(byte *)(DAT_0202f5c0 + 0x143) = *(byte *)(DAT_0202f5c0 + 0x143) & 0xf;
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar1 = DAT_0202f5c0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  sub_080177F4(param_1);
  return in_lr;
}

