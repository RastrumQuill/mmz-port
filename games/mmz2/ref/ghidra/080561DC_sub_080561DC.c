// sub_080561DC at 0x080561DC (thumb)

undefined4 sub_080561DC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 0xda) + 1;
    *(byte *)(param_1 + 0xda) = bVar1;
    if (bVar1 < *(byte *)(param_1 + 0xc3)) {
      uVar2 = 0x80;
    }
    else {
      uVar2 = 0x48;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    if (*(byte *)(param_1 + 0xda) < *(byte *)(param_1 + 0xc3)) {
      cVar3 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar3 = '\b';
    }
    *(char *)(param_1 + 0xe) = cVar3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

