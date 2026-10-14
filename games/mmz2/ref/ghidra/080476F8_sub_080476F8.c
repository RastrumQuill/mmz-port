// sub_080476F8 at 0x080476F8 (thumb)

undefined4 sub_080476F8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080127E4(param_1,0xa502);
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar2 = 0x200;
        }
        else {
          uVar2 = 0xfffffe00;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar2;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (iVar3 < 0x601) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x1a;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa501);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

