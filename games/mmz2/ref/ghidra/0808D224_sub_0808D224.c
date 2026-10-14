// sub_0808D224 at 0x0808D224 (thumb)

undefined4 sub_0808D224(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
    sub_080127E4(param_1,0x7505);
    uVar3 = 0x100;
    if (0 < *(int *)(param_1 + 0xb4)) {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_0808BACC(param_1);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) * 0xe6;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  sub_0808BC04(param_1);
  sub_080128D4(param_1);
  return in_lr;
}

