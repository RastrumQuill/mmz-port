// sub_080C4C10 at 0x080C4C10 (thumb)

undefined4 sub_080C4C10(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08017700(param_1,0xb700);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x78);
  if ((((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 1) != 0) && (*(char *)(iVar3 + 0xd) != '\x05')) &&
     ((*(char *)(iVar3 + 0xd) != '\x06' || (1 < *(byte *)(iVar3 + 0xe))))) {
    if ((*(uint *)(iVar3 + 0x8c) & 1) == 0) {
      if ((*(char *)(param_1 + 0x12) == '\0') ||
         (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))
      {
        bVar2 = *(byte *)(param_1 + 10) | 1;
        goto LAB_080c4cda;
      }
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x5a;
    }
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080c4cda:
  *(byte *)(param_1 + 10) = bVar2;
  sub_080177F4(param_1);
  return in_lr;
}

