// sub_08036EE8 at 0x08036EE8 (thumb)

undefined4 sub_08036EE8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar2 = sub_08038B00(param_1,*(undefined4 *)(param_1 + 0x54));
  if ((cVar2 == '\0') &&
     (bVar1 = *(byte *)(param_1 + 10), bVar3 = sub_08038AD8(param_1), (bVar1 >> 4 & 1) == bVar3)) {
    if ((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) + 0x40c0U < 0x8181) {
      iVar4 = sub_08008360(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      if (iVar4 - *(int *)(DAT_0202286c + 0x50) < 0x1400) {
        sub_08001EAC(0x40);
        *(undefined *)(param_1 + 0xf) = 1;
        sub_08038A5C(param_1,7);
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xe) = 2;
  }
  return in_lr;
}

