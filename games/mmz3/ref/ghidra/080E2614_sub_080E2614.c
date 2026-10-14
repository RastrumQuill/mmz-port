// sub_080E2614 at 0x080E2614 (thumb)

undefined4 sub_080E2614(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(iVar4 + 0x2c);
  if (((((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) && (*(short *)(iVar3 + 0xa4) != 0)) &&
      ((*(uint *)(param_1 + 0x14) & 0x800000) != 0)) &&
     ((*(char *)(iVar5 + 8) == '\x04' && (*(char *)(iVar5 + 9) == '\0')))) {
    if (*(char *)(*(int *)(iVar4 + 0x28) + 0x12) == '\0') {
      bVar1 = *(byte *)(iVar3 + 0xb4);
    }
    else {
      bVar1 = *(byte *)(iVar3 + 0xb5);
    }
    if ((*(byte *)(DAT_0203063c + (uint)bVar1) & 4) == 0) {
      cVar2 = *(char *)(iVar4 + 0x12) + '\x01';
    }
    else {
      cVar2 = *(char *)(iVar4 + 0x12) + '\x02';
    }
    *(char *)(iVar4 + 0x12) = cVar2;
    sub_08019AC8(2);
  }
  return in_lr;
}

