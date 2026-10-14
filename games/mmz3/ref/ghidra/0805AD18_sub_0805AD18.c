// sub_0805AD18 at 0x0805AD18 (thumb)

undefined4 sub_0805AD18(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb40b);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    DAT_020301b2 = DAT_020301b2 | 2;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    local_10 = 0x600;
    local_c = 0xffffe800;
    uVar3 = sub_080C73F8(param_1,&local_10);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  else {
    if (bVar1 != 2) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

