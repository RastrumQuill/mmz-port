// sub_080B7D84 at 0x080B7D84 (thumb)

undefined4 sub_080B7D84(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  puVar3 = (undefined4 *)(param_1 + 0xbc);
  cVar1 = sub_080B423C(param_1,puVar3,param_1 + 0x54,param_1 + 0xcc,2,0,0xfffff400);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x4c) = *puVar3;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc0);
    iVar2 = sub_080C8CB0(*(byte *)(param_1 + 0x12) + 1,0x30);
    *(char *)(param_1 + 0x12) = (char)iVar2;
    iVar2 = sub_080C8C38(iVar2 << 8,0x30);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (short)(&DAT_080c8e24)[iVar2] * -4;
  }
  else {
    *puVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080B7D28(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xe) = 2;
      sub_080B7E10(param_1);
    }
  }
  return in_lr;
}

