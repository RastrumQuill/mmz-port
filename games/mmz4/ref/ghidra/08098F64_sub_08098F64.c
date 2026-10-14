// sub_08098F64 at 0x08098F64 (thumb)

undefined4 sub_08098F64(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6804);
    sub_08002B10(0x15b);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(int *)(param_1 + 0xb4) < 5) {
      uVar2 = 0;
    }
    else {
      uVar2 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

