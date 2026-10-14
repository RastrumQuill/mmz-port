// sub_0802CE68 at 0x0802CE68 (thumb)

undefined4 sub_0802CE68(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    uVar2 = 0x3400;
  }
  else {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = 0x3300;
  }
  sub_08017700(param_1,uVar2);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

