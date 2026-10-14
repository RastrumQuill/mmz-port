// sub_08086618 at 0x08086618 (thumb)

undefined4 sub_08086618(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  uVar1 = *(ushort *)(param_1 + 0x50);
  if (uVar1 < 0x100) {
    *(ushort *)(param_1 + 0x50) = uVar1 + 0x10;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0x10;
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

