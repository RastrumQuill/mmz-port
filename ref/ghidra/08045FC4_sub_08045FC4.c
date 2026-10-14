// sub_08045FC4 at 0x08045FC4 (thumb)

undefined4 sub_08045FC4(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0xa4);
  }
  sub_080297C0(param_1);
  *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xde) + '\x01';
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08029778(param_1,9);
      sub_080297C0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      if (*(short *)(param_1 + 0x8c) < 0x20) {
        uVar1 = 0x20;
      }
      else if (*(short *)(param_1 + 0x8c) < 0x30) {
        uVar1 = 0x28;
      }
      else {
        uVar1 = 0x30;
      }
      *(undefined *)(param_1 + 0x12) = uVar1;
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\t') {
      sub_08029778(param_1,10);
      sub_080297C0(param_1);
      sub_0808678C(param_1,0,0,0);
      sub_0808678C(param_1,0,1,0);
    }
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

