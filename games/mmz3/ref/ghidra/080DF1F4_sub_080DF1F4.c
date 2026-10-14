// sub_080DF1F4 at 0x080DF1F4 (thumb)

undefined4 sub_080DF1F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x1f;
    sub_08017700(param_1,0xde00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = DAT_0202f4ac * 0x100 + (uint)*(byte *)(param_1 + 0x12) * 0x10000;
  }
  else {
    iVar2 = DAT_0202f4b0 * 0x100 + (uint)*(byte *)(param_1 + 0x12) * -0x8000;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0x61000;
  }
  else {
    uVar1 = 0x22000;
  }
  iVar2 = sub_080FE390(iVar2,uVar1);
  *(int *)(param_1 + 0x54) = iVar2 + *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  sub_080177F4(param_1);
  return in_lr;
}

