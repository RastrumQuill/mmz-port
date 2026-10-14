// sub_0805E694 at 0x0805E694 (thumb)

undefined4 sub_0805E694(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        sub_0805D670(param_1);
        sub_080177F4(param_1);
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_08017700(param_1,0);
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 10;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0xf2);
    sub_08017700(param_1,0x3200);
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xc4) * -0x200 + 0x100;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(int *)(param_1 + 0xb8) < iVar2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0805D670(param_1);
  sub_080177F4(param_1);
  return in_lr;
}

