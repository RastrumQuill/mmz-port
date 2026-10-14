// sub_0809425C at 0x0809425C (thumb)

undefined4 sub_0809425C(int param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    sub_080127E4(param_1,0x9200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
  puVar1 = (uint *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[*puVar1 >> 8 & 0xff] * -0x2d;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*puVar1 >> 8 & 0xff] * 0x2d;
  *puVar1 = *puVar1 + 0x200 & 0xffff;
  sub_080128D4(param_1);
  return in_lr;
}

