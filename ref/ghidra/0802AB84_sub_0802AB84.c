// sub_0802AB84 at 0x0802AB84 (thumb)

undefined4 sub_0802AB84(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    uVar1 = 2;
    if ((0x2f < *(short *)(param_1 + 0x8c)) && (uVar1 = 0, *(short *)(param_1 + 0x8c) < 0x48)) {
      uVar1 = 1;
    }
    uVar1 = sub_0802B120(param_1,uVar1);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  sub_080297C0(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

