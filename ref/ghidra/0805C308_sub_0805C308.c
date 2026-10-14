// sub_0805C308 at 0x0805C308 (thumb)

undefined4 sub_0805C308(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x12) == '\x02') {
        uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
        local_14 = uVar3 * 0x2000 + *(int *)(param_1 + 0x4c) + -0x1000;
        local_10 = *(int *)(param_1 + 0x50) + -0xa00;
        sub_08078374(&local_14,uVar3 * 0x600 + -0x300);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      cVar2 = '\0';
      goto LAB_0805c3f8;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080033F0(param_1 + 0x6c,4);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805c3f8:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

