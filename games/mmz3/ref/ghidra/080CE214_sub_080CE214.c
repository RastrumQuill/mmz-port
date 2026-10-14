// sub_080CE214 at 0x080CE214 (thumb)

undefined4 sub_080CE214(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080ce242;
  *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + (short)*(undefined4 *)(param_1 + 0x5c);
  sub_080CDFEC(param_1);
  sub_080177F4(param_1);
LAB_080ce242:
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

