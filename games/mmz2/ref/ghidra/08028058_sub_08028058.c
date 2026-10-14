// sub_08028058 at 0x08028058 (thumb)

undefined4 sub_08028058(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  cVar1 = *(char *)(param_1 + 0x17f);
  if ((cVar1 == '\x7f') || (cVar1 == -0x7e)) {
    *(undefined *)(param_1 + 0x18d) = 0xff;
    goto LAB_080280ee;
  }
  *(undefined *)(param_1 + 0x18d) = 4;
  if (cVar1 == '~') {
LAB_080280cc:
    sub_0801E9FC(param_1,0x7f);
  }
  else {
    if (cVar1 != -0x7f) {
      if ((int)*(char *)(param_1 + 0x192) == 0) {
        sub_0801E9FC(param_1,0x7f);
        goto LAB_080280ee;
      }
      if (-(~(int)*(char *)(param_1 + 0x192) >> 0x1f) != (*(byte *)(param_1 + 10) >> 4 & 1))
      goto LAB_080280cc;
    }
    sub_0801E9FC(param_1,0x82);
  }
LAB_080280ee:
  if (*(char *)(param_1 + 0x174) == '\0') {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_0802812C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_080281A8(param_1);
  }
  return in_lr;
}

