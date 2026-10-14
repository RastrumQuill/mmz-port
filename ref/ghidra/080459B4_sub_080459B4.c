// sub_080459B4 at 0x080459B4 (thumb)

undefined4 sub_080459B4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    uVar2 = sub_080A7E48(param_1,1,0);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\x04') {
    if (cVar1 == '\x18') {
      sub_08097F28(param_1,0,0);
      sub_08097F28(param_1,1,0);
      return in_lr;
    }
    if (cVar1 != '$') {
      if (cVar1 != 'b') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
  }
  sub_08001EAC(0xb1);
  return in_lr;
}

