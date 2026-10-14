// sub_08050898 at 0x08050898 (thumb)

undefined4 sub_08050898(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffd;
        uVar3 = 0x200;
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar3 = 0xfffffe00;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080177F4(param_1);
      uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
      if (uVar4 < 0x2001) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_0800471C(0x54);
    *(undefined2 *)(param_1 + 0xd0) = uVar2;
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xffffffeb | 2;
    sub_08017700(param_1,0xaf02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x71) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

