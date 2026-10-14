// sub_08066DDC at 0x08066DDC (thumb)

undefined4 sub_08066DDC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        bVar1 = *(byte *)(param_1 + 0x12);
        *(byte *)(param_1 + 0x12) = bVar1 - 1;
        if (bVar1 != 0x2a) {
          if (bVar1 < 0x2b) {
            if (bVar1 == 0) {
              *(undefined *)(param_1 + 0x13) = 0x1e;
              cVar2 = *(char *)(param_1 + 0xe) + '\x01';
              goto LAB_08066f1a;
            }
            if (bVar1 != 0x25) {
              return in_lr;
            }
          }
          else if (bVar1 != 0x2f) {
            return in_lr;
          }
        }
        local_10 = *(int *)(param_1 + 0x50) + -0x1200;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_14 = *(int *)(param_1 + 0x4c) + -0x1400;
          uVar3 = 0;
        }
        else {
          local_14 = *(int *)(param_1 + 0x4c) + 0x1400;
          uVar3 = 0x80;
        }
        sub_08076710(&local_14,0x240,uVar3);
        sub_08001EAC(0xd);
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x30;
      sub_08001EAC(0xd);
      cVar2 = '\x02';
      goto LAB_08066f1a;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x13) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  sub_080033F0(param_1 + 0x6c,2);
  *(undefined *)(param_1 + 0x12) = 0x30;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08066f1a:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

