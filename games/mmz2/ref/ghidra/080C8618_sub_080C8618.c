// sub_080C8618 at 0x080C8618 (thumb)

undefined4 sub_080C8618(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(char *)(param_1 + 0x11) == '\0') || ((*(uint *)(DAT_0202ebf0 + 0x14) & 4) != 0)) {
      if ((DAT_0202ebb5 & 0x40) == 0) {
        sub_080127E4(param_1,0x8500);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x11) << 6;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        goto LAB_080c86aa;
      }
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\x01') {
LAB_080c86aa:
      sub_080128D4(param_1);
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 0x54) +
         (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x13) & 0x7f) * 2] * -4;
    *(int *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) +
         (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff] * 8;
  }
  return in_lr;
}

