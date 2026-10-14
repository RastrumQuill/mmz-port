// sub_0809AE9C at 0x0809AE9C (thumb)

undefined4 sub_0809AE9C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0xbf03);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
      sub_080177F4(param_1);
      cVar2 = *(char *)(*(int *)(*(int *)(param_1 + 0x28) + 0x28) + 0x284);
      if (cVar2 != '\0') {
        return in_lr;
      }
      goto LAB_0809af4a;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbf02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  sub_080177F4(param_1);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x28) + 0x28) + 0x284) != '\x01') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0809af4a:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

