// sub_08031228 at 0x08031228 (thumb)

undefined4 sub_08031228(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    uVar1 = sub_0809454C(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                         *(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  sub_080297C0(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

