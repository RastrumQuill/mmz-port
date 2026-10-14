// sub_0807AB40 at 0x0807AB40 (thumb)

undefined4 sub_0807AB40(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xb102);
    sub_08002B10(0x156);
    *(undefined *)(param_1 + 0xd6) = 1;
    *(undefined *)(param_1 + 0x12) = 0x9b;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 0xb101;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(*(int *)(param_1 + 0xd0) + 0xd) != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd6) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(*(int *)(param_1 + 0xd0) + 0xd) < 4) {
      return in_lr;
    }
    uVar2 = 0xb103;
  }
  sub_0801CF00(param_1,uVar2);
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

