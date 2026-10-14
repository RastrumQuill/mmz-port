// sub_08091970 at 0x08091970 (thumb)

undefined4 sub_08091970(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x13) = 0xc0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if ((cVar2 != '\0') && (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 3;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x8802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  iVar3 = sub_08009B28();
  if (iVar3 < 0) {
    sub_0800471C(0x100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

