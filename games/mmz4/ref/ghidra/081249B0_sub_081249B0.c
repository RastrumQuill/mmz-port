// sub_081249B0 at 0x081249B0 (thumb)

undefined8 sub_081249B0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xde5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar3 = sub_080D3AC8(0);
        *(undefined4 *)(param_1 + 0xdd0) = uVar3;
        sub_08002B10(0x1e);
        sub_08002B10(0xa3);
        *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
      }
      else if ((bVar1 == 3) && (1 < *(byte *)(*(int *)(param_1 + 0xdd0) + 0xc))) {
        *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
        *(undefined *)(param_1 + 0xde5) = 0;
        *(undefined4 *)(param_1 + 0xdf0) = 1;
        local_14 = *(int *)(param_1 + 0xdc4);
        local_10 = *(int *)(param_1 + 0xdc8) + 0x3000;
        sub_08104654(&local_14,0,param_1);
        local_14 = local_14 + -0x7000;
        local_10 = local_10 + 0x1000;
        uVar4 = 1;
        do {
          local_14 = local_14 + 0x1000;
          sub_08104654(&local_14,uVar4 << 8,param_1);
          if ((uVar4 == 2) || (uVar4 == 5)) {
            local_14 = local_14 + 0x3000;
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < 8);
      }
      goto LAB_08124a96;
    }
    if (bVar1 != 0) goto LAB_08124a96;
    *(undefined *)(param_1 + 0xde8) = 0x3c;
    *(undefined4 *)(param_1 + 0xdf0) = 0;
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0xde8) + -1;
  *(char *)(param_1 + 0xde8) = cVar2;
  if (cVar2 == -1) {
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
  }
LAB_08124a96:
  *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 1;
  return CONCAT44(in_lr,1);
}

