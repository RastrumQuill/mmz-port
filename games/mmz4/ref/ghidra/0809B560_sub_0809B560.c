// sub_0809B560 at 0x0809B560 (thumb)

undefined4 sub_0809B560(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = 0xa800;
  local_14[1] = 0xa802;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x107);
    sub_0801CF00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      return in_lr;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

