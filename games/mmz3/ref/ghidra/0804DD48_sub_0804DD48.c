// sub_0804DD48 at 0x0804DD48 (thumb)

undefined4 sub_0804DD48(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x10) == '\0') && (iVar3 = sub_0804DDB8(param_1), iVar3 != 1)) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      cVar2 = '\a';
      goto LAB_0804ddb0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08017700(param_1,0xab09);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xf) = 0;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804ddb0:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

