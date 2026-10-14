// sub_08036560 at 0x08036560 (thumb)

undefined4 sub_08036560(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x12) == '\f') {
    if (*(int *)(DAT_0202286c + 0x50) < *(int *)(param_1 + 0x50) + -0x4000) {
      sub_0807B54C(param_1,1,4);
      sub_0807B54C(param_1,1,5);
      sub_0807B54C(param_1,1,6);
      sub_0807B54C(param_1,1,7);
    }
    else {
      sub_0807B54C(param_1,1,0);
      sub_0807B54C(param_1,1,1);
      sub_0807B54C(param_1,1,2);
      sub_0807B54C(param_1,1,3);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

