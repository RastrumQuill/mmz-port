// sub_0808B3B0 at 0x0808B3B0 (thumb)

undefined4 sub_0808B3B0(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0808BAC4(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0808BAE4(param_1);
  sub_0808BA04(param_1);
  pcVar2 = (char *)(param_1 + 0xb9);
  if (*pcVar2 != '\0') {
    *pcVar2 = *pcVar2 + -1;
  }
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
      *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  if (*pcVar2 == '\0') {
    uVar1 = sub_0807F8F0(param_1,0x3c);
    if ((((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6400U < 0xc801) &&
        ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) !=
         *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54))) && (uVar1 < 3)) {
      *(undefined *)(param_1 + 0xe) = 4;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *pcVar2 = '`';
    }
  }
  return in_lr;
}

