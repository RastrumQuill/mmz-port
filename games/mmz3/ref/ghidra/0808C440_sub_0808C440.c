// sub_0808C440 at 0x0808C440 (thumb)

undefined4 sub_0808C440(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08365858);
    *(undefined *)(param_1 + 0x12) = 0x30;
    sub_08017700(param_1,0x7106);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar1 < 0x1000) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

