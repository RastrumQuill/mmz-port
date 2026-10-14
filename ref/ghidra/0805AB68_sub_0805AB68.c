// sub_0805AB68 at 0x0805AB68 (thumb)

undefined4 sub_0805AB68(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800561C(param_1 + 0x74,&DAT_082afd68);
        sub_080033F0(param_1 + 0x6c,1);
        *(undefined *)(param_1 + 0x12) = 0x30;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        sub_0805985C(param_1);
      }
      goto LAB_0805ac08;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_0800561C(param_1 + 0x74,&DAT_082afd68);
    sub_080033F0(param_1 + 0x6c,10);
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined *)(param_1 + 0xc1) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0805ac08:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

