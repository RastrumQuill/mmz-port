// sub_08056408 at 0x08056408 (thumb)

undefined4 sub_08056408(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_080FE598(auStack_c,&DAT_080feb8c,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb302);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xc6) == '\0') {
      uVar1 = auStack_c[*(byte *)(param_1 + 0xc5)];
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

